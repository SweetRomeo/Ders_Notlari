/*----------------------------------------
30-) GCF
Kendisine gönderilen iki elemanlı bir dizinin
elemanlarının en büyük ortak çarpanını geri döndüren
GCF fonksiyonunu yazınız ve test ediniz.
Giriş: {45, 12}
Çıktı: 3(en büyük ortak çarpanları 3)
---------------------------------------------*/
#include <iostream>

using namespace std;

int getGreatestCommonFactor(int a, int b) {
    int greatestFactor = 0;
    int factor = 1;
    int min = a > b ? b : a;
    while (factor <= min) {
        if (a % factor == 0 && b % factor == 0) {
            greatestFactor = factor;
        }
        factor++;
    }
    return greatestFactor;
}

int GCF(int arr[]) {
    return getGreatestCommonFactor(arr[0], arr[1]);
}

int main()
{
    int a[] {45, 12};
    int b[] {1, 6};
    int c[] {12, 36};
    int d[] {56, 78};
    cout << GCF(a) << '\n';
    cout << GCF(b) << '\n';
    cout << GCF(c) << '\n';
    cout << GCF(d) << '\n';
    return 0;
}