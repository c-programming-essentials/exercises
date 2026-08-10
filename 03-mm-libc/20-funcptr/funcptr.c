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

    if (op < 0 || op > 2)
        return -1;

    // TODO call qsort here applying the proper sort operation to the array contacts. It should be a one liner with no if/switch on op

    for (int i=0; i<CONTACTS_NUM; i++)
        print_contact(contacts[i]);

}