// Learning how to use LLDB
#include <stdio.h>

void func2()
{
    int* px = 0;    
    *px = 7;
}

void func1()
{
    func2();
}

int main()
{
  func1();

  return 0;
}
