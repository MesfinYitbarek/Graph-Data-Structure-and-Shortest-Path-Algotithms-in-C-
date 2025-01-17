#include "Utils.h"

void printResults(const string& algorithmName, int startNode, const vector<int>& distances) {
    cout << "===== " << algorithmName << " =====\n";
    cout << "Starting from node " << startNode << ":\n";
    for (int i = 0; i < distances.size(); ++i) {
        cout << "Node " << i << " -> Distance: ";
        if (distances[i] == INT_MAX) {
            cout << "Unreachable (INF)\n";
        } else {
            cout << distances[i] << "\n";
        }
    }
    cout << "==============================\n";
}
