#include <bits/stdc++.h>
using namespace std;

void addEdge(vector<vector<int>> &adj, int s, int t){
    adj[s].push_back(t);
    adj[t].push_back(s);
}

// Recursive function for DFS traversal
void DFSRec(vector<vector<int>> &adj, vector<bool> &visited,int s){
    // Mark the current vertex as visited
    visited[s] = true;

    // Print the current vertex
    cout << s << " ";

    // Recursively visit all adjacent vertices that are not visited yet
    for (int i : adj[s])
        if (visited[i] == false)
            DFSRec(adj, visited, i);
}

// Main DFS function to perform DFS for the entire graph
void DFS(vector<vector<int>> &adj){
    vector<bool> visited(adj.size(), false);

    // Loop through all vertices to handle disconnected graph
    for (int i = 0; i < adj.size(); i++){
        if (visited[i] == false){
            // If vertex i has not been visited,
            // perform DFS from it
            DFSRec(adj, visited, i);
        }
    }
}
