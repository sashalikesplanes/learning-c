#include <stdio.h>

int main(int argc, char * argv[])
{
    char full_name[] = {
        'Z', 'e', 'd',
        ' ', 'A', '.', ' ',
        'S', 'h', 'a', 'w'
    };
    int areas[] = { 10, 12, 13, 14, 20 };
    char name[] = "Zed";

    name[2] = 110;
    areas[0] = 'f';

    printf("Size of an int: %ld\n", sizeof(int));
    printf("The size of areas (int[]): %ld\n", sizeof(areas));
    printf("THe number of ints in areas: %ld\n", sizeof(areas) / sizeof(int));
    printf("The first area is %d, the second %d\n", areas[0], areas[1]);
    printf("The size of a cahr: %ld\n", sizeof(char));
    printf("THe size of name (char[]) %ld\n", sizeof(name));
    printf("The number of chars in name: %ld\n", sizeof(name) / sizeof(char));
    printf("The size of fullname: %ld\n", sizeof(full_name));
    printf("The num of chars: %ld\n", sizeof(full_name) / sizeof(char));
    printf("Name=\"%s\" and full_name=\"%s\"\n", name, full_name);
    return 0;
}
