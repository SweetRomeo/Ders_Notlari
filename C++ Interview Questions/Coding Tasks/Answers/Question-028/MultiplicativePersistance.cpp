/*--------------------------------------------------------
28-) MultiplicativePersistence
Kendisine gönderilen int türünden bir sayının basamaklarının
çarpımlarını tek basamaklı olana kadar hesaplayıp tek
basamaklı hale kaç adımda geldiğini geri döndüren MultiplicativePersistence
isimli fonksiyonu yazınız ve test ediniz.
Giriş: 39
Çıktı: 3(3 * 9 = 27 => 2 * 7 = 14 => 1 * 4 = 0)
3 aşamada 4(tek basamaklı sayı) elde edildi.
Giriş: 25
Çıktı: 2(2 * 5 = 10 => 1 * 0 = 0)
--------------------------------------------------------*/
#include <iostream>

using namespace std;

int calculateDigitMultiplication(int val) {
    int result = 1;
    while (val) {
        result *= val % 10;
        val /= 10;
    }
    return result;
}

int MultiplicativePersistence(int num) {
    int result;
    int count = 0;
    while (num / 10 != 0) {
        result = calculateDigitMultiplication(num);
        num = result;
        count++;
    }
    return count;
}

int main()
{
    cout << MultiplicativePersistence(39) << '\n';
    cout << MultiplicativePersistence(25) << '\n';
    cout << MultiplicativePersistence(679) << '\n';
    cout << MultiplicativePersistence(6788) << '\n';
    cout << MultiplicativePersistence(68889) << '\n';
    cout << MultiplicativePersistence(2677889) << '\n';
    return 0;
}