## Header Inclusion

Consider the following program which sources are made of two files: `preprocessor.c` and `preprocessor.h`:

```c
// preprocessor.h

#ifndef PREPROCESSOR_H
#define PREPROCESSOR_H

typedef struct timeval tv;

#endif /* PREPROCESSOR_H */
```

```c
// preprocessor.c
int main(int argc, char **argv) {
    int n;
    int *array;
    tv t1, t2, t3;

    printf("Please enter the amount of random number to generate:\n");
    scanf("%d", &n);

    array = malloc(n*sizeof(int));
    if (!array) {
        perror("malloc");
        return -1;
    }

    gettimeofday(&t1, NULL);
    for (int i = 0; i<n; i++)
        array[i] = rand()%100;
    gettimeofday(&t2, NULL);

    timersub(&t2, &t1, &t3);

    printf("Generated %d numbers in %ld.%06ld seconds\n", n, t3.tv_sec,
            t3.tv_usec);

    free(array);
    return 0;
}
```

This program fails to compile due to missing header inclusions.
Correct these issues by writing the proper include preprocessor directives.
The expected output is:

```console
$ ./preprocessor
Please enter the amount of random number to generate:
10000000
Generated 10000000 numbers in 0.084871 seconds
```

To check the correctness of your program, use a [suitable environment](https://github.com/c-programming-essentials/devcontainer) and, in a terminal, with all the mentioned source files in the local directory, check with this command:

```console
$ check50 -l --ansi-log olivierpierre/comp26020-problems/2025-2026/week4-compilation/06-preprocessor
```

---

[← Previous exercise](../05-cast/README.md) | [Next exercise →](../07-ascii/README.md)
