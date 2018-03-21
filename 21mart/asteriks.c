//IEEE Giresun SB C LAB
//Asteriks (*) ile histogram grafiğinin yazdırılması
#include <stdio.h>

int main(void) {
  int dizi[10] = {5, 7, 8, 6, 7, 82, 72, 95, 10, 85};   //10 elemanlı dizi oluşturuluyor.
  size_t i,j;       // 2 döngü için kullanılacak sayaçlar tanımlanıyor.
  for(i = 0; i < 10; i++) {   //dizi üzerinde indislerle gezmemizi sağlayan for döngüsü
    printf("%2d = ", dizi[i]);    //Dizinin i.elemanı ekrana yazdırılıyor ve histogramı bekleniyor.
    for(j = 0; j < dizi[i]; j++) {  //Dizideki i.elemanın değeri kadar Asteriks ekrana yazılması için döngü
      printf("*");    //Asteriks yazılıyor.
    }
    puts("");   //Bir satır aşağı geçiliyor
  }
  return 0;
}
