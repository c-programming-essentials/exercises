## Enumerations with `enum`

The program below uses an integer to represent days of the week, 0 corresponding to Monday, 1 to Tuesday, etc.

```c
#include <stdio.h>

int main(int argc, char **argv) {
    int d = 2;

    printf("Today is: ");
    switch(d) {
        case 0:
            printf("Monday\n");
            break;
        case 1:
            printf("Tuesday\n");
            break;
        case 2:
            printf("Wednesday\n");
            break;
        case 3:
            printf("Thursday\n");
            break;
        case 4:
            printf("Friday\n");
            break;
        case 5:
            printf("Saturday\n");
            break;
        case 6:
            printf("Sunday\n");
            break;

        default:
            printf("Unknown day...\n");
    }
    return 0;
}
```

Replace the use of integers (including the type of the variable `d`) with that of an enumeration named `enum day`, defining constants for days: `MONDAY`, `TUESDAY`, etc.

The expected output is:

```console
$ ./enum
Today is: Wednesday
```

To check the correctness of your program, use a [suitable environment](https://github.com/c-programming-essentials/devcontainer) and write your solution in a file named **`enum.c`**. In a terminal, with that file in the local directory, check with this command:

```console
$ check50 02-basics/16-enum
```

---

[← Previous exercise](../15-struct/README.md) | [Next exercise →](../17-enum2/README.md)
