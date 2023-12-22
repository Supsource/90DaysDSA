#include <iostream>
using namespace std;

int main() {
    // Declaration of a 2D array with 3 rows and 5 columns
    int arr[3][5];

    // Assigning a value to a specific element in the array (row 2, column 3)
    arr[1][2] = 42;

    // Printing the value stored in the specified element
    cout << "Value at arr[1][2]: " << arr[1][2] << endl;

    return 0;
}
