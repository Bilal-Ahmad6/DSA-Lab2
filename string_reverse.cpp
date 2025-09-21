#include <iostream>
#include <cstring>
using namespace std;

int main() {
    cout << "Dynamic String Reversal Program" << endl;
    cout << "===============================" << endl << endl;
    
    // Get the size of the string from user
    int maxSize;
    cout << "Enter the maximum size for the string: ";
    cin >> maxSize;
    
    // Dynamic memory allocation for the string
    char *inputString = new char[maxSize + 1]; // +1 for null terminator
    char *reversedString = new char[maxSize + 1]; // +1 for null terminator
    
    // Clear the input buffer
    cin.ignore();
    
    // Get string input from user
    cout << "Enter a string (max " << maxSize << " characters): ";
    cin.getline(inputString, maxSize + 1);
    
    // Calculate the actual length of the input string
    int length = strlen(inputString);
    
    // Reverse the string
    cout << "\nReversing the string..." << endl;
    for (int i = 0; i < length; i++) {
        reversedString[i] = inputString[length - 1 - i];
    }
    reversedString[length] = '\0'; // Add null terminator
    
    // Display results
    cout << "\n--- Results ---" << endl;
    cout << "Original string:  \"" << inputString << "\"" << endl;
    cout << "Reversed string:  \"" << reversedString << "\"" << endl;
    cout << "String length:    " << length << " characters" << endl;
    
    // Display memory information
    cout << "\n--- Memory Information ---" << endl;
    cout << "Memory allocated for input string:    " << (maxSize + 1) << " bytes" << endl;
    cout << "Memory allocated for reversed string: " << (maxSize + 1) << " bytes" << endl;
    cout << "Input string memory address:    " << (void*)inputString << endl;
    cout << "Reversed string memory address: " << (void*)reversedString << endl;
    
    // Free the dynamically allocated memory
    delete[] inputString;
    delete[] reversedString;
    
    cout << "\nMemory has been successfully deallocated." << endl;
    cout << "Program completed!" << endl;
    
    return 0;
}