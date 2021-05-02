#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
triangle(10); }

void triangle(int size) {
 for(int i = size; i >= 0; i--) {
  for(int j = 1; j <= i; j++) {
    printf("*");

  }
  printf("\n");
  }
}

