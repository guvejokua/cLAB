//IEEE Giresun SB C LAB
//Özyinelemeli fonksiyonlar ile fibonacci dizinin hesaplanması
#include <stdio.h>
long long int fib(long long int);   //fibonacci yi hesaplayan fonksiyon prototipi
int main(void) {
  size_t i;   //Döngü sayacı
  for(i = 0; i < 41; i++) {     //0'dan 40'a kadar tüm fibonacci değerleri hesaplanıyor ve yazdırılıyor.
    printf("Fib %d = %lld\n", i, fib(i));
  }
  return 0;
}

long long int fib(long long int sayi) {   //fibonacci yi hesaplayan recursive fonksiyon
/*
  Fibonacci dizisin genel tanımına göre;
  fibonacci(0) = 0
  fibonacci(1) = 1
  fibonacci(x) = fibonacci(x-1) + fibonacci(x-2)
  */
  if(sayi == 0) return 0;   //fibonacci(0) için 0 çeviren ifade
  if(sayi == 1) return 1;   //fibonacci(1) için 1 çeviren ifade
  else return fib(sayi - 1) + fib(sayi - 2);  //fibonacci(sayi) = fibonacci(sayi-1) + fibonacci(sayi-2) çeviren ifade
 }
