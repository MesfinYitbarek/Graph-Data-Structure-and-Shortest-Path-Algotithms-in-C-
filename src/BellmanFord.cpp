#include "Graph.h"
#include <iostream>
#include <climits>
using namespace std;

void bellmanFord(const Graph& graph, int startNode) {
    int numberOfNodes = graph.getAdjList().size();
    vector<int> distances(numberOfNodes, INT_MAX);
    distances[startNode] = 0;

}
