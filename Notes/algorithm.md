# Algorithm Analysis
### Levels of Time Complexity 
![image](https://github.com/juho-creator/CS-Courses/assets/72856990/b893c367-a1f3-4b20-9533-3184c2b215f7)
</br></br>



### Understanding Omega, Big O and Theta
![image](https://github.com/juho-creator/CS-Courses/assets/72856990/31eb3832-7c89-4543-99ed-8ae3b3597dcb)
- **f(n)** : Time complexity of program
- **g(n)** : Graph Bound
- **Big O** : Upper bound, Worst case
- **Omega**  : Lower bound, Best case
- **Theta** : Average function, Average case
</br></br>



### Sequential Search vs Binary Search
![image](https://github.com/juho-creator/CS-Courses/assets/72856990/f718afd1-62c9-465a-ba43-2e0e966f1a0b)
- Sequential Search : O(n)
- Binary Search : O(log n)
</br></br>

### Recurive vs Iterative Fibonacci Algorithm
![image](https://github.com/juho-creator/CS-Courses/assets/72856990/2b75cf2c-3cb6-40d9-a744-7ca3105f4169)
</br></br>

#### Iterative
- Time Complexity: O(n) 
- Space Complexity: O(1)
</br></br>

#### Recursive
- Time Complexity: O(r^n) - every function calls two other functions
- Space Complexity: O(n) - maximum depth of the recursion tree is n
</br></br>

### Analyzing time complexity of a recursive function
**Homogeneous Linear Recurrence Relations**</br>
![image](https://github.com/juho-creator/CS-Courses/assets/72856990/bef5dc86-08cb-4720-ae6b-b35d565b1f2a)

1. Find the recurrence relation for the recursive function.
2. Transform the recurrence relation into a homogeneous equation.
3. Formulate the characteristic equation using the homogeneous equation.
4. Determine the roots of the characteristic equation.
5. Use the roots to derive the general solution of the homogeneous equation.
6. Analyze two cases:
   - **Case 1**: The equation has k distinct roots.
   - **Case 2**: Some roots have multiplicity m > 1.
7. The general solution represents the time complexity behavior of the recursive function.
</br></br>

**Nonhomogeneous Linear Recurrence Relations**</br>
![image](https://github.com/juho-creator/CS-Courses/assets/72856990/61fa51ba-677b-492f-83f4-a4763f26d763)

</br></br>



### Dynamic programing vs Divide and Conquer
![image](https://github.com/juho-creator/CS-Courses/assets/72856990/70a552a3-b123-464d-89e2-6afe969cc20d)
</br>
Just like divide and conquer, dynamic programming also solves by breaking down into multiple subproblems.
However, it stores any redundant calculation/function calls in advance to prevent repetition.
This improves the time complexity of an algorithm.


![image](https://github.com/juho-creator/CS-Courses/assets/72856990/17c79ae7-9915-4211-b3ec-867c00989d75)
</br></br></br>

# Greedy Algorithm
Making series of locally optimal choices with the hope of finding a global optimum solution
</br></br></br>

## Prim's Algorithm
1. Start at arbitrary vertext
2. Add smallest edge that conencts a vertext until all vertices are included
![image](https://github.com/juho-creator/CS-Courses/assets/72856990/89da8039-9880-4026-8063-d7a0c642abb5)
</br>



## Kruskal's Algorithm
1. Sort edges in ascending order
2. Add smallest edge that connects
![image](https://github.com/juho-creator/CS-Courses/assets/72856990/ec7582f1-c83c-4955-84e8-a3da01920173)
</br>

### Prim's Algorithm vs Kruskal's Algorithm
![image](https://github.com/juho-creator/CS-Courses/assets/72856990/a9914060-07bd-42d3-bd44-c10836d18dd5)
</br></br></br>


### Huffman Code
Losseless data compression algorithm using variable length binary code
- Represents different characters using different number of bits
![image](https://github.com/juho-creator/CS-Courses/assets/72856990/6fd0a568-82b0-4b39-88dc-878407ce36ea)
</br></br></br>


### Fixed vs Huffman Code
- Huffman Code has variable number of bits 
![image](https://github.com/juho-creator/CS-Courses/assets/72856990/980103b9-b204-4d79-b902-fcb3be945665)
![image](https://github.com/juho-creator/CS-Courses/assets/72856990/78dd5a1b-74d7-474c-bf96-c44c3f8c5d90)
</br></br></br>


# 0-1 Knapsack Problem
Optimization problem where the goal is to maximize the total value of items placed in a knapsack without exceeding its weight capacity. </br>
**Ex**: Selecting items to pack in a suitcase to maximize the total value (utility) of the items without exceeding the weight limit of the suitcase.

1. Brute Force Solution
2. A Simple Greedy Approach
3. 


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






# Reference
**Basics of data structure**
- [Graphs](https://www.youtube.com/watch?v=-VgHk7UMPP4&list=WL)
- [Binomial Coefficient](https://www.youtube.com/watch?v=WHztDZECzlM)



**Time complexity**
- [Calculating Time Complexity](https://www.youtube.com/watch?v=KXAbAa1mieU)
- [Significance of Time Complexity](https://www.youtube.com/watch?v=BiclygL5dXo)
- [Time Complexity Analysis](https://www.youtube.com/watch?v=jbJd7gzefq0)
</br> 


**Fibonacci Algorithm**
- [Fibonacci Algorithm Analysis](https://www.geeksforgeeks.org/program-for-nth-fibonacci-number/)
- [Stepping through Fibonacci Function](https://www.youtube.com/watch?v=zg-ddPbzcKM)
</br> 


**Merge Sort Algorithm** [(Learn More)](https://www.geeksforgeeks.org/time-and-space-complexity-analysis-of-merge-sort/)
- [Merge Sort Animation](https://www.youtube.com/watch?v=4VqmGXwpLqc)
- [Deriving time complexity of merge sort](https://www.youtube.com/watch?v=g1AwUYauqgg)
- [Merge Sort Code](https://www.youtube.com/watch?v=LeWuki7AQLo)
</br>

**Quick Sort Algorithm** [(Learn More)](https://www.geeksforgeeks.org/quick-sort/)
- [Quick Sort Animation](https://www.youtube.com/watch?v=Hoixgm4-P4M)
- [Deriving time complexity of quick sort](https://www.youtube.com/watch?v=-qOVVRIZzao)
- [Quick Sort Code](https://www.youtube.com/watch?v=0jDiBM68NGU)
</br>

**Divide and Conquer vs Dynamic Programming**
- [divide and conquer vs dynamic programming](https://itnext.io/dynamic-programming-vs-divide-and-conquer-2fea680becbe)




**Analyzing time complexity of recursive function**
- [Recurrence Relation](https://www.youtube.com/watch?v=4V30R3I1vLI)
- [Characteristic equation and characteristic roots of recurrence relations](https://www.youtube.com/watch?v=GvOBBcnIjlw)
- [Non-Homogeneous Linear Recurrence Relations](https://www.youtube.com/watch?v=NKsz2mGxX4A)

**Shortest path algorithm**
- [Floyd Warshall Algorithm](https://www.youtube.com/watch?v=4OQeCuLYj-4)
- [플로이드 워셜 알고리즘](https://velog.io/@kimdukbae/%ED%94%8C%EB%A1%9C%EC%9D%B4%EB%93%9C-%EC%9B%8C%EC%85%9C-%EC%95%8C%EA%B3%A0%EB%A6%AC%EC%A6%98-Floyd-Warshall-Algorithm)

**Confusing Concepts**
- [Graph vs Tree](https://www.geeksforgeeks.org/difference-between-graph-and-tree/)
