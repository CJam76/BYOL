#include <stdio.h>

int main() {
  int i = 10;
  while (i > 0) {
    puts("loop iteration");
    i = i - 1;
  }
  for(int i = 0; i < 10; i++) {
    puts("Loop iteration");
  }
}