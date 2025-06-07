#include <iostream>
#include <vector>


//  Decision Tree for SortThree (Fixed, Faster computation)  => O(1)
void sortThree(int S[]) {
	int a, b, c; 
	a = S[0];
	b = S[1];
	c = S[2];

	if (a < b) {
		if (b < c) {
			// a < b < c
			S[0] = a;
			S[1] = b;
			S[2] = c;
		}
		else if (c < a) {
			// c < a < b
			S[0] = c;
			S[1] = a;
			S[2] = b;
		}
		else {
			//  a < c < b
			S[0] = a;
			S[1] = c;
			S[2] = b;

		}
	}
	else if (c < a) {
		if (b < a) {
			// c < b < a
			S[0] = c;
			S[1] = b;
			S[2] = a;
		}
		else if (b<c) {
			// b < c < a 
			S[0] = b;
			S[1] = c;
			S[2] = a;
		}
	}
	else {
		// b < a < c
		S[0] = b;
		S[1] = a;
		S[2] = c;
	}
}



// Decision Tree for ExchangeSort (More flexible, Slower computation) => O(n^2)
void exchangeSort(int n, int S[]) {
	for (int i = 0; i < n - 1; i++) {
		for (int j = i + 1; j < n; j++) {
			if (S[j] < S[i]) {
				std::swap(S[i], S[j]);
			}
		}
	}
}

// Print Array
void printArray(int size, int S[]) {
	for (int i = 0; i < size; i++) {
		std::cout << S[i] << " ";
	}
	std::cout << std::endl;
}

int main() {
	
	// 1. SortThree
	int S[] = { 2, 1, 6 };
	sortThree(S);
	printArray(3, S);

	// 2. ExchangeSort
	int A[] = { 2,4,6,3,23,42 };
	exchangeSort(6,A);
	printArray(6,A);
}
