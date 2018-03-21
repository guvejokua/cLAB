//IEEE Giresun SB C LAB
//0 - 20 arasındaki çift sayıları diziye yazan program
#include <stdio.h>
int main(void) {
  size_t i, k;    //Döngüler için sayaçlar tanımlanıyor
  int dizi[10];   //10 elemanlı dizi oluşturuluyor.
  int son = 0;     //Diziye atadığımız son çift sayıyı tutmak için kullanılan değişken
  for(k = 0; k < 10; k++) {     //Dizinin indislerini kontrol için döngü. dizi[0], dizi[1], ... gibi
    dizi[i] = son;    //Son çift sayı dizinin i.elemanına atanıyor.
    printf("%d ",dizi[i]);    //Atanan eleman ekrana yazdırılıyor.
    son = son + 2;    //Son elemana 2 ekleniyor.
  }
  return 0;
}
