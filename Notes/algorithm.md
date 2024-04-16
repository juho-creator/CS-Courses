# CS-Courses
Notes on CS lectures
</br></br></br>



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
**Homogeneous Linear Recurrence Relations**
1. Find the recurrence relation for the recursive function.
2. Transform the recurrence relation into a homogeneous equation.
3. Formulate the characteristic equation using the homogeneous equation.
4. Determine the roots of the characteristic equation.
5. Use the roots to derive the general solution of the homogeneous equation.
6. Analyze two cases:
   - **Case 1**: The equation has k distinct roots.
   - **Case 2**: Some roots have multiplicity m > 1.
7. The general solution represents the time complexity behavior of the recursive function.


**Nonhomogeneous Linear Recurrence Relations**
</br></br>



### Dynamic programing vs Divide and Conquer
![image](https://github.com/juho-creator/CS-Courses/assets/72856990/70a552a3-b123-464d-89e2-6afe969cc20d)
Just like divide and conquer, dynamic programming also solves by breaking down into multiple subproblems.
However, it stores any redundant calculation/function calls in advance to prevent repetition.
This improves the time complexity of an algorithm.


![image](https://github.com/juho-creator/CS-Courses/assets/72856990/17c79ae7-9915-4211-b3ec-867c00989d75)
</br></br></br>

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
