## Manipulating Command Line Arguments

Write a C program that takes 3 floating point numbers as command line parameters and displays on the standard output the value of the multiplication of these 3 numbers. Examples of execution:

```console
$ ./cmdline 1.0 2.0 3.0
6.000000

$ ./cmdline 1.45 2.78 3.25
13.100750
```

> **Hints.**
> Use the type `double` rather than `float` to hold these values in order to pass the checks.
> 
> 
> 
> To convert a string into a floating point number use `atof`, which usage is similar to that of `atoi` (see #sec:atoi), except that it returns a `double`.

To check the correctness of your program, use a [suitable environment](https://github.com/c-programming-essentials/devcontainer) and write your solution in a file named **`cmdline.c`**. In a terminal, with that file in the local directory, check with this command:

```console
$ check50 02-basics/07-cmdline
```

---

[← Previous exercise](../06-string/README.md) | [Next exercise →](../08-leap/README.md)
