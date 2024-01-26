#include <iostream>
#include <map>
#include <unordered_map> 
#include <unordered_set>
#include <set>
#include <chrono>

using namespace std; 

// CONTAINERS 

    // 1. SEQUENCE 
    // - accessed sequentially 
    // - inherent order

        // ● Array  (Fixed size vector in a strict sequence)
        // ● Vector
            // - size = # of elements 
            // - capacity = total memory
        // ● Deque (double ended queue) - fast insert     @@@@@@
        // ● List (doubly linked list - Can loop through in either direction!) - using multiple list 


    // 2. ASSOCIATIVE
        // -  Don’t necessarily have a sequential order
        // - More easily searched

            // ● Map
                // ● Ordered Map (require a comparison operator)
                // ● Unordered Map (require a hash function) - faster

            // ● Set
                // ● Ordered set (require a comparison operator)
                // ● Unordered set (require a hash function) - faster

        // Hashing
            // calculating one such mapping 




// Container adaptors =  “wrappers” to existing containers!
    // structture??



// Exercise
    // ● Run a few time tests of different containers yourself!
    // How exactly do unordered sets/maps compare to
    // ordered?

    // ● Think about how you might implement a stack using a
    // vector as the backing container. How would different
    // operations work? (NOTE: You might have an easier time
    // with this after our lecture on classes!)

    // ● Poke around on the C++ documentation on your own! 
    
    // ● Stack
    // ● Queue




void compareSetInsertionTimes()
{
    const int size = 1000000;

    // Unordered Set (Hash Table)
    std::unordered_set<int> unorderedSet;
    auto start_unordered = std::chrono::high_resolution_clock::now();
    for (int i = 0; i < size; ++i) {
        unorderedSet.insert(i);
    }
    auto stop_unordered = std::chrono::high_resolution_clock::now();
    auto duration_unordered = std::chrono::duration_cast<std::chrono::microseconds>(stop_unordered - start_unordered);
    std::cout << "Unordered Set Insertion Time: " << duration_unordered.count() << " microseconds\n";

    // Ordered Set (Binary Search Tree)
    std::set<int> orderedSet;
    auto start_ordered = std::chrono::high_resolution_clock::now();
    for (int i = 0; i < size; ++i) {
        orderedSet.insert(i);
    }
    auto stop_ordered = std::chrono::high_resolution_clock::now();
    auto duration_ordered = std::chrono::duration_cast<std::chrono::microseconds>(stop_ordered - start_ordered);
    std::cout << "Ordered Set Insertion Time: " << duration_ordered.count() << " microseconds\n";


}

int main() 
{
    compareSetInsertionTimes();
    return 0;
}
