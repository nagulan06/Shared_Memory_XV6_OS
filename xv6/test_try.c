#include "types.h"
#include "stat.h"
#include "user.h"

void
copy(char* dst, const char* src)
{
  memmove(dst, src, strlen(src) + 1);
}

int
main(int _ac, char* _av[])
{
  char* t1 = "Alice";

  char* s1 = spalloc();
  printf(1, "Allocated memory: %p\n", s1);
  copy(s1, t1);
  printf(1, "p1: Hi, %s\n", s1);
  return 0;
}
