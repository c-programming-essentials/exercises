## Modules: Breaking Down a Program into Several Source Files

Consider the following code:

```c
#include <stdio.h>
#include <math.h>
#include <sys/time.h>

int module1_function1(int param) {
    return param * 2;
}

double module1_function2(double param) {
    return cos(param);
}

unsigned long long int module2_function1(void) {
    struct timeval tv;
    unsigned long long res;

    gettimeofday(&tv, NULL);

    res = tv.tv_sec * 1000 + tv.tv_usec / 1000;
    return res;
}

typedef enum {
    CASE1,
    CASE2,
    CASE3
} module3_enum;

void module3_function1(module3_enum param) {

    switch(param) {
        case CASE1:
            printf("module3_function1 called with parameter CASE1\n");
            break;
        case CASE2:
            printf("module3_function1 called with parameter CASE2\n");
            break;
        case CASE3:
            printf("module3_function1 called with parameter CASE3\n");
            break;
        default:
            printf("module3_function1 called with unknown parameter\n");
    }
}

int main(int argc, char **argv) {
    module3_enum e = CASE2;

    int res1 = module1_function1(42);
    double res2 = module1_function2(0);
    unsigned long long int res3 = module2_function1();
    module3_function1(e);

    printf("res1: %d\n", res1);
    printf("res2: %lf\n", res2);
    printf("res3: %llu\n", res3);
    return 0;
}
```

Divide this monolithic code into several modules:

- `module1.c` and its corresponding header, `module1.h`, containing the implementations and declarations, respectively, of `module1_function1` and `module1_function2`.
- `module2.c` and `module2.h`, implementing and declaring `module2_function1`, respectively.
- `module3.c` and `module3.h`, implementing and declaring `module3_function1` and `module3_enum`, respectively.
- `main.c`, implementing the `main` function.

Include only the necessary headers in each implementation file.
The expected output is:

```console
$ ./module
module3_function1 called with parameter CASE2
res1: 84
res2: 1.000000
res3: 1595255563434
```

To check the correctness of your program, use a [suitable environment](https://github.com/c-programming-essentials/devcontainer).
With all the specified source files in the current directory, run the following command in a terminal:

```console
$ check50 04-building-debugging/03-module
```

---

[← Previous exercise](../02-macro-conditional/README.md) | [Next exercise →](../04-makefile/README.md)
