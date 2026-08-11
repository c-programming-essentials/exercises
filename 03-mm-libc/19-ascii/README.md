## Type Casting (2)

In C, characters are encoded in memory using ascii code.
Knowing that there is a constant offset between the code for a given letter in lowercase and the code for that letter in capital, complete the `capitalize` function in the program [ascii.c](./comp26020-problems/week4-compilation/07-ascii/ascii.c) presented below:

```c
#include <stdio.h>

char *alphabet = "abcdefghijklmnopqrstuvwxyz";

char capitalize(char c) {
    // complete here
}

int main(int argc, char **argv) {
    for (int i=0; i<26; i++)
        printf("capital %c: %c\n",
            alphabet[i], capitalize(alphabet[i]));

    return 0;
}
```

**Ascii code in C:** when printed as an integer with the `%d` marker, the ascii code for a given `char` variable can be displayed.
You can also check out some online ascii tables\footnote{For example \url{http://www.asciitable.com/}}.

The expected output is:

```console
capital a: A
capital b: B
capital c: C
capital d: D
capital e: E
capital f: F
# ...
capital z: Z
```

To check the correctness of your program, use a [suitable environment](https://github.com/c-programming-essentials/devcontainer) and write your solution in a file named **`ascii.c`**. In a terminal, with that file in the local directory, check with this command:

```console
$ check50 03-mm-libc/19-ascii
```

---

[← Previous exercise](../18-cast/README.md) | [Next exercise →](../20-funcptr/README.md)
