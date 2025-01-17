#include "Graph.h"
#include <iostream>
#include <climits>
#include "Utils.h"
using namespace std;

void bellmanFord(const Graph &graph, int startNode)
{
    int numberOfNodes = graph.getAdjList().size();
    vector<int> distances(numberOfNodes, INT_MAX);
    distances[startNode] = 0;

    for (int i = 1; i < numberOfNodes; ++i)
    {
        for (int u = 0; u < numberOfNodes; ++u)
        {
            for (const auto &[v, weight] : graph.getAdjList()[u])
            {
                if (distances[u] != INT_MAX && distances[u] + weight < distances[v])
                {
                    distances[v] = distances[u] + weight;
                }
            }
        }
    }

    for (int u = 0; u < numberOfNodes; ++u)
    {
        for (const auto &[v, weight] : graph.getAdjList()[u])
        {
            if (distances[u] != INT_MAX && distances[u] + weight < distances[v])
            {
                cout << "Graph contains a negative-weight cycle.\n";
                return;
            }
        }
    }

    printResults("Bellman-Ford Algorithm", startNode, distances);
}
