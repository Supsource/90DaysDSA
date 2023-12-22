#include<bits/stdc++.h>
using namespace std;
#include <unordered_set>

/*
 STL -> (i) Algorithms
        (ii) Containers
        (iii) Functions
        (iv) Iterators

        */

/*
// Unordered-set :
Q. What is an unordered set?
-> An unordered set in STL is a container that stores unique elements in no particular order. Every operation on an unordered set 
takes O(1) complexity in the average case and takes O(n) in the worst case.

syntax: 
unordered_set<object_type> variable_name;

Example:
unordered_set<int> s;
unordered_set<string> str;



*/

int main() {
  unordered_set< int > s;
  for (int i = 1; i <= 10; i++) {
    s.insert(i);
  }

  cout << "Elements present in the unordered set: ";
  for (auto it = s.begin(); it != s.end(); it++) {
    cout << * it << " ";
  }
  cout << endl;
  int n = 2;
  if (s.find(2) != s.end())
    cout << n << " is present in unordered set" << endl;

  s.erase(s.begin());
  cout << "Elements after deleting the first element: ";
  for (auto it = s.begin(); it != s.end(); it++) {
    cout << * it << " ";
  }
  cout << endl;

  cout << "The size of the unordered set is: " << s.size() << endl;

  if (s.empty() == false)
    cout << "The unordered set is not empty " << endl;
  else
    cout << "The unordered set is empty" << endl;
  s.clear();
  cout << "Size of the unordered set after clearing all the elements: " << s.size();
};