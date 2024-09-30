/*----------------------------------------
39-) Number Search
NumberSearch(str) fonksiyonunu yazın. Bu fonksiyon, str
 parametresindeki tüm sayıları bulmalı, bunları toplayıp
 ardından bu toplamı, metindeki harflerin sayısına bölerek
 sonucu döndürmelidir. Örneğin: eğer str "Hello6 9World 2, Nic8e D7ay!"
 ise, çıktı 2 olmalıdır. İlk olarak tüm sayıları topladığımızda,
 6 + 9 + 2 + 8 + 7 = 32 elde ederiz. Ardından metinde 17 harf vardır.
 32 / 17 = 1.882 sonucunu elde ederiz ve bu sonuç en yakın tam sayıya
 yuvarlandığında cevap 2 olur. Metin boyunca yalnızca boşluklarla ayrılmış
tek haneli sayılar kullanılacaktır (Bu nedenle hello44444 world gibi bir durum olmayacaktır).
Her string'de en az bir harf bulunacaktır.
Giriş: "Hello6 9World 2, Nic8e D7ay!"
Çıktı: 2
---------------------------------------------*/
#include <iostream>
#include <string>
#include <cctype>
#include <cmath>

using namespace std;

double NumberSearch(string str) {
    int alphaCount = 0;
    int digitSum = 0;
    for (char c : str) {
        if (isdigit(c)) {
            digitSum += c - '0';
        }
        else if (isalpha(c)) {
            alphaCount++;
        }
    }

    return round(static_cast<double>(digitSum) / alphaCount);
}

int main() {
    // Test case 1
    string test1 = "Hello6 9World 2, Nic8e D7ay!";
    cout << "Test 1 result: " << NumberSearch(test1) << endl; // Expected output: 2

    // Test case 2
    string test2 = "A1 B2 C3 D4 E5";
    cout << "Test 2 result: " << NumberSearch(test2) << endl; // Expected output: 2

    // Test case 3
    string test3 = "Test100 No1 Yes2";
    cout << "Test 3 result: " << NumberSearch(test3) << endl; // Expected output: 0 (There are no valid single digit numbers)

    // Test case 4
    string test4 = "X9Y9Z9";
    cout << "Test 4 result: " << NumberSearch(test4) << endl; // Expected output: 5

    // Test case 5
    string test5 = "No numbers here!";
    cout << "Test 5 result: " << NumberSearch(test5) << endl; // Expected output: 0 (No digits to sum)

    return 0;
}