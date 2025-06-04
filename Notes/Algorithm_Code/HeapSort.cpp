#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>  // for next_permutation


using namespace std;

typedef int keyType;


// Heap Sort Algorithm

/*
    Mechanism
     * Builds a max-heap where each parent is larger than its children.
     * Then repeatedly removes the max (root), places it at the end,
     * and restores the heap using sift-down, resulting in a sorted array.
 */



struct heap {
    vector<keyType> S;
    int heapsize;
};

// Print heap as a tree-like structure
void printHeapAsTree(const vector<keyType>& heap, int size) {
    int level = 0;
    int count = 0;
    int nextLevel = 1;

    cout << "Heap as Tree:" << endl;
    for (int i = 1; i <= size; i++) {
        cout << heap[i] << " ";
        count++;
        if (count == nextLevel) {
            cout << endl;
            level++;
            count = 0;
            nextLevel = 1 << level; // 2^level
        }
    }
    cout << "\n";
}

// Get index of child with larger key
int getLargerChildIndex(heap& H, int parent) {
    int left = 2 * parent;
    int right = 2 * parent + 1;
    if (right <= H.heapsize) {
        return (H.S[left] > H.S[right]) ? left : right;
    }
    else if (left <= H.heapsize) {
        return left;
    }
    else {
        return -1; // No children
    }
}

// siftDown function
void siftDown(heap& H, int i) {
    int parent = i;
    int largerChild = getLargerChildIndex(H, parent);
    while (largerChild != -1 && H.S[parent] < H.S[largerChild]) {
        swap(H.S[parent], H.S[largerChild]);
        parent = largerChild;
        largerChild = getLargerChildIndex(H, parent);
    }
}

// root function: extract max
keyType root(heap& H) {
    keyType keyOut = H.S[1];
    H.S[1] = H.S[H.heapsize];
    H.heapsize--;
    siftDown(H, 1);

    // Visualize after root removal
    cout << "Heap after removing root (" << keyOut << "):" << endl;
    printHeapAsTree(H.S, H.heapsize);

    return keyOut;
}

// removeKeys function (Remove keys and sort array via SiftingDown)
void removeKeys(int n, heap& H, vector<keyType>& S) {
    for (int i = n; i >= 1; i--) {
        S[i] = root(H);
    }
}

// makeHeap function (Creates Max Heap)
void makeHeap(int n, heap& H) {
    H.heapsize = n;
    for (int i = n / 2; i >= 1; i--) {
        siftDown(H, i);
    }
}

// heapSort function
void heapSort(int n, heap& H) {
    makeHeap(n, H);
    cout << "After makeHeap:" << endl;
    printHeapAsTree(H.S, H.heapsize);

    removeKeys(n, H, H.S);
}






// ===========================
// TEST ALL PERMUTATIONS
// ===========================
int main() {
    vector<int> base = { 1, 2, 3, 4 };
    int test_case = 1;

    do {
        // Print initial input
        cout << endl << endl << endl;
        cout << "=====================================" << endl;
        cout << "Test case #" << test_case << " - Input: ";
        for (int num : base) {
            cout << num << " ";
        }
        cout << endl;

        // Prepare heap with dummy 0 at index 0
        heap H;
        H.S.push_back(0); // dummy index 0
        for (int num : base) {
            H.S.push_back(num);
        }
        int n = H.S.size() - 1;

        heapSort(n, H);

        // Print sorted output
        cout << "Sorted output: ";
        for (int i = 1; i <= n; i++) {
            cout << H.S[i] << " ";
        }
        cout << "\n" << endl;

        test_case++;

    } while (next_permutation(base.begin(), base.end()));

    return 0;
}
