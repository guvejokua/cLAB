//Yer değiştimelerin hepsini yapmak için gerekli döngü
#include <stdio.h>
#define BOY 5     //BOY adında dizi boyutu için sabit tanımlanıyor
int main(void) {
  int dizi[BOY] = {8, 7, 6, 5, 9};    //Dizi tanımlanıyor ve atamaları yapılıyor
  size_t gecis, i;    //Gerekli sayaçlar
  int enKucuk, indis, swap;     //Enküçük sayı enküçük sayınının indisi ve değişim için gerekli değişkenler
  for(i = 0; i < BOY; i++) {    //Dizi ekrana yazdırılıyor
    printf("%d ", dizi[i]);
  }
  puts("");   //Bir satır boşluk
  for(gecis = 0; gecis < BOY; gecis++) {    //Dizinin tümümünün sıralanana kadar taranması için gerekli döngü
    enKucuk = dizi[gecis];    //Sıralanmamış dizideki ilk eleman en küçük olarak varsayılıyor
    indis = gecis;      //Ve enküçük sayıya ait indis, indis değişkenine atanıyor
    for(i = gecis + 1; i < BOY; i++) {    //Dizideki tüm elemanlar ile enküçük varsaydığımız değeri karşılaştırmak için döngü
      if(dizi[i] < enKucuk) {   //En küçük varsayılan sayının diğer dizi elemanları ile karşılaştırılması
        enKucuk = dizi[i];      //Eğer herhangi bir dizi elemanı enkücükten küçükse yeni enküçük olarak atanıyor
        indis = i;    //Ona ait indis, indis değişkenine atanıyor
      }
    }
    //Sıralanmamış kısımdaki en küçük sayıya karar verdiğimizde onu ilk baştaki dizi elemanıyla değiştiriyoruz
    swap = dizi[gecis];
    dizi[gecis] = dizi[indis];
    dizi[indis] = swap;
  }
  for(i = 0; i < BOY; i++) {    //Sıralanmış diziyi ekrana yazdırıyoruz
    printf("%d ", dizi[i]);
  }
  return 0;
}
