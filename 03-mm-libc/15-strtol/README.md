## String to Integer Conversion with `strtol`

The code below converts a string entered by the user into an integer and prints it on the standard output:

```c
#include <stdio.h>
#include <stdlib.h>

int get_string(char *buf, int size) {
    char *ret;

    printf("please enter an integer number (base 10): ");
    ret = fgets(buf, 128, stdin);
    if (ret == NULL) {
        perror("fgets");
        return -1;
    }

    // remove the end of line character
    for (int i=0; i<strlen(buf); i++)
        if (buf[i] == '\n') {
            buf[i] = '\0';
            break;
        }

    return 0;
}

int convert_and_print(char *buf) {
    int result = atoi(buf);
    printf("you have entered: %d\n", result);

    return 0;
}

int main(int argc, char **argv) {
    char buf[128];

    if (get_string(buf, 128))
        return -1;

    if (convert_and_print(buf))
        return -1;

    return 0;
}
```

The conversion is realised with `atoi`, and as such it is not robust in case of malformed strings as well as under/overflows.

Modify the implementation of the function `convert_and_print` in this program to use `strtol` for the conversion rather than `atoi`, and make the program more robust against improper inputs.
Output examples:

```console
$ ./strtol
please enter an integer number (base 10): 1234
you have entered: 1234

$ ./strtol
please enter an integer number (base 10): foo
invalid string

$ ./strtol
please enter an integer number (base 10): 100000000000000000000
under/overflow

$ ./strtol 
please enter an integer number (base 10): -100000000000000000000
under/overflow
```

To check the correctness of your program, use a [suitable environment](https://github.com/c-programming-essentials/devcontainer) and write your solution in a file named **`strtol.c`**. In a terminal, with that file in the local directory, check with this command:

```console
$ check50 03-mm-libc/15-strtol
```

---

[← Previous exercise](../14-time/README.md) | [Next exercise →](../16-file/README.md)
