## Sorting Contacts with qsort

The following code aims to display a sorted list of contacts.
The program stores the list in an array where each contact contains a first name, a last name, and an age.
The user chooses one of three sorting operations:
- `0`: sort by age (youngest first)
- `1`: sort by last name (alphabetical order)
- `2`: sort by the total length of the first and last names (shortest first)

```c
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define CONTACTS_NUM    7

typedef struct {
    char first_name[32];
    char last_name[32];
    int age;
} contact;

contact contacts[] = {
    {"Alice", "Brown", 25},
    {"John", "Smith", 31},
    {"Emma", "Jones", 19},
    {"David", "Brown", 42},
    {"Bob", "Smith", 28},
    {"Amy", "Li", 20},
    {"Christopher", "Johnson", 35}
};

void print_contact(contact c) {
    printf("%s %s, %d\n", c.first_name, c.last_name, c.age);
}

int compare_by_age(const void *a, const void *b) {
    // TODO complete here
}

int compare_by_last_name(const void *a, const void *b) {
    // TODO complete here
}

int compare_by_name_length(const void *a, const void *b) {
    // TODO complete here
}

int (*comparison[3])(const void *, const void *) = {compare_by_age, compare_by_last_name, compare_by_name_length};

int main() {
    int op;

    printf("sort operation to apply? (0: by age, 1: by last name, 2: by total name length)\n");
    scanf("%d", &op);

    if(op < 0 || op > 2)
        return -1;

    // TODO call qsort here applying the proper sort operation to the array contacts. It should be a one liner with no if/switch on op

    for(int i=0; i<CONTACTS_NUM; i++)
        print_contact(contacts[i]);

}
```

Complete the missing parts of the program so that it can sort an array of contacts according to different criteria selected by the user.
The comparison functions `compare_by_age()`, `compare_by_last_name()`, and `compare_by_name_length()` must be completed so that they can be used with the standard library function `qsort()`.
The final call to `qsort()` must also be completed.

The program already provides an array of function pointers named `comparison` containing the three comparison functions.
Use this array to select the appropriate comparison function according to the user's choice.
The `qsort()` call should be written as a single statement without using `if`, `else`, or `switch`.

Example executions:

```console
$ ./contacts
sort operation to apply? (0: by age, 1: by last name, 2: by total name length)
0
Emma Jones, 19
Amy Li, 20
Alice Brown, 25
Bob Smith, 28
John Smith, 31
Christopher Johnson, 35
David Brown, 42

$ ./contacts
sort operation to apply? (0: by age, 1: by last name, 2: by total name length)
1
Alice Brown, 25
David Brown, 42
Christopher Johnson, 35
Emma Jones, 19
Amy Li, 20
Bob Smith, 28
John Smith, 31
```

To check the correctness of your program, use a [suitable environment](https://github.com/c-programming-essentials/devcontainer) and write your solution in a file named **`funcptr.c`**. In a terminal, with that file in the local directory, check with this command:

```console
$ check50 03-mm-libc/20-funcptr
```

[← Previous exercise](../19-ascii/README.md) | [Next exercise →](../../04-building-debugging/01-macro/README.md)