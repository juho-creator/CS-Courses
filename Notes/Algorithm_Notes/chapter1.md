# What's Time Complexity?
Time complexity is the number of times basic operation is done for each value of input size. </br></br>
The time complexity of an algorithm is determined by :
- **input size** : the size of a parameter, such as size of array, value of a single number
- **basic operation** : group of instructions that gets executed repetitively
</br></br>


### Types of Time Complexity
- **Every Case** : Basic operation is always done same number of times
- **Non Every Case** : Performance of an operation is classified into 3 cases : Best, Worst, and Average case
 </br> </br>


### Sequential Search Time Complexity Analysis
- Best Case Analysis : 1 </br>
- Worst Case Analysis : n  </br>
- Average Case Analysis : Complicated  </br>
  </br> </br>

  
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


