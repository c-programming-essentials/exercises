## File I/O
\label{sec:exercise-file-io}

Write a C program taking as command line parameter A) a file name `f` and B) a word `w`.
The program then creates the file `f-processed` which is a copy of `f` where all occurrences of the word `w` have been deleted.
Here is an example of execution:

```console
$ cat sample-file-1
hello world
this is a test file containing the word hello several times
some lines do not contain that word
while others do: hello

$ ./file sample-file-1 hello

$ cat sample-file-1-processed
 world
this is a test file containing the word  several times
some lines do not contain that word
while others do: 
```

To check the correctness of your program, use a [suitable environment](https://github.com/c-programming-essentials/devcontainer) and write your solution in a file named **`file.c`**. In a terminal, with that file in the local directory, check with this command:

```console
$ check50 03-mm-libc/16-file
```

Make sure that `sample-file-1` contains the same content as printed above, and is in the current directory alongside `file.c`.

---

[← Previous exercise](../15-strtol/README.md) | [Next exercise →](../17-stream/README.md)
