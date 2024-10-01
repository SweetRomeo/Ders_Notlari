/*--------------------------------------------------------
36-) Fibonacci Checker
Fibonacci serisi 1 1 2 3 5 8 13... şeklinde devam eden
bir seridir. FibonacciChecker fonksiyonu kendisine gönderilen
sayının bir fibonacci sayısına eşit olup olmadığını göre
yes veya no yazısını geri döndüren fonksiyonu yazınız ve test ediniz.
Giriş: 1
Çıktı: yes
Giriş: 5
Çıktı: yes
Giriş: 112
Çıktı: no
--------------------------------------------------------*/
#include <iostream>
#include <string>

using namespace std;

string FibonacciChecker(int num) {

    if (num == 1) {
        return "yes";
    }
    int elementFirst = 1;
    int elementSecond = 1;
    for (int i = 2; i < num; ++i) {
        int temp = elementFirst + elementSecond;
        if (temp == num) {
            return "yes";
        }
        elementFirst = elementSecond;
        elementSecond = temp;
    }
    return "no";
}

int main()
{
    cout << FibonacciChecker(1) << '\n';
    cout << FibonacciChecker(54) << '\n';
    cout << FibonacciChecker(5) << '\n';
    cout << FibonacciChecker(13) << '\n';
    cout << FibonacciChecker(112) << '\n';
    return 0;
}
