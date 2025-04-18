# Floyd's Algorithm
Floyd’s algorithm finds all-pairs shortest paths by considering every possible intermediate vertex between all node pairs 
</br></br></br>


- **Intermediate Vertex** : Acts as an intermediate between two vertices (ex : D[2][5] = D[2][4] + D[4][5], Intermediate vertex 4)  
- **D [ ][ ]**: Distance (or Cost) matrix
  - Initially set to adjacency matrix (W[][])
  - Stores direct paths (distances) between every pair of vertices 
  - If no direct edge: D[i][j] = ∞

- **P [ ][ ]**: Path matrix 
  - Stores intermediate vertex used in the shortest path from i to j  
  - Initially set to 0 (no intermediate node) </br>

