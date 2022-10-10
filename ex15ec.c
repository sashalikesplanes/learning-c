#include <stdio.h>

int main(int argc, char *argv[]) {
    // print all command line arguments, letter by letter one per line
    char **current_arg = argv;

    for (int i = 0; i < argc; i++) {
        char *current_letter = *(current_arg + i);
        int j = 0;
        while(*(current_letter + j) != '\0') {
            printf("%c ", *(current_letter + j));
            j++;
        }

        printf("\n");
        // print the addresses per character
        j = 0;
        while(*(current_letter + j) != '\0')  {
            printf("%p ", current_letter + j);
            j++;
        }
        printf("\n");
    }
    return 0;
}
