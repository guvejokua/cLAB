//IEEE Giresun SB C LAB
//Öz yinelemeli fonksiyonlar yardımı ile faktöriyel hesaplama

#include <stdio.h>
long long int faktoriyel(unsigned int sayi);    //fonksiyon prototipi
int main() {
  printf("%lli", faktoriyel(5));    //faktöriyeli hesaplanan sayı ekrara yazdırılıyor.
  return 0;
}
long long int faktoriyel(unsigned int sayi) {     //faktöriyel hesaplayan fonksiyon. long long int -> büyük tamsayılar için kullanılır.
  if(sayi == 1) {  //1! = 1 olduğu için fonksiyon 1 ile çağırıldığında 1 geri dönderir
    return 1;
  }
  else return (sayi * faktoriyel(sayi - 1));    // 5! = 5.4! özlelliğinden özyineleme işlemi burada kullanıldı.
}
