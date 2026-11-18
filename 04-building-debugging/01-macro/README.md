## Using Macros

Consider the following code:

```c
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/* Fill the array referenced by ptr with random integers with values between
 * 0 and 99 */
void fill_array(int *ptr, int size) {
    srand(time(NULL));
    for (int i = 0; i<size; i++)
        ptr[i] = rand()%100;
}

int main(int argc, char **argv) {
    int bins[5] = {0, 0, 0, 0, 0};

    int *array = malloc(1000 * sizeof(int));
    if (!array) {
        perror("malloc");
        return -1;
    }

    fill_array(array, 1000);

    /* Iterate over the array and accordign to the value of each element,
     * increment the corresponding bin counter */
    for (int i=0; i<1000; i++) {
        int n = array[i];

        if (n < 100/5)
            bins[0]++;
        else if (n >= 100/5 && n < (100/5)*2)
            bins[1]++;
        else if (n >= (100/5)*2 && n < (100/5)*3)
            bins[2]++;
        else if (n >= (100/5)*3 && n < (100/5)*4)
            bins[3]++;
        else
            bins[4]++;
    }

    for (int i=0; i<5; i++) {
        printf("bin %d: [%03d - %03d[ ", i, (100/5)*i, (100/5)*(i+1));
        for (int j=0; j<(bins[i]*100)/1000; j++)
            printf("*");
        printf("\n");
    }

    free(array);
    return 0;
}
```

This program generates a series of random numbers and displays their distribution across several bins:

```console
$ ./macro
bin 0: [000, 020[ *******************
bin 1: [020, 040[ *******************
bin 2: [040, 060[ *******************
bin 3: [060, 080[ **********************
bin 4: [080, 100[ ******************
```

The code in `macro.c` contains several redundant hard-coded numbers that would be better defined as macros (constants) to improve clarity and make the code easier to modify.
Fix this problem by introducing at least two macros:

- `SAMPLE_SIZE` defining the size of the array (the number of integers) used by the program, which is 1000 in the code above.
- `MAX_VAL` defining the upper bound of the range of generated random integers, `[0 - MAX_VAL[`, which is 100 in the code above.

Define these macros as 10 for `SAMPLE_SIZE` and 50 for `MAX_VAL`.
An example of expected output is:

```console
$ ./macro
bin 0: [000, 010[ 
bin 1: [010, 020[ **********
bin 2: [020, 030[ ********************
bin 3: [030, 040[ **************************************************
bin 4: [040, 050[ ********************
```

To check the correctness of your program, use a [suitable environment](https://github.com/c-programming-essentials/devcontainer) and write your solution in a file named **`macro.c`**.
With that file in the current directory, run the following command in a terminal:

```console
$ check50 04-building-debugging/01-macro
```

---

[← Previous exercise](../../03-mm-libc/20-funcptr/README.md) | [Next exercise →](../02-macro-conditional/README.md)
