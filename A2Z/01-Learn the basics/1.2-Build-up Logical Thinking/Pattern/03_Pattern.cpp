#include<bits/stdc++.h>
using namespace std;

// Function to print a specific pattern
void printPattern3(int n) {
    // Outer loop for rows
    for(int i = 1; i <= n; i++) {
        // Inner loop for columns, printing numbers from 1 to the current row number
        for(int j = 1; j <= i; j++) {
            // Print the current number followed by a space
            cout << j << " ";
        }
        // Move to the next line after each row is printed
        cout << endl;
    }
}

int main() {
    // Input the number of rows
    int n;
    cout << "Enter the number of rows: ";
    cin >> n;

    // Call the function to print the pattern
    printPattern3(n);

    return 0;
}


// Pattern:
/*
1 
1 2 
1 2 3 
1 2 3 4 
*/