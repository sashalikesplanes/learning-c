#include <stdio.h>

int main(int argc, char *argv[])
{
  int age;
  int height = 72;

  printf("I am %d years old.\n", age);
  printf("I am %d inches tall.\n", height);

  if (argc == 1)
  {
    printf("no beep\n");
  }
  else 
  {
    printf("beeeeep \a \n");
  }

  return 0;
}
