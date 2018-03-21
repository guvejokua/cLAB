//IEEE Giresun SB C LAB
//Static değişkenli faktoriyel hesabı
#include <stdio.h>
int faktoriyel(int x);    // faktoriyel için kullanılan fonksiyon prototipi
int main(void) {
  printf("%d", faktoriyel(5));    //faktoriyel sonucu ekrana yazdırılıyor.
  return 0;
}

int faktoriyel(int x) {   //faktoriyeli hesaplayan recursive fonksiyon
  static int sonSayi;   //En son hesaplanan faktoriyelin ait olduğu sayı
  static int sonFakt;   //En son hesaplanan faktoriyel değeri
  /*Static değişkenler fonksiyon bittikten sonra da bellekte tutulur ve fonksiyonu yeniden çağırdığımızda
  en son atadığımız değerin olduğunu görürüz. */
  if(x == sonSayi) {      //Son hesaplanan faktoriyel ise tekrara hesaplanmıyor ve önceki değer geri çevriliyor
    return sonFakt;
  }
  if(x == 1) return 1;      //1! = 1 sağlayan ifade
  else {
    sonSayi = x;      //faktoriyelini hesapladığımız son sayı değiştiriliyor.
    sonFakt = x * faktoriyel(x-1);  //Son faktoriyel değişkenine x! = x . (x - 1)! özelliği ile özyineleme sağlanıyor
    return sonFakt;   //Hesapladığımız son faktoriyel değerini tutan sonFakt geri gönderiliyor.
  }
}
