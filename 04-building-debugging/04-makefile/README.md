## Using Makefiles

Consider the program compiled from the following files:

- `main.c`
- `module1.c` and the corresponding header `module1.h`.
- `module2.c` and the corresponding header `module2.h`.

The source code of each file is given below.

```c
// main.c

#include <stdio.h>
#include "module1.h"
#include "module2.h"

int main(int argc, char **argv) {
    printf("Hello, this is main\n");
    f1();
    f2();
    return 0;
}
```

```c
// module1.c

#include <stdio.h>
#include "module1.h"

void f1(void) {
    printf("f1 called\n");
}
```

```c
// module1.h

#ifndef MODULE1_H
#define MODULE1_H

void f1(void);

#endif /* MODULE1_H */
```

```c
// module2.c

#include <stdio.h>
#include "module2.h"

void f2(void) {
    printf("f2 called\n");
}
```

```c
// module2.h

#ifndef MODULE2_H
#define MODULE2_H

void f2(void);

#endif /* MODULE2_H */
```

Write a `Makefile` that automates the build process for this program.
It should contain intermediate rules for (1) compiling the C source files into object files and (2) linking the object files into the final executable, which should be named `prog`.
It should also include a `clean` rule that deletes the executable and intermediate object files.

To check the correctness of your program, use a [suitable environment](https://github.com/c-programming-essentials/devcontainer).
With all the specified source files in the current directory, run the following command in a terminal:

```console
$ check50 04-building-debugging/04-makefile
```

---

[← Previous exercise](../03-module/README.md) | [Next exercise →](../05-preprocessor/README.md)
