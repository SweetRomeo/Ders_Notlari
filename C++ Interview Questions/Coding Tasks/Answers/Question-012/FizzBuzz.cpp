/*--------------------------------------------------------
12-) Kendine gönderilen sayıya 1 den başlarak ardışık şekilde yazdıran fonksiyonu yazınız.
    - Fonksiyonda 3 ile kalansız bölünebilen sayılar yerine Fizz
    - 5 ile kalansız bölünebilen sayıların yerine Buzz
    - Hem 5 hem de 3 ile kalansız bölünebilen sayıların yerine de FizzBuzz basılacaktır.
Örneğin klavyeden 16 girildiğinde ekran çıktısı aşağıdaki gibi olacaktır.
Girdi : 16
Çıktı : 1 2 Fizz 4 Buzz Fizz 7 8 Fizz Buzz 11 Fizz 13 14 FizzBuzz 16
--------------------------------------------------------*/
#include <string>
#include <iostream>

using namespace std;

void FizzBuzz(int num) {

    for (int i = 1; i <= num; ++i) {
        if (i % 3 == 0 && i % 5 == 0) {
            cout << "FizzBuzz ";
        }
        else if (i % 5 == 0) {
            cout << "Buzz ";
        }
        else if (i % 3 == 0){
            cout << "Fizz ";
        }
        else {
            cout << i << ' ';
        }
    }
}


int main()
{
    FizzBuzz(16);
    cout << '\n';
    FizzBuzz(21);
    cout << '\n';
    FizzBuzz(3);
    return 0;
}