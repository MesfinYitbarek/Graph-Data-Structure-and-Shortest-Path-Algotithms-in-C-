# Graph Data Structure with Shortest Path Algorithms

## 📘 Description
This project implements a **Graph Data Structure** along with two popular shortest path algorithms:
- **Dijkstra's Algorithm**
- **Bellman-Ford Algorithm**

---

## 🛠 Features
- **Graph Representation**: Uses adjacency lists for efficient storage.
- **Dijkstra's Algorithm**: Finds the shortest path in graphs with non-negative weights.
- **Bellman-Ford Algorithm**: Handles graphs with negative weights and detects negative-weight cycles.

---

## 📂 Project Structure

```plaintext
src/
├── .vscode/                     # Configuration for VSCode
│   └── tasks.json               # Build tasks configuration
├── BellmanFord.cpp              # Implementation of Bellman-Ford Algorithm
├── Dijkstra.cpp                 # Implementation of Dijkstra's Algorithm
├── Graph.cpp                    # Graph implementation
├── Graph.h                      # Graph header file
├── Utils.cpp                    # Utility functions (e.g., results display)
├── Utils.h                      # Utility functions header file
├── main.cpp                     # Entry point for the project
└── ReadMe.md                    # Project documentation
```

## 🚀 Getting Started

### Prerequisites
Ensure the following tools are installed on your system:
- **C++ Compiler**: (e.g., MinGW, MSVC)
- **Visual Studio Code**: with the following extensions:
  - [C/C++](https://marketplace.visualstudio.com/items?itemName=ms-vscode.cpptools)
  - [Code Runner](https://marketplace.visualstudio.com/items?itemName=formulahendry.code-runner)

### Build and Run Instructions
1. Clone the repository:
   ```bash
   git clone https://github.com/username/Graph-Shortest-Path-Project.git
  
   
### 🔍 Algorithms Overview
**Dijkstra's Algorithm**
Dijkstra's Algorithm is a greedy algorithm for finding the shortest path from a source node to all other nodes in a graph with non-negative weights.

Steps:
  - Initialize distances from the source node to all other nodes as infinity (INT_MAX).
  - Use a priority queue to store nodes and their current distances.
  - Continuously extract the node with the minimum distance, update its neighbors' distances, and repeat until all nodes are processed.
**Bellman-Ford Algorithm**
Bellman-Ford Algorithm is suitable for graphs with negative weights. It also detects negative-weight cycles.

Steps:
  - Initialize distances from the source node to all other nodes as infinity (INT_MAX).
  - Relax all edges (update distances) V-1 times, where V is the number of vertices.
  - Check for negative-weight cycles by iterating over all edges one last time.
  - 
### 📊 Performance Analysis
**Goals**
  - Measure the runtime of both algorithms for graphs of varying sizes.
  - Compare the efficiency of Dijkstra and Bellman-Ford in terms of:
    
**Time Complexity:**
  **Dijkstra:** O((V + E) log V) using a priority queue.
  **Bellman-Ford:** O(V * E).
  
**Space Complexity:**
  **Both algorithms:** O(V + E) for adjacency list storage.

## 👨‍💻 Contributors

### Member 1: Graph Structure
- **Branch:** `graph-structure`
- **Main Contributions:** Defined the Graph class, implemented edge insertion and adjacency list retrieval.

### Member 2: Dijkstra's Algorithm
- **Branch:** `Dijkstra-Algorithm`
- **Main Contributions:** Implemented Dijkstra's Algorithm.

### Member 3: Bellman-Ford Algorithm
- **Branch:** `bellman-ford-`
- **Main Contributions:** Developed Bellman-Ford Algorithm with edge relaxation, negative-weight cycle detection, and clear result formatting.

### Member 4: Utility Functions
- **Branch:** `feature/utils-`
- **Main Contributions:** Created utility functions for result printing.

### Member 5: Main Program and documentation
- **Branch:** `feature/main_program-and-documentation`
- **Main Contributions:** Set up the main program and README file.

## Group Members
   **Member 1** : Helina Solomon   NSR/1255/13
   
   **Member 2** : Yared Ekubay     NSR/2857/13
   
   **Member 3** : Kirubel Tesfaw   NSR/2788/13
   
   **Member 4** : Liya Mekonnen    NSR/1512/13
   
   **Member 5** : Mesfin Yitbarek  NSR/1661/13

