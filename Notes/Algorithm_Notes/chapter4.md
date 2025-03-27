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


## Huffman Code
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
</br></br>

## Brute Force Solution
1. Consider all possible subset of S
2. Discard all subset with total weight > W
3. Of those remaining, take one with the max total profit
</br></br>

## Greedy Approach </br>
**Simple Greedy Approach**</br>
**Type1**
- Take items in decsending order of profit </br>
![image](https://github.com/juho-creator/CS-Courses/assets/72856990/892656b2-d2a3-4900-88a3-26b3010e0ecb)
 </br> </br>

 
**Type2**
- Take items in ascending order of weight </br>
![image](https://github.com/juho-creator/CS-Courses/assets/72856990/fe6bbdb6-b22d-4aa3-a912-9f52f25426ca)
</br></br>



**Sophisticated Greedy Approach**
- Take items in descending order of profit/weight </br>
![image](https://github.com/juho-creator/CS-Courses/assets/72856990/581495c1-06fc-4c41-b404-a874bbbe1047)
</br></br>

**Dynamic Programming Approach**
-
</br></br>



