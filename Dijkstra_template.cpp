#include <iostream>
#include <vector>
#include <queue>
#include <utility>

using namespace std;

// Large value representing "infinity"
const int INF = 1e9;

// Dijkstra's algorithm function that returns a vector of shortest distances
vector<int> dijkstra(int start, const vector<vector<pair<int, int>>>& adj) {
   // Initialize distances with "infinity"
   vector<int> dist(adj.size(), INF);
   // Priority queue to keep track of vertices to be explored
   priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
   // Start vertex has distance 0
   pq.push({ 0, start });
   dist[start] = 0;

   // Main loop for Dijkstra's algorithm
   while (!pq.empty()) {
      // Get vertex with minimum distance
      int u = pq.top().second;
      int d = pq.top().first;
      pq.pop();

      // Skip this vertex if a shorter path has already been found
      if (d > dist[u]) continue;

      // Update distances of adjacent vertices
      for (const auto& edge : adj[u]) {
         int v = edge.first, w = edge.second;
         if (dist[u] + w < dist[v]) {
            dist[v] = dist[u] + w;
            pq.push({ dist[v], v });
         }
      }
   }
   // Return the final distances
   return dist;
}

int main() {
   // Read number of vertices (n) and edges (m)
   int n, m;
   cin >> n >> m;
   // Adjacency list to store the graph
   vector<vector<pair<int, int>>> adj(n);

   // Read edges and weights
   for (int i = 0; i < m; ++i) {
      int u, v, w;
      cin >> u >> v >> w;
      adj[u].emplace_back(v, w);
      adj[v].emplace_back(u, w);  // For an undirected graph
   }

   // Read start vertex
   int start;
   cin >> start;

   // Get shortest distances from start vertex using Dijkstra's algorithm
   vector<int> distances = dijkstra(start, adj);

   // Output the shortest distances
   for (const auto& d : distances) {
      if (d == INF) {
         cout << "Infinity ";
      }
      else {
         cout << d << " ";
      }
   }
   cout << '\n';

   return 0;
}
