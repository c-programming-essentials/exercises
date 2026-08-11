## Sleeping and Measuring Execution Time

Write a C program that takes an integer `n` as command line parameter and sleeps for `n` seconds.
The execution time of the `sleep` function is measured and displayed as illustrated in the following examples of eecution and output:

```console
$ ./time 3
sleep duration: 3.000184401 seconds

$ ./time 5
sleep duration: 5.000073675 seconds
```

To check the correctness of your program, use a [suitable environment](https://github.com/c-programming-essentials/devcontainer) and write your solution in a file named **`time.c`**. In a terminal, with that file in the local directory, check with this command:

```console
check50 03-mm-libc/14-time
```

---

[← Previous exercise](../13-math/README.md) | [Next exercise →](../15-strtol/README.md)
