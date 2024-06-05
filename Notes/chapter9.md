# Introduction to the Theory of NP

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

# Theory of NP
- **Polynomial Bounded (P)** : Set of all decision problems that can be solved by polynomial time algorithm
- **Nondeterministic Polynomial Bounded (NP)**: Set of problems which there exists a polynomial time nondeterministic algorithm (can be gussed and verified)
-transformation algorithm : algorithm that converts problem into another format  
- NP complete problem: Can be reduced to take polynomial time
- NP problem : only verification takes polynomial time, but overall take nonpolynomial time due to guessing
- polynomial time many one reducible problem:
problem convertible to another format to be solved more efficiently


 

- **Verification** : Checking whether the claim solution is the actual solution to the decision problem
  - Failing to verify a solution doesn't mean the answer is "no," and being able to verify solutions quickly doesn't mean the problem can be solved quickly.
  - Verification quickly checks if a solution is correct, even if finding it is hard
- **Nondeterministic Algorithm**
> [!NOTE]  
> Nondeterministic Algorithm solves a problem only if guessing and verification each returned Yes and True respectively. 


  1. Guessing (Nondeterministic)
        - Simply produces some string S, a guess at a solution (Yes/No)
    
  2. Verification (Deterministic)
        - Checks if answer is True/False
    
   
      
