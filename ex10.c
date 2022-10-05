#include <stdio.h>

int main(int argc, char *argv[])
{
    int i = 0;

    // go throug each string in argv
    // skip argv[0] as that is the name of the program
    for (i = 1; i < argc; i++) {
        printf("aeg %d: %s\n", i, argv[i]);
    }

    // lets make our own array of strings
    char *states[] = {
        "California", "Oregon", "Washington", "Texas"
    };

    int num_states = 4;

    for (i = 0; i < num_states; i++) {
        printf("state %d: %s\n", i, states[i]);
    }

    return 0;
}
