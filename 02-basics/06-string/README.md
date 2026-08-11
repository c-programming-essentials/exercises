## Printing a String

The following program is supposed to print `hi there` on the standard output and exit:

```c
#include <stdio.h>

int main(int argc, char **argv) {
    char string[8];

    string[0] = 'h';
    string[1] = 'i';
    string[2] = ' ';
    string[3] = 't';
    string[4] = 'h';
    string[5] = 'e';
    string[6] = 'r';
    string[7] = 'e';
    string[8] = '\n';

    printf("%s\n", string);

    return 0;
}
```

However, when compiled and executed it prints additional garbage values:

```console
$ gcc string.c -o string
$ ./string
hi there
?Fy+V
```

Modify the program so that it produces the expected output:

```console
hi there
```

The string should still be created in the code in a character by character basis, i.e. solutions using `char string[] = "hi there"` will not be accepted.

To check the correctness of your program, use a [suitable environment](https://github.com/c-programming-essentials/devcontainer) and write your solution in a file named **`string.c`**. In a terminal, with that file in the local directory, check with this command:

```console
$ check50 02-basics/06-string
```

---

[← Previous exercise](../05-types/README.md) | [Next exercise →](../07-cmdline/README.md)
