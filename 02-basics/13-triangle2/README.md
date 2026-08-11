## Printing an Isosceles Triangle

Write a C program taking an odd integer `n` as parameter and printing an isosceles triangle on the standard output, with the triangle's base length being defined by `n`.
Example of execution are:

```console
$ ./triangle2 3
*
**
*

$ ./triangle2 5
*
**
***
**
*

$ ./triangle2 15
*
**
***
****
*****
******
*******
********
*******
******
*****
****
***
**
*
```

When the integer parameter `n` is even, the program corrects it to the next odd number by simply incrementing it.

To check the correctness of your program, use a [suitable environment](https://github.com/c-programming-essentials/devcontainer) and write your solution in a file named **`triangle2.c`**. In a terminal, with that file in the local directory, check with this command:

```c
$ check50 02-basics/13-triangle2
```

---

[← Previous exercise](../12-triangle/README.md) | [Next exercise →](../14-typedef/README.md)
