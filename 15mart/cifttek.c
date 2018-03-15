//IEEE Giresun SB C LAB
//Sayıların çift veya tek olma durumlarını bulan program
#include <stdio.h>
int fbul(int sayi);   //fonksiyon prototipi
int main(void) {
  size_t i;     //size_t -> sayaçlar için kullanılan unsigned int veri tipindeki değişkendir.
  printf("Sayi Tek-Cift");
  for(i = 1; i < 100; i++) {      //1 den 100'e kadar olan bütün sayıları incelemek için döngü
    if(fbul(i)) printf("%d  cifttir\n", i);       //fbul() fonksiyonu çift sayılara 1 gönderiğinden eğer sonuç 1'se çift yaz
    else printf("%d  tektir\n", i);         //eğer 1 değilse tektir. tek yaz
  }
  return 0;
}

//temel fonksiyon tanımlama kuralı;
//fonksiyonun_geri_cevirecegi_veri_tipi fonksiyon_adi(fonksiyon_parametreleri) {  fonksiyonun içeriği ..  }
int fbul(int sayi) {  //tekse 0 çiftse 1 çevirir.
  if( sayi % 2 ) return 0;
  else return 1;
}
