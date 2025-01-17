#include "Graph.h"
#include <queue>
#include <iostream>
#include <climits>
#include "Utils.h"
using namespace std;

void dijkstra(const Graph& graph, int startNode) {
    int numberOfNodes = graph.getAdjList().size();
    vector<int> distances(numberOfNodes, INT_MAX); 
    
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<>> minHeap;

    distances[startNode] = 0;
    minHeap.emplace(0, startNode);

    while (!minHeap.empty()) {
        int currentDistance = minHeap.top().first;
        int currentNode = minHeap.top().second;
        minHeap.pop();


        if (currentDistance > distances[currentNode]) continue;

        for (const auto& [neighbor, weight] : graph.getAdjList()[currentNode]) {
            int newDistance = currentDistance + weight;

            if (newDistance < distances[neighbor]) {
                distances[neighbor] = newDistance;
                minHeap.emplace(newDistance, neighbor);
            }
        }
    }

}
