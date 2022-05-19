#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, char* argv[]) {
  int a, b;
  int *pi;

  a = atoi(argv[1]);
  pi = &a;
  printf("before: %d, %d\n", *pi, a);
  pi = NULL;
  b = *pi;
  printf("after: %d, %d\n", *pi, b);
  return 0;
}