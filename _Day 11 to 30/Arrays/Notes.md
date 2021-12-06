## ARRAYS 
#### An array is a collection of elements of the same type placed in contiguous memory locations that can be individually referenced by using an index to a unique identifier.

Five values of type int can be declared as an array without having to declare five different variables (each with its own identifier).

For example, a five element integer array foo may be logically represented as;


where each blank panel represents an element of the array. In this case, these are values of type int. These elements are numbered from 0 to 4, with 0 being the first while 4 being the last; In C++, the index of the first array element is always zero. As expected, an n array must be declared prior its use. A typical declaration for an array in C++ is:

``` type name [elements];```

where type is a valid type (such as int, float ...), name is a valid identifier and the elements field (which is always enclosed in square brackets []), specifies the size of the array.

Thus, the foo array, with five elements of type int, can be declared as:

``` int foo [5];```

NOTE : The elements field within square brackets [], representing the number of elementsin the array, must be a constant expression, since arrays are blocks of static memory whose size must be known at compile time.


Full Note [Link](https://www.cpp.edu/~elab/ECE114/Array.html)
