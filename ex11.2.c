#include <stdio.h>

int main()
{
    unsigned int an_int = 314432167;
    unsigned char letters[4];
    for (int i = 0; i < 4; i++) {
        letters[i] = (an_int >> (24 - i * 8)) & 0xFF;
        printf("bits %x and char %c\n", letters[i], letters[i]);
    }
    printf("hexa byes of an int: %x \n", an_int);
    printf("letter: %s\n", letters);
    printf("bytes of letters: %x", letters);
    return 0;
}
