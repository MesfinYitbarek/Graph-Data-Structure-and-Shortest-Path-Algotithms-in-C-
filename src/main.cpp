#include "Graph.h"
#include <iostream>
#include <vector>
#include <queue>
#include <climits> 

using namespace std;

void dijkstra(const Graph& graph, int startNode);
void bellmanFord(const Graph& graph, int startNode);

int main() {

    int numberOfNodes = 6;
    Graph graph(numberOfNodes);

    graph.addEdge(0, 1, 4);
    graph.addEdge(0, 2, 4);
    graph.addEdge(1, 2, 2);
    graph.addEdge(1, 3, 5);
    graph.addEdge(2, 3, 8);
    graph.addEdge(3, 4, 6);
    graph.addEdge(4, 5, 9);

    cout << "Dijkstra's Algorithm:\n";
    dijkstra(graph, 0);

    cout << "\nBellman-Ford Algorithm:\n";
    bellmanFord(graph, 0);

    return 0;
}
