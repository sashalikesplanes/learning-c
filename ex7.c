#include <stdio.h>

int main(int argc, char* argv[])
{
    int distance = 100;
    float power = 2.345f;
    double super_power = 56789.4532;
    char initial = 'S';
    char first_name[] = "Sasha";

    printf("You are %d miles away.\n", distance);
    printf("You have %f levels of power.\n", power);
    printf("You have %f awesome power.\n", super_power);
    printf("I have an initial %c.\n", initial);
    printf("I have a first name %s.\n", first_name);

    char new_initial = initial + 5;
    printf("My new initial is %c\n", new_initial);

    int bugs = 100;
    double bug_rate = 1.2;

    printf("You have %d bugs at the rate of %f.\n", bugs, bug_rate);

    unsigned long universe_of_defects = 1L * 1000024L * 10000024L * 1024000L;
    printf("The entire universe has %ld bugs.\n", universe_of_defects);

    double expected_bugs = bugs * bug_rate;
    printf("You are expected to have %f bugs.\n", expected_bugs);

    double part_of_universe = expected_bugs / universe_of_defects;
    printf("That is only a %e portion of the universe\n", part_of_universe);

    char nul_byte = '\0';
    printf("The null byte as a char %c and a string %s\n", nul_byte, nul_byte);
    int care_percentage = bugs * nul_byte;
    printf("That means you should care %d%%\n", care_percentage);

    return 0;
}
