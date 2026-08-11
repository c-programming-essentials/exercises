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

This program generates a series of random numbers and outputs the distribution of their value into several bins:

```console
 ./macro
bin 0: [000 - 020[ *******************
bin 1: [020 - 040[ *******************
bin 2: [040 - 060[ *******************
bin 3: [060 - 080[ **********************
bin 4: [080 - 100[ ******************
```

There are several redundant hardcoded numbers in the code of `macro.c` that should rather be defined as macros (constants) to ease the code clarity and the possibilities of evolution.
Fix this problem by introducing at least 2 macros:

\begin{itemize}
\item `SAMPLE_SIZE` defining the size (i.e. number of integers) of the array manipulated by the program -- currently 1000 in the provided code sample
\item `MAX_VAL` defining the value that the generated random integers can take as the range `[0 - MAX_VAL[`, currently 100 in the code sample.
\end{itemize}

Define these macros to be 10 for `SAMPLE_SIZE` and 50 for `MAX_VAL`.
An example of expected output is:

```console
 ./macro
bin 0: [000 - 010[ 
bin 1: [010 - 020[ **********
bin 2: [020 - 030[ ********************
bin 3: [030 - 040[ **************************************************
bin 4: [040 - 050[ ********************
```

To check the correctness of your program, use a [suitable environment](https://github.com/c-programming-essentials/devcontainer) and write your solution in a file named **`macro.c`**. In a terminal, with that file in the local directory, check with this command:

```console
$ check50 -l --ansi-log olivierpierre/comp26020-problems/2025-2026/week4-compilation/01-macro
```