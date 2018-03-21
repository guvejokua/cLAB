//IEEE Giresun SB C LAB
//Dizilerde eleman değişimi
#include <stdio.h>
void degistir(int array[], int size);   //Değişimi yapan fonksiyon prototipi
int main(void) {
  int array[3] = {5, 6, 10};        //3 elemanlı dizi tanımlanıyor
  size_t i;       //Döngüde kullanılacak sayaç
  for(i = 0; i < 3; i++) {      //diziyi ekrara yazdıma
    printf("%d", array[i]);
  }
  puts("");   //Bir satır boşluk
  degistir(array, 3);   //Değişitme yapacak fonksiyona dizi adı ve boyutu gönderiliyor.
  for(i = 0; i < 3; i++) {    //0 ve 2. elemanları yer değişen dizi ekrana bastırılıyor.
    printf("%d\n", array[i]);
  }
  return 0;
}

void degistir(int array[], int size) {    //Değişimi yapan fonksiyon
  int swap;   //Geçiş için kullanılacak değişken
  swap = array[0];    //0.eleman swap değişkenine alınıyor.
  array[0] = array[2];  //0.elemana 2.eleman yazılıyor.
  array[2] = swap;    //2.elemana swap değişkeninde tutulan önceki 0.eleman aktarılıyor.
  /*
  Diziler kendi isimleri ile gönderildiklerinde oraya adresi aktarılır ve bu bize dizideki elemanlara
  müdahele etme fırsatı verir. Normal değişkenlerde ise fonksiyona sadece değişken içindeki değer aktarılır
  bu yüzden değişkene fonksiyon içinden müdahele edemeyiz.
  */
}
