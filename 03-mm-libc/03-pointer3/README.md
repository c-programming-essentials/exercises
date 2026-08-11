## Working with Pointers (3)

Write a program that takes an integer as parameter and places it in a variable of type `int`.
The program then proceeds to print the value as well as the address of the variable as follows:

```console
$ ./pointer3 5
Variable contains 5 and is located at address 0x7ffcc6d1d7fc

$ ./pointer3 93
Variable contains 93 and is located at address 0x7fffec3b3dfc
```

> **Printing Pointer Values.**
> The value of a pointer can be printed in hexadecimal and prefixed with `0x` using the `%p` format specifier for `printf`.

To check the correctness of your program, use a [suitable environment](https://github.com/c-programming-essentials/devcontainer) and write your solution in a file named **`pointer3.c`**. In a terminal, with that file in the local directory, check with this command:

```console
$ check50 03-mm-libc/03-pointer3
```

---

[← Previous exercise](../02-pointer2/README.md) | [Next exercise →](../04-pointer4/README.md)
