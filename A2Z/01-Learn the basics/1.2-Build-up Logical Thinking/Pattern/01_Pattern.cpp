#include<bits/stdc++.h>
using namespace std;

/*
    Rules:
    1. For the outer loop, count the number of rows (lines).
    2. For the inner loop, focus on the columns and connect them somehow to the rows.
    3. Print the pattern inside the inner loop.
    4. Optional: Add symmetry.

    Pattern:
    * * * *
    * * * *
    * * * *
    * * * *
*/

// Function to print the specified pattern
void printPattern(int n) {
    // Outer loop for rows
    for(int i = 0; i < n; i++) {
        // Inner loop for columns
        for(int j = 0; j < n; j++) {
            // Print a space-separated asterisk
            cout << " * ";
        }
        // Move to the next line after each row is printed
        cout << endl;
    }
}

int main() {
    // Input the number of rows/lines
    int n;
    cout << "Enter the number of rows: ";
    cin >> n;

    // Call the function to print the pattern
    printPattern(n);

    return 0;
}
