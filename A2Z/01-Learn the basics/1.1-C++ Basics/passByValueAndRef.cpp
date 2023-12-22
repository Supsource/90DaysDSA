#include<bits/stdc++.h>
using namespace std;

// Function to do something with a number
void dosomething(int num) {
    // Print the original value of num
    cout << num << endl;

    // Add 5 to num
    num += 5;
    cout << num << endl;

    // Add another 5 to num
    num += 5;
    cout << num << endl;
}

int main() {
    int num = 10;

    // Call the function and pass the value of num
    dosomething(num);

    // Print the original value of num (unchanged by the function)
    cout << num << endl;

    return 0;
}
