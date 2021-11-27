## I. Asymptotic Notations:

The notations we use to describe the asymptotic (approximate) running time of an algorithm are defined in terms of functions whose domains are the set of natural numbers 
N = {0, 1, 2 ... }.  The asymptotic notations consist of the following useful notations.


**Big Oh (O):**

 * If we write f(n) = O(g(n)), then there exists a function f(n) such that ∀ n ≥ n0, f(n) ≤ cg (n) with any constant c and a positive integer n0. 

  ```OR```

 * f(n) = O(g(n)) means we can say g(n) is an asymptotic upper bound for f(n).


 ![](https://grdp.co/cdn-cgi/image/width=500,height=500,quality=50,f=auto/https://gs-blog-images.grdp.co/gate-exam/wp-content/uploads/2015/11/27032649/Big-0.png)

 * **Example-1:**

 Let f(n) = n2 + n + 5. Then f(n) is O(n2), and f(n) is O(n3), but f(n) is not O(n).


 * **Example-2:**

 Let f(n) =  3n . Then f(n) is O(4n) but not f(n) is not O(2n)

 ```Note:``` 
 O(1) refers to constant time. O(n) indicates linear time; O(nk) (k fixed) refers to polynomial time; O(log n) is called logarithmic time; O(2n) refers to exponential time, etc.


O(1) < O(log n) < O(n) < O(n2) < O(2n)


## Omega (Ω): 

* If we write f(n) = Ω(g(n)), then there exists a function f(n) such that ∀ n ≥ n0,  f(n) ≥ cg(n) with any constant c and a positive integer n0.   ```OR```

* f(n) = Ω(g(n)) means we can say Function g(n) is an asymptotic lower bound for f(n).


* **Example-1:** Let f (n) = 2n2 + 4n + 10. Then f (n) is Ω(n2)



## Theta (θ):


* If we write f(n) = θ(g(n)), then there exists a function f(n) such that ∀ n ≥ n0,  c1g(n) ≤ f(n) ≤ c2g(n) with a positive integer n0, any positive constants c1 and c2.   ```OR```

* f(n) = θ(g(n)) means we can say Function g(n) is an asymptotically tight bound for f(n).

![](https://grdp.co/cdn-cgi/image/width=500,height=500,quality=50,f=auto/https://gs-blog-images.grdp.co/gate-exam/wp-content/uploads/2015/11/27032649/Big-theta.png)


* **Example-1:**

Let f (n) = 2n2 + 4n + 10. Then f (n) is θ(n2)

## Small Oh (o):  

* If we write f(n) = o(g(n), then there exists a function such that f(n) < c g(n) with any positive constant c and a positive integer n0.

```OR```

* f(n) = o(g(n) means we can say Function g(n) is an asymptotically tight upper bound of f(n).

* **Example-1**

n1.99 = o(n2)

## Small Omega (ω): 

* If we write f(n) = ω(g(n)), then these exists a function such that f(n) > cg(n) with any positive constant c and a positive integer n0.

* f(n) = ω(g(n)) means we can say g(n) is asymptotically tight lower bound of f(n).

* **Example:**

n2.00001 = ω(n2) and n2 ≠ ω(n2)


