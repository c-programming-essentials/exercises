## Determining Leap Years

Write a C program taking a year as command line parameter and printing out on the standard output if this year is leap or not.

To determine if a year is leap, you can use the following algorithm (taken from Wikipedia):

```console
if (year is not divisible by 4)
    then (it is a common year)
else if (year is not divisible by 100)
    then (it is a leap year)
else if (year is not divisible by 400)
    then (it is a common year)
else
    (it is a leap year)
```

The output format should be as described in these examples:

```console
$ ./leap 2000
2000 is a leap year
$ ./leap 2100
2100 is not a leap year
```

> **Hint.**
> Use the modulo operator `%` to check if a number is divisible by another, e.g., `a % b` evaluates to `0` if `a` is divisible by `b`, and to the remainder of the division of `a` by `b` if `a` is not divisible by `b`.

To check the correctness of your program, use a [suitable environment](https://github.com/c-programming-essentials/devcontainer) and write your solution in a file named **`leap.c`**. In a terminal, with that file in the local directory, check with this command:

```console
$ check50 02-basics/08-leap
```

---

[← Previous exercise](../07-cmdline/README.md) | [Next exercise →](../09-array/README.md)
