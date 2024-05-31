# Backtracking
> [!NOTE]  
> **Finding the pruned space tree for solution over the full tree allows the algorithm run faster**

- Check whether each node is promising using depth-first search 
- If nonpromising, backtrack to node's parent and try other path </br>
</br></br>


## N Queens Problem
- Placing N queens on an N X N chesboard so that no two queens threaten each other
![image](https://github.com/juho-creator/CS-Courses/assets/72856990/c9481119-9a5b-410d-9a70-de5dc3bebe64)
**Following is a pruned space tree with all the nonpromising nodes removed**




</br></br>



## Sum of Subset Problem 
- Finding all possible subsets that results in W when summed up all together
</br>

![image](https://github.com/juho-creator/CS-Courses/assets/72856990/1075a09f-49a3-4153-82d1-96b4dc3678cd)

1. If node is non promising, that is, it is not possible to end up with the solution in the next step,
the node is pruned (removed). 
</br>

2. Else if node is promising, depth in search is performed by creating 2 nodes with each being  </br>
**current weight + next weight** and **current weight** respectively.
</br>

3. The process mentioned above is repeated recursively until we get a complete pruned state space tree.

</br></br>


##  m-coloring problem
Given m colors, find all ways to color an undirected graph so that no two adjacent vertices are the same color
![image](https://github.com/juho-creator/CS-Courses/assets/72856990/2dee1e31-f2d5-4eca-8a9e-62ed597c4919)
</br></br>


## Hamiltonian Circuit Problem
IDK
</br></br>


## Fractional Knapsack Problem
아이템을 나눠서 비워있는 만큼만 채움 </br>
![image](https://github.com/juho-creator/CS-Courses/assets/72856990/5854a692-c3d4-4ce9-9875-63460d1cc67f)



