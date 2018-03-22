#include <stdio.h>
#include <stdlib.h>

int main(void) {
  int yuz;
  size_t i;
  srand(time(NULL));
  for(i = 0; i < 30; i++) {
    yuz = 1 + rand() % 6;
    printf("%d  ", yuz);
  }
  return 0;
}
