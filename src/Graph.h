#ifndef GRAPH_H
#define GRAPH_H

#include <vector>
#include <utility>

using namespace std;

class Graph {
private:
    int numberOfNodes; 
    vector<vector<pair<int, int>>> adjList; 

public:
    Graph(int vertices); 
    void addEdge(int u, int v, int weight); 
    const vector<vector<pair<int, int>>>& getAdjList() const; 
};

#endif
