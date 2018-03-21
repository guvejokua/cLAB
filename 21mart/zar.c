//IEEE Giresun SB C LAB
//Bir zarın 6000000 kere atılmasından elde edilen sonuçların ekrana frekansları ile yazılması
//Burada frekans her sayının kaç kere geldiğini belirtir.
#include <stdio.h>
#include <stdlib.h>     //rand() ve srand()'ın tanımlı olduğu kütüphane

int main(void) {
  int yuz;    //Zarın yüzüne gelen sayıyı tutmak için değişken
  size_t i;   //Sayaç
  int frekans[7] = {0};   //Tüm frekanslar sıfıra eşitleniyor
  srand(time(NULL));      //Rastgele atama için sayı üretme çekirdeği değiştiriliyor. Bknz. rastgele.c 10-15 satırlar
  for(i < 0; i < 6000000; i++) {    //Zar 6000000 kere atılıyor
    yuz = 1 + rand() % 6;   //Yüze gelen sayı zar aralığına yani 1-6 aralığına düşürülüyor. Bknz: rastgele.c 18-23 satırlar
    frekans[yuz]++;     //Hangi sayı geldiyse ona ait frekans bir artırılıyor.
  }
  for(i = 1; i < 7; i++) {    //Frekanslar ekrana yazdırılıyor.
    printf("%2d icin frekans = %d\n", i, frekans[i]);
  }
  return 0;
}
