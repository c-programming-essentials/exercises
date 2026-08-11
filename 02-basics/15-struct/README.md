## Custom Data Structures with `struct`

Consider the following structure:

```c
struct timestamp {
    unsigned int hour;
    unsigned int minute;
    unsigned int second;
};
```

Using this structure, write a C program adding two timestamps and displaying the result on the standard output.
The program takes 6 command line parameters corresponding to the two timestamps.
The addition is realised in a function named `add_timestamps` that takes 2 timestamp parameters and return the sum as a timestamp.
Here are some output examples:

```console
# 5h11m44s + 12h30m3s = 17h41m47s
$ ./struct 5 11 44 12 30 3
17 41 47

# 10h30m50s + 1h5m15s = 11h36m5s
$ ./struct 10 30 50 1 5 15
11 36 5

# 14h12m5s + 22h5m0s = 36h17m5s
$ ./struct 14 12 5 22 5 0
36 17 5
```

To check the correctness of your program, use a [suitable environment](https://github.com/c-programming-essentials/devcontainer) and write your solution in a file named **`struct.c`**. In a terminal, with that file in the local directory, check with this command:

```console
$ check50 02-basics/15-struct
```

---

[← Previous exercise](../14-typedef/README.md) | [Next exercise →](../16-enum/README.md)
