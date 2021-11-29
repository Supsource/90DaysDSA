## Introduction
Recursion is a technique in which we break down a problem into one or more subproblems that are similar in form to the original problem. For example, suppose we need to add up all of the numbers in an array. We'll write a function called add_array that takes as arguments an array of numbers and a count of how many of the numbers in the array we would like to add; it will return the sum of that many numbers.
To develop the add_array function, we observe that if we had a function that would add up all but the very last number in the array, then we would simply have to add the last number to that sum and we would be done. But, the add_array function is just what we need for adding up all but the last number (as long as the array contains at least one number). After all, add_array takes an array and a count, and adds up that many array elements. If there are no numbers in the array, then zero is the desired answer. These observations suggest the following definition for the function:

```
int add_array(int arr[], unsigned count)
{
  if (count == 0)
    return 0;
  return arr[count - 1] + add_array(arr, count - 1);
}
```

#### Notice that the function has two components:

* a base case, represented by the if and the return 0, in which the function does not call itself. This handles the case where there are no numbers to add.

* a recursive case that breaks the problem down into a smaller version of the original problem together with an addition. In the recursive case, add_array is used to add together count-1 items; the count-th item is then added to this result (remember that the n-th item of an array is stored at position n-1).

The call to ```add_array``` from inside ```add_array``` is called a recursive call.

## Example: The Factorial Function

One of the classic textbook examples of recursion is the factorial function. Although factorial is not best done recursively, it provides us with many useful observations.
Recall that factorial, which is written n!, has the following definition:

         n! = 1 * 2 * 3 * .... * (n-2) * (n-1) * n

We can use this definition to write an iterative C++ function that implements factorial:

```
unsigned fact(unsigned n)
{
  unsigned i;
  unsigned result;

  result = 1;
  for (i = 1; i <= n; i++)
    result = result * i;
  return result;
}
```

We can develop a recursive definition for factorial by noticing that ```n! = n * (n-1)! and 1! = 1```. For example, 4! = 4 * 3!. Notice that we need to specify a value for 1! because our definition does not apply when n=1. This kind of definition is known as an inductive definition, because it defines a function in terms of itself.
The inductive definition of factorial immediately suggests the following recursive function:
```
unsigned fact(unsigned n)
{
  if (n == 1)
    return 1;
  return n * fact(n - 1);
}
```
Notice that this function precisely follows our new definition of factorial. It is recursive, because it contains a call to itself.
Let's compare the two versions:
* The iterative version has two local variables; the recursive version has none.
* The iterative version has three statements; the recursive version has one.
* The iterative version must save the solution in an intermediate variable before it can be returned; the recursive version calculates and returns its result as a single expression.

#### Recursion simplifies the definition of the fact function, making it more readable.
