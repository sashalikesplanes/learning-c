#include <stdio.h>

void print_indexing(int *p_ages, char **p_names, int count) {
    // first way using indexing
    for(int i = 0; i < count; i++) {
        printf("%s has %d years alive.\n", p_names[i], p_ages[i]);
    }

    printf("---\n");
}

void print_pointers(int *p_ages, char **p_names, int count) {
    // second way using pointers
    for(int i = 0; i < count; i++) {
        printf("%s is %d years old.\n", *(p_names + count - 1 - i), *(p_ages + count - 1 - i));
    }

    printf("---\n");
}

void print_stupid_pointers(int *p_ages, char **p_names, int count) {
    int *cur_age = p_ages;
    char **cur_name = p_names;
    while((cur_age - p_ages) < count) {
        printf("%s is %d years old, stupid fucking pointers\n", *(cur_name++), *(cur_age++));
    }

    printf("---\n");
}

int main(int argc, char *argv[]) {
    // create two arrays
    int ages[] = { 23, 43, 12, 89, 2 };
    char *names[] = {
        "Alan", "Frank",
        "Mary", "John", "Lisa"
    };

    // safely get the size of ages
    int count = sizeof(ages) / sizeof(int);
    
    print_indexing(ages, names, count);
    print_pointers(ages, names, count);
    print_stupid_pointers(ages, names, count);

    return 0;
}
