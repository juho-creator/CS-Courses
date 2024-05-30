# Backtracking
- Stop performing the depth in search when non-promising node is found. </br>
- Finding the prune space tree for solution over the full tree allows  the algorithm run faster 

### N Queens Problem




### Sum of subset Algorithm (Using backtracking)
Finding all possible subsets that results in W when summed up all together
</br>

If node is non promising, that is, it is not possible to end up with the solution in the next step,
the node is pruned (removed). 
</br>

Else if node is promising, depth in search is performed by creating 2 nodes with each being  </br>
**current weight + next weight** and **current weight** respectively.
</br>

The process mentioned above is repeated recursively until we get a complete pruned state space tree.
</br></br></br>


###  m-coloring problem
Given m colors, find all ways to color an undirected graph so that no two adjacent vertices are the same color
