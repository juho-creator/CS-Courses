# Decision Tree for Sorting Algorithms

## 1. SortThree (Fixed, Faster)
![화면 캡처 2025-06-07 190406](https://github.com/user-attachments/assets/8408cd9d-8aa3-44ec-88b7-d8a528f8386e)
</br></br></br></br>



## 2. ExchangeSort (Flexible, Slower)
![image](https://github.com/user-attachments/assets/ed04e1f8-1411-4c83-8784-ec6934b38299)
</br></br></br></br>



## Proofs on Sorting Algorithms
**Lemma 7.1** </br>
Given n distinct keys, there are a total of n! ways of sorting the binary tree. 
Ex : For SortThree, 3! = 6 ways of sorting
</br></br>


**Lemma 7.2** </br>
Worse case number of comparisions its depth
</br></br>


**Lemma 7.3** </br>
To distinguish m different outputs (like permutations), a binary tree needs at least log₂(m) depth; so for n! permutations, we need log₂(n!) depth
</br></br>


**Lemma 7.4** </br>
This inequality gives a lower bound for log₂(n!), proving that any comparison-based sorting algorithm needs at least n log n – 1.45n comparisons.
</br></br></br></br>





## Reference
- [Code for Decision Tree](https://github.com/juho-creator/CS-Courses/blob/main/Notes/Algorithm_Code/decision_tree.cpp)
