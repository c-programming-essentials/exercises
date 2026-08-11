## Dynamic Memory Allocation with `malloc (3)`

Fix the memory leak contained in the following program:

```c
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv) {
    int *a = malloc(10 * sizeof(int));
    if (!a) return -1;

    for (int i=0; i<10; i++)
        a[i] = i*2;

    int *b = a;

    for (int i=0; i<10; i++)
        printf("%d ", b[i]);
    printf("\n");

    return 0;
}
```

The expected output is:
```console
$ ./malloc3
0 2 4 6 8 10 12 14 16 18
```

To check the correctness of your program, use a [suitable environment](https://github.com/c-programming-essentials/devcontainer) and write your solution in a file named **`malloc3.c`**. In a terminal, with that file in the local directory, check with this command:

```console
$ check50 03-mm-libc/07-malloc3
```

---

[← Previous exercise](../../02-basics/08-leap/README.md) | [Next exercise →](../09-malloc5/README.md)
