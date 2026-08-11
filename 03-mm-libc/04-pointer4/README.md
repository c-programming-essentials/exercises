## Working with Pointers (4)

Consider the following program printing a string to the standard output character by character:

```c
#include <stdio.h>

int main(int argc, char **argv) {
    char *string = "hello, world!\n";

    int i = 0;
    while (string[i] != '\0')
        printf("%c", string[i++]);

    return 0;
}
```

Alter the loop to use a `char *` pointer as the iterator and as the way to access characters within the string for printing.
Doing so, the string should no longer need to be indexed as an array and the program's code should contain no square bracket.
The expected output is:

```console
$ ./pointer4
hello, world!
```

To check the correctness of your program, use a [suitable environment](https://github.com/c-programming-essentials/devcontainer) and write your solution in a file named **`pointer4.c`**. In a terminal, with that file in the local directory, check with this command:

```console
$ check50 03-mm-libc/04-pointer4
```

---

[← Previous exercise](../02-pointer2/README.md) | [Next exercise →](../04-pointer4/README.md)
