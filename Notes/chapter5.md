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

![sum of subset](https://github.com/juho-creator/CS-Courses/assets/72856990/917e4f16-b3da-4b90-a2d6-1bcfc3874860)


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
![image](https://github.com/juho-creator/CS-Courses/assets/72856990/813e37f2-9fe0-459c-a1c3-5fd1ade1e734)




