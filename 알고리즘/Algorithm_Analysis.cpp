#include <iostream>
#include <cmath>
using namespace std;

// Sequential Search Algorithm - O(n)
void SeqSearch(int n, int S[], int &location, int x) {
    location = 1;
    while (location <= n && S[location] != x) {
        location++;
    }
    if (location > n) {
        location = -1;
    }
}

// Binary Search Algorithm - O(log n)
void BinarySearch(int n, int S[], int &location, int x) {
    int high, low, mid;
    location = -1;
    low = 0;
    high = n;
    while (low <= high) {
        mid = (low + high) / 2;
        if (S[mid] == x) {
            location = mid;
            break;
        } else if (S[mid] < x) {
            low = mid + 1;  // Update low for the right half
        } else {
            high = mid - 1; // Update high for the left half
        }
    }
}

// Recursive Fibonacci function
int recursiveFibonacci(int n) {
    if (n <= 1) {
        return n;
    } else {
        return recursiveFibonacci(n - 1) + recursiveFibonacci(n - 2);
    }
}

// Iterative Fibonacci function
int iterativeFibonacci(int n) {
    int fib[n + 1];
    fib[0] = 0;
    if (n > 0) {
        fib[1] = 1;
        for (int i = 2; i <= n; i++) {
            fib[i] = fib[i - 1] + fib[i - 2];
        }
    }
    return fib[n];
}

int main() {
    int n = 5;
    int S[n + 1] = {2, 6, 8, 33, 45, 234};
    int locationSeq, locationBin;
    int x = 234;

    SeqSearch(n, S, locationSeq, x);
    if (locationSeq != -1) {
        cout << "Sequential Search: Key of " << x << " found at " << locationSeq << endl;
    } else {
        cout << "Sequential Search: Key not found" << endl;
    }

    BinarySearch(n, S, locationBin, x);
    if (locationBin != -1) {
        cout << "Binary Search: Key of " << x << " found at " << locationBin << endl;
    } else {
        cout << "Binary Search: Key not found" << endl;
    }

    cout << endl << "Fibonacci Numbers:" << endl;
    for (int i = 0; i < 50; i++) {
        cout << "Index " << i << endl;
        cout << "Iterative Fibonacci number at index " << i << ": " << iterativeFibonacci(i) << endl;
        cout << "Recursive Fibonacci number at index " << i << ": " << recursiveFibonacci(i) << endl;
        cout << endl;
    }

    return 0;
}
