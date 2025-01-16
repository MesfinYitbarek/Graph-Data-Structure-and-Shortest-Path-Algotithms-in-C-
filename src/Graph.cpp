#include "Graph.h"

Graph::Graph(int vertices) : numberOfNodes(vertices), adjList(vertices) {}

void Graph::addEdge(int u, int v, int weight) {
    adjList[u].emplace_back(v, weight);
}
