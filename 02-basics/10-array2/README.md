## More on Arrays

Write a program that takes up to 10 integers as command line parameters.
These parameters are converted to integer types into an array of `int` named `array`.
Then, the program iterates over the array and outputs if each number is even or odd as follows:

```console
$ ./array2 1 2 3 4 5 6 
1 is odd 
2 is even 
3 is odd 
4 is even 
5 is odd 
6 is even

$ ./array2 5 5 120
5 is odd
5 is odd
120 is even
```

> **Hint.**
> Use the modulo operator `%` to obtain the rest of the division of one operand by the other.
> For example, `42 % 2` evaluates to `0` and `41 % 2` evaluates to `1`.

To check the correctness of your program, use a [suitable environment](https://github.com/c-programming-essentials/devcontainer) and write your solution in a file named **`array2.c`**. In a terminal, with that file in the local directory, check with this command:

```console
$ check50 02-basics/10-array2
```

---

[← Previous exercise](../09-array/README.md) | [Next exercise →](../11-factorial/README.md)
