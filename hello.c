#include <stdio.h>

int add(int a, int b) {
    return a + b;
}

int main() {
  int sum;
  printf("Hello, Gentoo!\n");
  printf("Hello, Gentoo Again!\n");
  sum = add(18, 29);
  printf("Sum: %d\n", sum);
  return 0;
}
