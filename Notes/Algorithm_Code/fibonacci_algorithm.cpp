#include <iostream>
#include <chrono>
using namespace std;
using namespace chrono;

// Recursive Fibonacci Algorithm (Time Complexity: O(2^n))
int recursive_fib(int n) {
	if (n <= 1) {
		return n;
	}
	else {
		return recursive_fib(n - 1) + recursive_fib(n - 2);
	}
}

// Iterative Fibonacci Algorithm (Time Complexity: O(n))
int iterative_fib(int n) {
	if (n <= 1) {
		return n;
	}

	int a = 0, b = 1, result;

	for (int i = 2; i <= n; i++) {
		result = a + b;
		a = b;
		b = result;
	}

	return b;
}

int main() {
	int n = 30;
	int result;

	// Time taken for Recursive Fibonacci
	auto start = high_resolution_clock::now();
	result = recursive_fib(n);
	auto end = high_resolution_clock::now();

	cout << "--- Recursive Fibonacci (Time Complexity: O(2^n) ---" << endl;
	cout << "Fibonacci of " << n << ": " << result << endl;
	cout << "Recursive Fibonacci time: "
		<< duration_cast<nanoseconds>(end - start).count() << " ns" << endl << endl;

	// Time taken for Iterative Fibonacci
	start = high_resolution_clock::now();
	result = iterative_fib(n);
	end = high_resolution_clock::now();

	cout << "--- Iterative Fibonacci (Time Complexity: O(n)) ---" << endl;
	cout << "Fibonacci of " << n << ": " << result << endl;
	cout << "Iterative Fibonacci time: "
		<< duration_cast<nanoseconds>(end - start).count() << " ns" << endl;
}
