#include<iostream>
using namespace std;


void say_hello(){
    cout << "hello \n";
    say_hello(); // this is recursion
}

int main (){
    say_hello();
}
