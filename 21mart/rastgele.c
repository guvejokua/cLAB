//IEEE Giresun SB C LAB
//Rastgele sayı üretme denemesiyle zar atma deneylerinin gerçeklenmesi
#include <stdio.h>
#include <stdlib.h>   //rand() fonksiyonunun tanımlı olduğu kütüphane programa ekleniyor

int main(void) {
  int yuz;    //Zarın ön yüzüne gelen sayıyı tutmak için kullanılan değişken
  size_t i;   //Sayaç değişkeni
  srand(time(NULL));    //Rastgele sayı üretme çekirdeği
  /*
  Eğer srand() fonksiyonu kullanılmazsa her defasında aynı rastgele sayılara üretilir. Çünkü rand() fonksiyonu
  aynı çekirdekten çalışmıştır. Burada rand() fonksiyonunun çekirdeğini değiştirmek için stdlib.h içinde
  void srand(unsigned int) biçiminde tanımlı çekirdek fonksiyonu kullanılır. Burada kullanılan time(NULL) ifadesi
  program her çalıştığında farklı çekirdekler üretmesini sağlar
  */
  for(i = 0; i < 500; i++) {    //Zarı 500 kere atma için döngü
    yuz = 1 + rand() % 6;  //rand() fonksiyonundan gelen sayılar 1-6 aralığına kısıtlanıyor
    /*
    Normalde rand() tüm değerleri rastgele çevirir ancak bize bir zar denemesi için 1-6 aralığındaki sayılar
    gerekli bu yüzden rand()'dan gelen rastgele sayıların 6'ya bölümünden kalanları alınır ve 1 eklenir.
    Eğer 1 eklemez isek rand() bize 6 gönderirse 6%6=0 olur ve zar üzerinde 0 sayısı olmadığından hatalı olur
    */
    printf("%d ", yuz);   //Rastgele üretilen zar atışları ekrana yazdırılıyor.
  }
  return 0;
}
