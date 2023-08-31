#include <iostream>
#include <vector>
#include <queue>
#include <utility> // for std::pair

using namespace std;

const int INF = 1e9; // Large value representing "infinity"

// Function to implement Dijkstra's algorithm
void dijkstra(int start, vector<vector<pair<int, int>>>& adj, vector<int>& dist) {
   priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
   pq.push({ 0, start });
   dist[start] = 0;

   while (!pq.empty()) {
      int u = pq.top().second;
      int d = pq.top().first;
      pq.pop();

      // Skip if a shorter path to this vertex has already been found
      if (d > dist[u]) continue;

      // Update distances to adjacent vertices
      for (auto& edge : adj[u]) {
         int v = edge.first, w = edge.second;
         if (dist[u] + w < dist[v]) {
            dist[v] = dist[u] + w;
            pq.push({ dist[v], v });
         }
      }
   }
}

int main() {
   int n, m; // n - number of vertices, m - number of edges
   cin >> n >> m;

   // Adjacency list to store the graph
   vector<vector<pair<int, int>>> adj(n);
   vector<int> dist(n, INF); // Vector to store distances from the starting vertex to all others

   // Reading edges of the graph
   for (int i = 0; i < m; ++i) {
      int u, v, w; // u - starting vertex, v - ending vertex, w - weight of the edge
      cin >> u >> v >> w;
      adj[u].push_back({ v, w });
      adj[v].push_back({ u, w }); // If the graph is undirected
   }

   int start; // Starting vertex
   cin >> start;

   // Call the Dijkstra function
   dijkstra(start, adj, dist);

   // Output the shortest distances from the starting vertex to all others
   for (int i = 0; i < n; ++i) {
      if (dist[i] == INF) {
         cout << "Infinity" << " ";
      }
      else {
         cout << dist[i] << " ";
      }
   }
   cout << endl;

   return 0;
}
