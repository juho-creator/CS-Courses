#include <iostream>
using namespace std;





void printArray(int S[], int n) {
    for (int i = 0; i < n; i++)
        cout << S[i] << " ";
    cout << endl;
}




void exchangeSort(int S[], int n) {
    for (int i = 0; i < n-1; i++) {
        for (int j = i+1 ; j < n; j++) {
            //// Ascending Order
            //if (S[i] > S[j]) {
            //    int save = S[i];
            //    S[i] = S[j];
            //    S[j] = save;
            //}

            // Descending Order
            if (S[i] < S[j]) {
                int save = S[i];
                S[i] = S[j];
                S[j] = save;
                cout << "Swapped S[" << i << "] and S[" << j << "]: ";
                printArray(S, n);
            }
        } 
    }
}




int main() {
    int arr[] = { 5, 2, 9, 1, 4, 6 };
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Initial array: ";
    printArray(arr, n);

    exchangeSort(arr, n);

    cout << "Sorted array: ";
    printArray(arr, n);

    return 0;
}
