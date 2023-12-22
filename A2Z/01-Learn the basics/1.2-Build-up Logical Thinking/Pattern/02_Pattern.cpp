#include<bits/stdc++.h>
using namespace std;

// Function to print a specific pattern
void pattern2(int n) {
    // Outer loop for rows, iterating from 1 to n
    for(int i = 1; i <= n; i++) {
        // Inner loop for columns, printing '*' for each column in the current row
        for(int j = 1; j <= i; j++) {
            // Print '*' followed by a space
            cout << "* ";
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
    pattern2(n);

    return 0;
}


// Pattern :
/*
* 
* * 
* * * 
* * * * 
*/