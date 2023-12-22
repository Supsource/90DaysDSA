#include <iostream>
using namespace std;

int main() {
    // Declaration of an array with 5 elements
    int arr[5];

    // Input values for each element of the array
    cout << "Enter values for arr[0] through arr[4]: ";
    cin >> arr[0] >> arr[1] >> arr[2] >> arr[3] >> arr[4];

    // Modify the value of the element at index 3 (arr[3]) by adding 10
    arr[3] += 10;

    // Output the updated value of the modified element
    cout << "Modified value at arr[3]: " << arr[3] << endl;

    return 0;
}
