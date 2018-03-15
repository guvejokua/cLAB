#include <stdio.h>
#include <stdlib.h>
int fbuyuk(int a, int b, int c);
int main(void) {
  int a, b, c;
  puts("Uc sayi giriniz");
  scanf("%d %d %d", &a, &b, &c);
  printf("En buyuk = %d", fbuyuk(a,b,c));
  return 0;
}

int fbuyuk(int a, int b, int c) {
  int enbuyuk = a;
  if( b > enbuyuk ) {
    enbuyuk = b;
  }
  if( c > enbuyuk ) {
    enbuyuk = c;
  }
  return enbuyuk;
}
