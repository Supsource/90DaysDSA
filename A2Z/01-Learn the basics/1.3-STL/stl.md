### What is C++ STL?
C++ is one of the most popular high-level programming languages which has been used extensively for a long time by developers and has always been loved by all programmers, especially competitive programmers because of its faster execution time.

STL is one of the unique abilities of C++ which makes it stand out from every other programming language. STL stands for standard template library which contains a lot of pre-defined templates in terms of containers and classes which makes it very easy for developers or programmers to implement different data structures easily without having to write complete code and worry about space-time complexities.

If you dive a little deeper into STL, you will have to understand everything about templates and how they work, which is one of the most powerful tools when it comes to C++ programming language.

### Unordered-set in C++ STL
#### What is an unordered set?
An unordered set in STL is a container that stores unique elements in no particular order. Every operation on an unordered set takes O(1) complexity in the average case and takes O(n) in the worst case.
```c++
unordered_set<object_type> variable_name;
```
Example:
```
unordered_set<int> s;
unordered_set<string> str;
```
### Functions in unordered set:

- **insert()** – to insert an element in the unordered set.
```
unordered_set<int> s;
s.insert(1);
s.insert(2);
```
- **begin()** – return an iterator pointing to the first element in the unordered set.
```
s.begin();
```
- **end()** – returns an iterator to the theoretical element after the last element.
```
s.end();
```
- **count()** – it returns 1 if the element is present in the container otherwise 0.
```
unordered_set<int> s;
s.insert(1);
s.insert(2);
s.count(2); //returns true
```
- **clear()** – deletes all the elements in the unordered set.
```
s.clear();
```
- **find()** – to search for an element in the unordered set.
```
unordered_set<int> s;
s.insert(1);
s.insert(2);
if(s.find(2)!=s.end())
cout<<"true"<<endl;
```
- **erase()** – to delete a single element or elements between a particular range.
```
s.erase();
```
- **size()** – returns the size of the unordered set.
```
s.size();
```
- **empty()** – to check if the unordered set is empty or not.
```
s.empty();
```

##### CODE
```c++
#include<bits/stdc++.h>

using namespace std;

int main() {
  unordered_set < int > s;
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
}
```

