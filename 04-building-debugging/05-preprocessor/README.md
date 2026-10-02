## Header Inclusion

Consider the following program which sources are made of two files: `preprocessor.c` and `preprocessor.h`:

```c
// preprocessor.h

#ifndef PREPROCESSOR_H
#define PREPROCESSOR_H

typedef struct struct timespec ts;

#endif /* PREPROCESSOR_H */
```

```c
// preprocessor.c

int main(int argc, char **argv) {
    int n;
    int *array;
    ts t1, t2, t3;

    printf("Amount of random number to generate?\n");
    scanf("%d", &n);

    array = malloc(n*sizeof(int));
    if (!array) {
        perror("malloc");
        return -1;
    }

    clock_gettime(CLOCK_REALTIME, &t1);

    for (int i = 0; i<n; i++)
        array[i] = rand()%100;

    clock_gettime(CLOCK_REALTIME, &t2);

    t3.tv_sec = t2.tv_sec - t1.tv_sec;
    t3.tv_nsec = t2.tv_nsec - t1.tv_nsec;
    if (t3.tv_nsec < 0) {
        t3.tv_sec--;
        t3.tv_nsec += 1000000000L;
    }

    printf("Generated %d numbers in %ld.%09ld seconds\n", n,
            t3.tv_sec, t3.tv_nsec);

    free(array);
    return 0;
}
```

This program fails to compile due to missing header inclusions.
Correct these issues by writing the proper include preprocessor directives.
The expected output is:

```console
$ ./preprocessor
Amount of random number to generate?
10000000
Generated 10000000 numbers in 0.084871 seconds
```

To check the correctness of your program, use a [suitable environment](https://github.com/c-programming-essentials/devcontainer) and, in a terminal, with all the mentioned source files in the local directory, check with this command:

```console
$ check50 04-building-debugging/05-preprocessor
```

---

[← Previous exercise](../04-makefile/README.md) | [Next exercise →](../06-bug/README.md)
