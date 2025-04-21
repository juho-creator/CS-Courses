# 🌲 Prim's Algorithm (Greedy Approach)

> Start from a vertex and grow the **Minimum Spanning Tree (MST)** one edge at a time,  
> always selecting the **smallest-weight edge** that connects a vertex inside the MST to one outside.

<br><br>

## 🧠 Key Data Structures

| Variable       | Description |
|----------------|-------------|
| `W[i][j]`      | **Weight Table** – Cost of the edge between vertex `Vi` and `Vj` |
| `nearest[i]`   | **Nearest Vertex Index** – Index of the vertex in MST that is closest to `Vi` |
| `distance[i]`  | **Minimum Connection Cost** – Weight of the edge from `Vi` to `nearest[i]` (`W[i][nearest[i]]`) |

<br><br>

## 🧾 Summary of the Approach

![image](https://github.com/user-attachments/assets/260dffa5-b52c-4286-b8fa-fa74b6649dce)

1. **Start from an initial vertex** (e.g., `V1`)
2. **Initialize**:  
   - `nearest[i] = 1`  (nearest vertex set to V1)
   - `distance[i] = W[1][i]` for all `i ≠ 1`  (distance to V1)
3. **Repeat `n - 1` times** (since an MST with `n` vertices has exactly `n - 1` edges):  
   - Find vertex `vnear` not yet in the MST with the smallest `distance[vnear]`
   - Add edge `(vnear, nearest[vnear])` to the MST
   - Mark `vnear` as included in the MST (`distance[vnear] = -1`)
   - **Update** `nearest[i]` and `distance[i]` for remaining vertices

</br></br></br>


✅ Prim’s Algorithm is a classic **greedy algorithm**,  
making the best local choice at each step to build an optimal global structure.
