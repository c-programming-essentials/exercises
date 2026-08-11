## Working with Pointers

Consider the following program:

```c
#include <stdio.h>
#include <stdlib.h>

int add(int a, int b) {
    return a + b;
}

int main(int argc, char **argv) {
    if (argc == 3) {
        int a = atoi(argv[1]);
        int b = atoi(argv[2]);

        printf("%d + %d = %d\n", a, b, add(a, b));
    }
    return 0;
}
```

Modify the function `add` and its invocation so that it takes two `int` pointer parameters.
Some examples of output for the program are:

```console
$ ./pointer 10 20
10 + 20 = 30

$ ./pointer 154 -12
154 + -12 = 142
```

To check the correctness of your program, use a [suitable environment](https://github.com/c-programming-essentials/devcontainer) and write your solution in a file named **`pointer.c`**. In a terminal, with that file in the local directory, check with this command:

```console
check50 03-mm-libc/01-pointer
```

---

[← Previous exercise](../../02-basics/17-enum2/README.md) | [Next exercise →](../02-pointer2/README.md)
