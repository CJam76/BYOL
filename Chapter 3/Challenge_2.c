#include <stdio.h>

int Hello_World(int n) {
  while(n > 0) {
    puts("Hello World.");
    n = n - 1;
  }
}

int main() {
  int print = Hello_World(5);
}