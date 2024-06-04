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
- **PolyNomial Bounded (P)** : Set of all decision problems that can be solved by polynomial time algorithm
- **Verification** : Checking whether the claim solution is the actual solution to the decision problem
  - Failing to verify a solution doesn't mean the answer is "no," and being able to verify solutions quickly doesn't mean the problem can be solved quickly.
  - Verification quickly checks if a solution is correct, even if finding it is hard

- **Nondeterministic Polynomial Bounded (NP)**: Set of problems which there exists a tractable algorithm for checking solutions to see if they are correct
- **Nondeterministic Algorithm** :

