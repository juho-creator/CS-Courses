#include <iostream>
using namespace std;

void printArray(int S[], int n) {
    for (int i = 0; i < n; i++)
        cout << S[i] << " ";
    cout << endl;
}

void insertionSort(int n, int S[]) {
    int i, j, x;
    for (i = 1; i < n; i++) {
        x = S[i];
        j = i - 1;
        while (j >= 0 && S[j] > x) {
            S[j + 1] = S[j];
            j--;
        }
        S[j + 1] = x;
        cout << "After inserting element " << x << ": ";
        printArray(S, n);
    }
}

int main() {
    int arr[] = { 5, 2, 9, 1, 4, 6 };
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Initial array: ";
    printArray(arr, n);

    insertionSort(n, arr);

    cout << "Sorted array: ";
    printArray(arr, n);

    return 0;
}
