#include <iostream>
using namespace std;

// Part 1: Function to analyze pointer
void analyze_pointer(int *ptr) {
    cout << "Memory location pointed by the pointer: " << ptr << endl;
    cout << "Value of the integer (pointed by the pointer): " << *ptr << endl;
    cout << "----------------------------------------" << endl;
}

int main() {
    cout << "Task 3 - Pointer Analysis Program" << endl;
    cout << "==================================" << endl << endl;
    
    // Part 2a: Stack allocation
    cout << "Part 2a: Stack Allocation Analysis" << endl;
    int iValue = 42;  // Allocate int on stack
    cout << "Stack variable iValue = " << iValue << endl;
    analyze_pointer(&iValue);  // Pass address of stack variable
    
    // Part 2b: Heap allocation
    cout << "Part 2b: Heap Allocation Analysis" << endl;
    int *heapPtr = new int(100);  // Allocate int on heap
    cout << "Heap variable value = " << *heapPtr << endl;
    analyze_pointer(heapPtr);  // Pass heap pointer
    
    // Clean up heap memory
    delete heapPtr;
    cout << "Heap memory has been deallocated." << endl;
    
    return 0;
}
