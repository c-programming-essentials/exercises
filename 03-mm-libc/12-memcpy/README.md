## Copying Data in Memory with `memcpy`

Write a C program that takes an integer `n` as command line parameter, allocates an array of integer of size `n`, and fills that array with random integers which values fall between 0 and 100.
Next, the program should create a second array of size `n` and copy the content of the first array into the second one with a single call to `memcpy`.
Finally, the program prints the content of both arrays.
Below are two examples of this program's execution and output:

```console
$ ./memcpy 10
array1: 32 32 54 12 52 56 8 30 44 94
array2: 32 32 54 12 52 56 8 30 44 94

$ ./memcpy 15
array1: 32 32 54 12 52 56 8 30 44 94 44 39 65 19 51
array2: 32 32 54 12 52 56 8 30 44 94 44 39 65 19 51
```

To check the correctness of your program, use a [suitable environment](https://github.com/c-programming-essentials/devcontainer) and write your solution in a file named **`memcpy.c`**. In a terminal, with that file in the local directory, check with this command:

```console
$ check50 03-mm-libc/12-memcpy
```

---

[← Previous exercise](../11-string2/README.md) | [Next exercise →](../13-math/README.md)
