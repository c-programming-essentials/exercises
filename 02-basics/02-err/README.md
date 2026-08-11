## Compilation Errors

The following program is supposed to print a line on the standard output, but compilation fails due to several errors:

```c
#include <tdio.h>

void man() {
    printf("This should work!\n");
    retur 0;
}
```

Correct the program to have it display the following output:

```console
This should work!
```

> **Hint.**
> Trying to build the program will have the compiler highlight the errors.

To check the correctness of your program, use a [suitable environment](https://github.com/c-programming-essentials/devcontainer) and write your solution in a file named **`err.c`**. In a terminal, with that file in the local directory, check with this command:

```console
$ check50 02-basics/02-err
```

---

[← Previous exercise](../01-printf/README.md) | [Next exercise →](../03-variables/README.md)
