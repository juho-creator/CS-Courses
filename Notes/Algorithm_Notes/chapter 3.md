# 🔹 Ways of Solving a Problem

### 1. Divide and Conquer

- Recursively splits a problem into **independent subproblems**
- Always uses a **top-down approach**
- Does **not reuse** solutions (no overlapping)
- **Examples**: Recursive Fibonacci, Merge Sort, Quick Sort, Binary Search

</br>



### 2. Dynamic Programming
- Solves **overlapping subproblems** efficiently
- Stores results to **avoid recomputation**
- Two approaches:
  - **Top-down**: recursion + **memoization**
  - **Bottom-up**: iterative **tabulation**
- **Examples**: Floyd's Algorithm, TSP, OBST, Iterative Fibonacci, Knapsack

---
</br>
</br>
</br>


# 🔹 Classifying Problems

## 📘 Counting

### Binomial Coefficient
- `C(n, k)` = number of ways to choose `k` items from `n`
- **DP Recurrence**:
  ```
  C(n, k) = C(n-1, k-1) + C(n-1, k)
  ```
- Applications: combinations, Pascal’s Triangle, probability

---
</br></br>
</br>



## 🧮 Optimization

### 1. Floyd's Algorithm

Floyd’s algorithm computes the **shortest paths between all pairs of vertices** by progressively considering each vertex as an intermediate.
* Efficient for dense graphs or when all-pairs shortest paths are needed.

</br>

- **Goal**: Compute `D[i][j]`, the shortest path distance from vertex `i` to vertex `j`
- **Approach**: Dynamic Programming (Bottom-Up)
- **Core Recurrence**:
  ```
  D[i][j] = min(D[i][j], D[i][k] + D[k][j])  for all 1 ≤ k ≤ n
  ```

</br>

#### 🔹 Key Matrices:

- **D[ ][ ]**: Distance (or Cost) Matrix  
  - Initially set to the adjacency matrix `W[ ][ ]`
  - Stores current shortest path estimates between each pair
  - If no direct edge: `D[i][j] = ∞`

- **P[ ][ ]**: Path Matrix (optional but useful)  
  - Records the **intermediate vertex** used in the shortest path from `i` to `j`
  - Initially set to `None` or `-1`, meaning no intermediate
  - Used later to **reconstruct** the actual path taken

</br>

#### 🔹 How It Works:

1. Start with `D = W` (direct distances)
2. For each vertex `k` from 1 to `n` (intermediate):
   - Update all `D[i][j]` by checking if going through `k` offers a shorter path:
     ```
     if D[i][j] > D[i][k] + D[k][j]:
         D[i][j] = D[i][k] + D[k][j]
         P[i][j] = k
     ```
3. After n iterations,
    - `D[i][j]` contains the shortest distances between all pairs
    - `P[i][j]` contains the intermediate vertices for constructing the optimal path

</br>

#### 🔹 Time Complexity: O(n^3)


</br>
</br>
</br>


### 2. Traveling Salesman Problem (TSP)
- Goal: Shortest path visiting **all nodes once**, then return to start
- **Approach**: Dynamic Programming + Bitmasking
  - **State**: `dp[i][mask]` → shortest path starting at node `i` with visited nodes `mask`
  - **Bitmasking**: represents visited cities (e.g., `1011` = nodes 0, 1, 3 visited)
- **Time Complexity**:
  ```
  O(n^2 * 2^n)
  ```
- Much faster than brute-force `O(n!)`

</br></br>
</br>




### 3. Optimal Binary Search Tree (OBST)
- Goal: Build a BST that **minimizes expected search cost**
- Assumes keys are **sorted**
- More frequently searched keys should be placed **closer to the root**
- **DP Recurrence**:
  ```
  A[i][j] = min ( A[i][r-1] + A[r+1][j] + sum(P_k) ) for i ≤ r ≤ j
  where k = i to j
  ```
- `P_k` = probability of searching key `k`

---


</br>
</br>
</br>


# References 
- [Animation of Floyd's Algorithm with Matrices](https://www.youtube.com/watch?v=sLg6Leb-xt0&t=73s)

