# Introduction to the Theory of NP
Problems are divided into classes known as Complexity Classes as follows </br>
![image](https://github.com/juho-creator/CS-Courses/assets/72856990/c2d6eee7-a2da-452e-a0ba-67ed892deb23)
- **NP-Hard**: Problems at least as hard as the hardest problems in NP, but not necessarily in NP themselves.
- **NP-Complete**: Problems in NP and as hard as NP-Hard problems, with solutions verifiable in polynomial time.
- **Polynomial Problem (P) - solvable**: Set of all decision problems that can be solved by polynomial time algorithm
- **Nondeterministic Polynomial Problem (NP) - Guess + Verify**: Verifiable in polynomial time, but finding the solution may require exponential time due to guessing. 

</br></br></br></br>




## Polynomial Time Algorithm
An algorithm with polynomial time complexity.
</br>
**Examples:** Insertion Sort, Sequential Search, etc.
</br></br>

## Intractable Problem
A problem that's impossible to solve efficiently with a polynomial time algorithm. (Cannot be solved with computer)
</br></br></br></br>


## 3 Categories of problems
- **Type 1**: **Polynomial Time Algorithm found** </br>
  Ex : Sorting, Shortest Path Problem, Minimum Spanning Tree Problem</br></br>
- **Type 2**: **Proven to be intractable** </br>
    1. Require non polynomial amount of output</br>
    Ex: Printing all Hamiltonian Circuit/permutations of n keys</br>

    2. Undecidable problem</br>
    Ex: Halting Problem</br></br>
  
- **Type 3**: **Not proven to be intractable, polynomial time algorithms have never been found**</br>
  Ex: Knapsack Problem, TSP, m-coloring Problem, etc
</br></br></br></br>

## Decision Problem
Problem with an answer as "yes" or "no"  </br>
- **TSP Decision Problem**: Is there a tour with a cost less than or equal to a given value?
- **Knapsack Decision Problem**: Can items be packed in the knapsack to achieve exactly a given total value?
</br></br></br></br>




# Deterministic vs Nondeterministic
> [!NOTE]  
> **Nondeterministic Algorithm solves a problem only if guessing and verification each returned Yes and True respectively.**

![image](https://github.com/juho-creator/CS-Courses/assets/72856990/cf464847-10d9-41a1-a1d8-3f2f6ac2ebf8)
![image](https://github.com/juho-creator/CS-Courses/assets/72856990/e845d3ec-f1d2-49db-86f3-d85ae4e1f1b4)

- Nondeterministic Algorithm (Incomputable Time Complexity) </br>
  1. Guessing (Yes/No)
  2. Verification (True/False)
     
- Deterministic Algorithm (Computable Time Complexity) </br>
  Finding solution to problem 
</br></br></br></br>


# Set of all decision problems
![image](https://github.com/juho-creator/CS-Courses/assets/72856990/f4030da1-98ad-42a0-b278-d39057fbfaf0)
</br></br></br></br>


# CNF Satifsfiability Problem 
**Example of CNF** </br>
![image](https://github.com/juho-creator/CS-Courses/assets/72856990/ba1d33d6-ca97-4d8a-935a-ff21ae4c6f67)
- Determines whether there is some truth assignment of variables that makes the CNF true.
</br></br></br></br>



# Theory of NP
- **Polynomial Problem (P)** - **solvable** : Set of all decision problems that can be solved by polynomial time algorithm
- **Nondeterministic Polynomial Problem (NP)**: Verifiable in polynomial time, but finding the solution may require exponential time due to guessing.

- **NP complete problem**: 
</br></br>


# NP Complete Problem 
## transformation algorithm
- algorithm that converts problem into another format
![image](https://github.com/juho-creator/CS-Courses/assets/72856990/9b9361e3-7150-4713-86d1-8336ac323625)
</br></br>

## Example
**Problem A**:
Given an array of n integers, is the smallest in the
latter half of the array?

**Problem B**:
Given an array of n integers, is the largest in the latter
half of the array?
![image](https://github.com/juho-creator/CS-Courses/assets/72856990/d90d3085-1f66-458c-bd11-0893a33ed01d)

</br>

- **polynomial time many one reducible problem**: A problem that could be converted to another form of problem to be solved more efficiently



# NP Completeness
- NP problem that can be reduced to take polynomial time


## Theorem 9.1


## Theorem 9.2

## Theorem 9.3

## Theorem 9.4


# The State of NP
![image](https://github.com/juho-creator/CS-Courses/assets/72856990/6f3c704c-2750-49c9-a350-7f387aba9d82)


# Polynomial Time Turing Reducibility
![image](https://github.com/juho-creator/CS-Courses/assets/72856990/d198e80e-dd80-4a5f-94a5-269061ce8f58) </br>
If Problem A can be solved using polynomial time algorithm for Problem B, </br>
then problem A is polynomial time turing reducible to problem B.





</br></br>

 

    
   
      

