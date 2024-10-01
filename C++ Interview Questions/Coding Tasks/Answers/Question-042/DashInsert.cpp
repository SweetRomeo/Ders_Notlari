/*--------------------------------------------------------
42-) Dash InsertII
Kendisine gönderilen long türden bir sayıda eğer ard arda
gelen rakamların ikisi de tek ise aralarına kısa çizgi('-')
karakterini, eğer ikisi de çift ise asteriks karakterini('*')
ekleyen DashInsertII isimli fonksiyonu yazınız ve test ediniz.
Fonksiyon sayılardan herhangi birinin 0 olması durumunda veya
birinin tek birinin çift olması durumunda aralarına herhangi bir karakter eklemiycektir.
Bazı örnek çıktılar aşağıdaki gibidir:
Giriş: 99946
Çıktı: 9-9-94*6
Giriş: 56647304
Çıktı: 56*6*47-304
--------------------------------------------------------*/
#include <iostream>
#include <iostream>
#include <string>

using namespace std;

bool isEven(int num)
{
    return num % 2 == 0;
}

string DashInsertII(long num) {

    if (num <= 10) {
        return to_string(num);
    }
    string resultText;
    while (num) {
        resultText += to_string(num % 10);
        if (isEven(num % 10) && isEven(num / 10 % 10) && num % 10 != 0 && num / 10 % 10 != 0) {
            resultText += "*";
        }
        else if (!isEven(num % 10) && !isEven(num / 10 % 10)) {
            resultText += "-";
        }
        num /= 10;
    }
    return string(resultText.rbegin(), resultText.rend());

}

int main()
{
    long a = 4546793;
    long b = 99946;
    long c = 56647304;
    long d = 667488958374553;
    cout << DashInsertII(a) << '\n';
    cout << DashInsertII(b) << '\n';
    cout << DashInsertII(c) << '\n';
    cout << DashInsertII(d) << '\n';
    return 0;
}