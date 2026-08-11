## Data Types

The following code fails to compile due to a missing variable declaration:

```c
#include <stdio.h>

int main() {

    variable = 10;

    printf("variable is %u\n", variable);

    return 0;
}
```

Edit the code to have it compile and run successfully. The expected output is:

```console
variable is 10
```

To check the correctness of your program, use a [suitable environment](https://github.com/c-programming-essentials/devcontainer) and write your solution in a file named **`types.c`**. In a terminal, with that file in the local directory, check with this command:

```console
$ check50 02-basics/05-types
```

---

[← Previous exercise](../04-sizes/README.md) | [Next exercise →](../06-string/README.md)
