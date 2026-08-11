## More on `enum`

Enumerations can be used in C in combination with bitwise operations to define **flags**, i.e. set of properties attached to objects, each object being able to have 0 or several properties enabled.

Consider the following program:

```c
#include <stdio.h>

typedef enum {
    /* define FLAG1, FLAG2, FLAG3, FLAG4 */
} flags;

void print_flags(flags f) {

    if (f & FLAG1)
        printf("FLAG1 enabled\n");
    if (f & FLAG2)
        printf("FLAG2 enabled\n");
    if (f & FLAG3)
        printf("FLAG3 enabled\n");
    if (f & FLAG4)
        printf("FLAG4 enabled\n");
}

int main(int argc, char **argv) {
    flags f1 = FLAG1 | FLAG2;
    flags f2 = FLAG1 | FLAG2 | FLAG3;

    printf("f1:\n");
    print_flags(f1);

    printf("f2:\n");
    print_flags(f2);

    return 0;
}
```

The goal of the exercise is to write the definition of `flags` so that the program behaves correctly, i.e. it should produce the following output:

```console
$ ./enum2
f1:
FLAG1 enabled
FLAG2 enabled
f2:
FLAG1 enabled
FLAG2 enabled
FLAG3 enabled
```

> **Hints.**
> **Custom typedef values:** within a `typedef` definition, use `=` to set a particular integer value for an identifier, for example `FLAG1 = 42,`
> 
> **Bitwise operations in C:** C offers operators working on the bitwise representation of variables:
> 
> - bitwise AND: `\&` and OR `|`
> - bitwise shift, left `<<` and right `>>`
> - etc. For more information see the \emph{Arithmetic operators: bitwise logic and shifts operators} sections on CPPReference.com.

To check the correctness of your program, use a [suitable environment](https://github.com/c-programming-essentials/devcontainer) and write your solution in a file named **`enum2.c`**. In a terminal, with that file in the local directory, check with this command:

```c
$ check50 02-basics/17-enum2
```

---

[← Previous exercise](../16-enum/README.md) | [Next exercise →](../../03-mm-libc/01-pointer/README.md)
