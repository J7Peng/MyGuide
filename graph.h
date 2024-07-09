#ifndef GRAPH_H
#define GRAPH_H

#include <vector>
#include <string>
#include <climits>
#include <queue>
#include <algorithm>
#include <unordered_map>

struct Edge {
    int dest;
    int weight;
};

struct Vertex {
    std::string name;
    std::vector<Edge> edges;
};

class Graph {
public:
    Graph(int n) : vertices(n) {}

    void addVertex(int id, const std::string& name) {
        vertices[id].name = name;
        nameToId[name] = id;
    }

    void addEdge(int src, int dest, int weight) {
        vertices[src].edges.push_back({dest, weight});
        vertices[dest].edges.push_back({src, weight});
    }

    void removeEdge(int src, int dest) {
        auto &srcEdges = vertices[src].edges;
        srcEdges.erase(std::remove_if(srcEdges.begin(), srcEdges.end(), [dest](const Edge &edge) {
                           return edge.dest == dest;
                       }), srcEdges.end());

        auto &destEdges = vertices[dest].edges;
        destEdges.erase(std::remove_if(destEdges.begin(), destEdges.end(), [src](const Edge &edge) {
                            return edge.dest == src;
                        }), destEdges.end());
    }

    void modifyEdge(int src, int dest, int newWeight) {
        for (auto &edge : vertices[src].edges) {
            if (edge.dest == dest) {
                edge.weight = newWeight;
                break;
            }
        }
        for (auto &edge : vertices[dest].edges) {
            if (edge.dest == src) {
                edge.weight = newWeight;
                break;
            }
        }
    }

    std::string getVertexInfo(int id) const {
        if (id >= 0 && id < vertices.size()) {
            return  vertices[id].name;
        }
        return "景点不存在";
    }

    std::vector<int> dijkstra(int src) const {
        int n = vertices.size();
        std::vector<int> dist(n, INT_MAX);
        std::vector<int> prev(n, -1);
        dist[src] = 0;
        std::priority_queue<std::pair<int, int>, std::vector<std::pair<int, int>>, std::greater<>> pq;
        pq.push({0, src});

        while (!pq.empty()) {
            int u = pq.top().second;
            pq.pop();

            for (const auto& edge : vertices[u].edges) {
                int v = edge.dest;
                int weight = edge.weight;
                if (dist[u] + weight < dist[v]) {
                    dist[v] = dist[u] + weight;
                    prev[v] = u;
                    pq.push({dist[v], v});
                }
            }
        }

        return prev;
    }

    std::vector<std::vector<int>> floydWarshall() const {
        int n = vertices.size();
        std::vector<std::vector<int>> dist(n, std::vector<int>(n, INT_MAX));
        std::vector<std::vector<int>> next(n, std::vector<int>(n, -1));

        for (int i = 0; i < n; ++i) {
            dist[i][i] = 0;
            for (const auto& edge : vertices[i].edges) {
                dist[i][edge.dest] = edge.weight;
                next[i][edge.dest] = edge.dest;
            }
        }

        for (int k = 0; k < n; ++k) {
            for (int i = 0; i < n; ++i) {
                for (int j = 0; j < n; ++j) {
                    if (dist[i][k] != INT_MAX && dist[k][j] != INT_MAX &&
                        dist[i][k] + dist[k][j] < dist[i][j]) {
                        dist[i][j] = dist[i][k] + dist[k][j];
                        next[i][j] = next[i][k];
                    }
                }
            }
        }


        return next;
    }

    std::vector<int> getShortestPathByName(const std::string& start, const std::string& end) const {
        int startId = getVertexIdByName(start);
        int endId = getVertexIdByName(end);

        if (startId == -1 || endId == -1) {
            return {};  // 返回空的 vector 表示没有路径
        }

        auto prev = dijkstra(startId);

        if (prev[endId] == -1) {
            return {};  // 返回空的 vector 表示没有路径
        }

        std::vector<int> path;
        for (int at = endId; at != -1; at = prev[at]) {
            path.push_back(at);
        }
        std::reverse(path.begin(), path.end());
        return path;
    }

    std::vector<std::vector<int>> getAllPathsByName(const std::string& start, const std::string& end) const {
        int startId = getVertexIdByName(start);
        int endId = getVertexIdByName(end);

        if (startId == -1 || endId == -1) {
            return {};  // 返回空的 vector 表示没有路径
        }

        std::vector<std::vector<int>> allPaths;
        std::vector<int> path;
        std::vector<bool> visited(vertices.size(), false);

        dfsAllPaths(startId, endId, visited, path, allPaths);


        return allPaths;
    }

private:
    std::vector<Vertex> vertices;
    std::unordered_map<std::string, int> nameToId;

    int getVertexIdByName(const std::string& name) const {
        auto it = nameToId.find(name);
        if (it != nameToId.end()) {
            return it->second;
        }
        return -1;
    }

    void dfsAllPaths(int current, int end, std::vector<bool>& visited, std::vector<int>& path, std::vector<std::vector<int>>& allPaths) const {
        visited[current] = true;
        path.push_back(current);

        if (current == end) {
            allPaths.push_back(path);
        } else {
            for (const auto& edge : vertices[current].edges) {
                if (!visited[edge.dest]) {
                    dfsAllPaths(edge.dest, end, visited, path, allPaths);
                }
            }
        }

        path.pop_back();
        visited[current] = false;
    }
};

#endif // GRAPH_H
