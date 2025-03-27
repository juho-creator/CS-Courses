# Branch and Bound
Non-promising if :
- bound <= maximum profit (branch is pruned when the node is visited)
- weight > w (set bound to $0)

</br></br>


##  DFS vs BFS vs Best-First Search
| [Depth First Search](https://www.youtube.com/watch?v=Urx87-NMm6c) | [Breadth First Search](https://www.youtube.com/watch?v=HZ5YTanv5QE) | Best First Search |
|-------------------------------------------------------------------|-------------------------------------------------------------------|-----------------------------------------------------------------|
| Searches vertical before horizontal                               | Searches horizontal before vertical                               | A modified version of BFS that prioritizes nodes based on a given heuristic </br> (ex: determining promising, unexpanded node with the greatest bound) |

</br></br>



## Backtracking vs Branch and Bound 
| Feature                      | Backtracking                                                                 | Branch and Bound                                                             |
|------------------------------|------------------------------------------------------------------------------|----------------------------------------------------------------------------- |
| **Basic Concept**            | Systematic search over possible solutions                                    | Systematic search with pruning based on bounds                               |
| **Approach**                 | Depth-First Search (DFS)                                                     | Best-First Search (using priority queue)                                     |
| **Problem Type**             | Combinatorial problems (e.g., N-Queens, Sudoku)                              | Optimization problems (e.g., Knapsack, Traveling Salesman)                   |
| **Solution Space Exploration**| Explores all possible solutions unless pruned                               | Explores potential solutions with bounds to avoid unnecessary searches       |


</br></br>



# Knapsack Problem 
## Breadth First Search with Branch and Bound Pruning
![image](https://github.com/juho-creator/CS-Courses/assets/72856990/41f390b1-0c5c-421c-9cf7-1621903b55a1)
</br></br>



## Best First Search with Branch and Bound Pruning
![image](https://github.com/juho-creator/CS-Courses/assets/72856990/65867091-7aac-44c4-b720-702671c35004)
</br></br>

# Traveling Salesperson Problem
## Best First Search with Branch and Bound 
>[!NOTE]
>**IDK**
