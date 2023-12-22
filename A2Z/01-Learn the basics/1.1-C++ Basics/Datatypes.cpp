#include <iostream>
#include <string>

using namespace std;

int main() {
    // int data type
    int x = 10;
    // long data type
    long y = 20;
    // long long data type
    long long z = 13323423232;

    // float and double data types
    float a = 2.3;
    double b = 4.0;

    // String and getline
    string s;
    cout << "Enter a string: ";
    cin >> s;
    cout << "You entered: " << s << endl;

    // Using getline to read an entire line
    string str;
    cout << "Enter a line of text: ";
    getline(cin, str);
    cout << "You entered: " << str << endl;

    // Char data type
    char ch;
    cout << "Enter a character: ";
    cin >> ch;
    cout << "You entered: " << ch << endl;

    return 0;
}
