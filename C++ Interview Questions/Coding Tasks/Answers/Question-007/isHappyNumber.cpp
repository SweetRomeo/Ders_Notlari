/*--------------------------------------------------------
7-) Açıklama : Mutlu sayılar basamaklarının sayı değerlerinin kareleri toplamı 1'e eşit olan sayılar. Ancak bu toplamın 10 veya 10'dan büyük olması durumunda
o toplam için yeni bir toplam değeri elde edilir. Elde edilen toplam değeri tek basamaklı oluncaya kadar bu durum devam eder. Eğer tek basamaklı kaldığında elde edilen sayı
1 ise bu durumda ancak buna mutlu sayı denilebilir.

Yukarıdaki açıklamaya göre bir sayının mutlu sayı olup olmadığını geri döndüren isHappyNumber isimli fonksiyonu yazınız ve test ediniz.
Örneğin burada 5552, 2555 gibi sayılara için fonksiyon true değer dönecektir.
--------------------------------------------------------*/
#include <string>
#include <iostream>
#include <sstream>
#include <cmath>

using namespace std;

bool isHappyNumber(int num) {
    int result = 0;
    while (num) {
        result += static_cast<int>(pow(num % 10, 2));
        num /= 10;
    }
    if (result == 1) {
        return true;
    }
    if (result < 10) {
        return false;
    }
    return isHappyNumber(result);
}


int main()
{
    int x = 10;
    int y = 2555;
    int z = 5552;
    int k = 1;
    int l = 12;
    cout << boolalpha << isHappyNumber(x) << '\n';
    cout << isHappyNumber(y) << '\n' << isHappyNumber(z) << '\n';
    cout << isHappyNumber(k) << '\n' << isHappyNumber(l) << '\n';
    return 0;
}