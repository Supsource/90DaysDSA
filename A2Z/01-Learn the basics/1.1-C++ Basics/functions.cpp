#include <bits/stdc++.h>
using namespace std;

// Function to print a greeting with the provided name
void printName(string name) {
    cout << "Hey " << name << endl;
}

int main() {
    // Functions are a set of code that performs something for you.
    // Functions are used to modularize code.
    // Functions are used to increase readability.
    // Functions are used to use the same code multiple times.
    // Void function -> it doesn't return anything.
    // Returning function -> indicates the function returns a value.
    // Parameterized function -> takes parameters/arguments.
    // Non-parameterized function -> doesn't take any parameters.

    string name;
    cout << "Enter your name: ";
    cin >> name;

    // Call the function to print the greeting
    printName(name);

    return 0;
}
