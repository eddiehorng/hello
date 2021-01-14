#include <stdio.h>

void main() {
  char t[10] = "hello";
  printf("%s", t);
  free(t);
}
