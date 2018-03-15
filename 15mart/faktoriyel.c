//IEEE Giresun SB C LAB
//Sayaç yardımı ile faktöriyel hesaplayan program
#include <stdio.h>
long long int faktoriyel(unsigned int sayi);      //fonksiyon prototipi
int main() {
  printf("%lli", faktoriyel(5));
  return 0;
}
long long int faktoriyel(unsigned int sayi) {     //faktöriyel hesaplayan fonksiyon
  size_t sayac;       //size_t -> sayaçlar için kullanılan unsigned int veri tipinde değişkendir.
  long long int sonuc = 1;        //long long int -> çok büyük sayılar için kullanılan tam sayı değişkeni
  for(sayac = 1; sayac < sayi + 1; sayac++) {     //sayaçı bir artırar sırayla "sayı"ya kadar olan sayıları sayaca aktarıyor
    sonuc = sonuc * sayac;        //sayaç ile sonucun son değerini çarpıp sonuca tekrar aktarıyor
  }
  return sonuc;       //sonuç geri gönderiliyor
  }
