#include <stdio.h>
#include <stdlib.h>     //rand() ve srand() için stdlib kütüphanesi ekleniyor
#define BOYUT 100000    //BOYUT ismindi dizi boyutu için sabit tanımlanıyor

int main(void) {
  int dizi[BOYUT] = {0};    //Dizinin her ekemanına sıfır atanıyor
  size_t i, gecis;    //Gerekli sayaçlar
  int swap;     //Elemanların dizide yerlerini değiştirmek için kullanılacak değişken
  srand(time(NULL));
  //DİZİYİ EKRANA YAZDIR.
  for(i = 0; i < BOYUT; i++) {
    dizi[i] = rand() % 100;
    printf("%d ", dizi[i]);
  }
  puts(""); //=printf("\n");

  for(gecis = 0; gecis < BOYUT; gecis++) {  //Yer değiştimelerin hepsini yapmak için gerekli döngü
    for(i = 0; i < BOYUT - 1; i++) {    //Dizideki tüm ikili elemanların karşılaştırlılması için gerekli döngü
      if(dizi[i] > dizi[i + 1]) { //Eğer soldaki sayı sağdakinden büyük ise yerlerini değiştir
      //  printf("Swap\tDizi[%d]\tDizi[%d]\n", i, i+1);
      //  printf("%d\t%d\t%d\n", swap, dizi[i], dizi[i + 1]);
        swap = dizi[i];
      //  printf("%d\t%d\t%d\n", swap, dizi[i], dizi[i + 1]);
        dizi[i] = dizi[i + 1];
      //  printf("%d\t%d\t%d\n", swap, dizi[i], dizi[i + 1]);
        dizi[i + 1] = swap;
      //  printf("%d\t%d\t%d\n", swap, dizi[i], dizi[i + 1]);
      }
    }
  }
  //Sıralanmış dizi ekran yazdırılıyor
  for(i = 0; i < BOYUT; i++) {
    printf("%d ", dizi[i]);
  }
  return 0;
}
