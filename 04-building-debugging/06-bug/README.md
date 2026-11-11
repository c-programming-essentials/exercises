## Investigating a Bug with GDB

The following code, `bug.c`, contains several memory corruption bugs:

```c
#include <stdio.h>
#include <stdlib.h>

int array[1000];

int main(int argc, char **argv) {
	int x;

	for (int i = 0; i < 10000; i++){
		int ran_num = rand()% 1000;
		array[i] = ran_num;
	}

	printf("Please enter an integer between 0 and 9999: ");
	scanf("%d", x);

	printf("array[%d] = %d\n", x, array[x]);
}
```

Use GDB to debug this program and fix the bugs.
An example of the expected execution is shown below:

```console
Please enter an integer between 0 and 9999: 10
array[10] = 362
```

The output will not necessarily display 362 because the array's contents are generated randomly.
The important requirement is that the program must not encounter a segmentation fault.

To check the correctness of your program, use a [suitable environment](https://github.com/c-programming-essentials/devcontainer) and write your solution in a file named **`bug.c`**.
With that source file in the current directory, run the following command in a terminal:

```console
$ check50 04-building-debugging/06-bug
```

---

[← Previous exercise](../05-preprocessor/README.md)
