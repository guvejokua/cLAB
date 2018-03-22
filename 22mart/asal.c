//IEEE Giresun SB C LAB
#include <stdio.h>
int asal(int);    //Sayının asallığını kontrol eden fonksiyon eğer x asalsa 1, eğer asal değilse 0 çevirir.
int main(void) {
  if(asal(5)) puts("Bu sayi asal");
  if(!asal(10)) puts("Bu sayi asal degil");
  return 0;
}

int asal(int x) {   //Asallığı kontrol için kullanılan program
  size_t i;   //Döngü için kullanılacak değişken
  for(i = 2; i < x; i++) {
    /*
    Burada yapılan işlem sayının 1'den ve kendisinden başka sayıya tam bölünüp bölünmediğini kontrol
    ediyor. Eğer sayı 1'den ve kendisinden başka sayıya tam bölünüyorsa 0 çeviriyor ve asal olmadığını
    belirtiyor.
    */
    if(!(x % i)) return 0;    //Eğer kalan 0 ise bunu ! mantıksal operatörü ile 1 yapıp if bloğuna giremesini sağlıyoruz
    else ;  //Değilse hiçbir şey yapmadan sayının kendisine kadar olan sayılara bölmeye devam ediyoruz
  }
  return 1;     //Eğer herhangi bir sayıda kalan sıfır olmadıysa program buraya gelecektir. O halde sayı asaldır
}
