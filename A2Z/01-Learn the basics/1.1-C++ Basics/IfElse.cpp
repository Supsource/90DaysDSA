#include <iostream>
using namespace std;

int main() {
    int age;

    // Prompt the user to enter their age
    cout << "Please enter your age: ";
    cin >> age;

    // Check if the person is an adult
    if (age >= 18) {
        cout << "Congratulations! You're an adult." << endl;
    } else {
        cout << "Sorry, you're not an adult yet. Wait a bit!" << endl;
    }

    return 0;
}
