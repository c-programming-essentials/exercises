## Stream-Based File I/O

This is a variation of a the exercise presented in #sec:exercise-file-io regarding file I/O.
The goal is similar: write a C program taking as command line parameter A) a file name `f` and B) a word `w`.
The program then creates the file `f-processed` which is a copy of `f` where all occurrences of the word `w` have been deleted.
This time, stream-based file I/O functions (`fopen`, `fread`, and `fwrite`) should be used to write the program. 

Here is an example of execution:

```console
$ cat sample-file-1
hello world
this is a test file containing the word hello several times
some lines do not contain that word
while others do: hello

$ ./stream sample-file-1 hello

$ cat sample-file-1-processed
 world
this is a test file containing the word  several times
some lines do not contain that word
while others do: 
```

The file `sample-file-1` can be downloaded [here](./sample-file-1).

% TODO remove the "you" from that sentence (present with all exercises)?
To check the correctness of your program, use a [suitable environment](https://github.com/c-programming-essentials/devcontainer) and write your solution in a file named **`stream.c`**. In a terminal, with that file in the local directory, check with this command:

```console
$ check50 03-mm-libc/17-stream
```

Make sure that `sample-file-1` is in the current directory alongside `stream.c`

---

[← Previous exercise](../16-file/README.md) | [Next exercise →](../18-cast/README.md)
