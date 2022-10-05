#include <stdio.h>

int main(int argc, char *argv[])
{
    int i = 0;

    if (argc == 1) {
        printf("You have only one arg\n");
    } else if (argc > 1 && argc < 5) {
        printf("Here are you arguments\n");
        
        for (i = 0; i < argc; i++) {
            printf("%s ", argv[i]);
        }
        printf("\n");
    } else {
        printf("Too many arguments\n");
    }

    return 0;
}
