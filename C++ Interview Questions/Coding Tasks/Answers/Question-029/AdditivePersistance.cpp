/*----------------------------------------
29-) AdditivePersistence
Kendisine gönderilen int türden bir sayının
rakamları toplamını sayı tek basamaklı hale gelene
kadar hesaplayıp, bu işlemin kaç adımda yapıldığını
geri döndüren AdditivePersistence isimli fonksiyonu
yazınız ve test ediniz.
Giriş: 2718
Çıktı: 2(2 + 7 + 1 + 8 = 18 => 1 + 8 = 9
bu operasyon iki adımda gerçekleştiği için 2)
---------------------------------------------*/
#include <iostream>

using namespace std;

int getDigitsSum(int val)
{
  int sum = 0;
  while (val) {
    sum += val % 10;
    val /= 10;
  }
  return sum;
}

int AdditivePersistence(int num) {
  int count = 0;
  while (num / 10 != 0) {
    num = getDigitsSum(num);
    count++;
  }
  return count;
}

int main()
{
    cout << AdditivePersistence(2718) << '\n';
    cout << AdditivePersistence(4) << '\n';
    cout << AdditivePersistence(19) << '\n';
    cout << AdditivePersistence(56) << '\n';
    return 0;
}