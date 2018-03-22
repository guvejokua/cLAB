#include <stdio.h>
#include <stdlib.h>

int main(void) {
  int rastgele;
  int i;
  srand(time(NULL));
  for(i = 0; i < 20; i++){
    rastgele = rand();
    printf("%2d\n", rastgele);
  }
  return 0;
}
