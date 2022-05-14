#include <stdio.h>

#define TRUE 1

int main(int argc, char const *argv[])
{
  unsigned long i = 0;
  while (TRUE) {
    if (i == (unsigned long) 4000000000)
      i = 0;
    else
      i++;
  }
  return 0;
}
