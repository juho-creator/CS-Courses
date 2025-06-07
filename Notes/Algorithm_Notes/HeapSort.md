# Heap Sort
Heap Sort is a comparison-based sorting algorithm with two main steps: </br></br>
**Step 1**: Builds a max-heap (each parent ≥ its children).  </br>
**Step 2**: Repeatedly remove the root (max), place it at the end, and restore the heap using sift-down.
</br></br>
</br></br>



## Step1 : Creating the Maximum Heap
Given an input array, we first represent it as a binary tree: </br>
![image](https://github.com/user-attachments/assets/87263e9b-6b1b-4231-982f-52b66652c3c8)
</br></br></br>

We then apply sift-down operations from the bottom up, swapping each parent with its largest child as needed, to maintain the max-heap property throughout the tree.</br>
![image](https://github.com/user-attachments/assets/a9720329-820f-436f-b03d-31dae990855b)
</br></br></br>


**Result** : A valid max-heap ready for sorting! Now we're ready to sort the array! </br>
![image](https://github.com/user-attachments/assets/fdc27fe1-7915-4343-9a57-6bde79b8893b)


</br></br></br>
## Step 2 : Sorting the array via removing the root and using siftdown

1. After removing the key at the root (10), move the last
key at the bottom level to the root (1). </br>
2. Then, sift that key down until the heap property is
restored. </br>
3. The process is repeated to create a sorted array </br> 

![image](https://github.com/user-attachments/assets/a89ba017-be8b-4ff5-8405-c735944d035f)


</br></br></br>

# 📊 Analyzing Worst-Case Time Complexity of HeapSort

## Definitions
- **n**: Total number of elements in the heap
- **d**: Height of the heap  
  ↳ Since a heap is a complete binary tree:  
  `n = 2^d` ⇒ `d = log₂(n)`

---

## ⏱ Breakdown of HeapSort Time Complexity

### 1. `makeHeap` Phase
- Constructs the initial max heap from an unsorted array.
- Each `siftDown` operation depends on the node's depth.
- Total comparisons across all levels: **O(n)**

### 2. `removeKeys` Phase
- Removes the maximum (root) element `n` times.
- Each removal requires a `siftDown` of up to `log n` depth.
- Total comparisons: **O(n log n)**

---

## 🧮 Total Time Complexity
✅ **Worst-case time complexity of HeapSort is O(n log n)**














</br></br></br>

## Reference 
- [Quick Animation of Heap Sort](https://www.youtube.com/watch?v=2DmK_H7IdTo&list=TLPQMDEwNjIwMjRo_xbm40HvMA&index=2)
- [Heap Sort Code](https://github.com/juho-creator/CS-Courses/blob/main/Notes/Algorithm_Code/HeapSort.cpp)
  

