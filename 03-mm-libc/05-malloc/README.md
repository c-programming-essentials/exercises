## Dynamic Memory Allocation with `malloc`

Write a program that takes list of integers as command line parameters, stores them in an array allocated with `malloc`, and sorts that array in increasing order.
Examples of execution and output of this program are given below:

```console
$ ./malloc 5 4 3 2 1
1 2 3 4 5 

$ ./malloc 546 874 18 13 87 54 4651 54 877 8 46351 87 654 657 654
8 13 18 54 54 87 87 546 654 654 657 874 877 4651 46351
```

To check the correctness of your program, use a [suitable environment](https://github.com/c-programming-essentials/devcontainer) and write your solution in a file named **`malloc.c`**. In a terminal, with that file in the local directory, check with this command:

```console
$ check50 03-mm-libc/05-malloc
```

---

[← Previous exercise](../04-pointer4/README.md) | [Next exercise →](../06-malloc2/README.md)
