/*--------------------------------------------------------
15-) Other products
Bu fonksiyon kendisine gönderilen dizinin tüm elemanlarının
çarpımını elde edip sırasıyla tüm elemanlarına bölümünü
bulup elde edilen sonuçların arasına "-" ekleyip bu yazıyı
geri döndürecek. Aşağıda bununla ilgili bazı örnekler verilmiştir:
Giriş: [1, 2, 3, 4, 5]
Çıktı: 120-60-40-30-24

Giriş: {3,1,2,6}
Çıktı: 12-36-18-6

Giriş: {1,4,3}
Çıktı: 12-3-4
--------------------------------------------------------*/
#include <iostream>
#include <string>
using namespace std;

string OtherProducts(int arr[], int arrLength) {

    // code goes here
    int allElementsMulti = 1;
    for (int i = 0; i < arrLength; ++i) {
        allElementsMulti *= arr[i];
    }
    string resultText;
    for (int i = 0; i < arrLength; ++i) {
        resultText += to_string(allElementsMulti / arr[i]);
        resultText += "-";
    }
    return resultText.substr(0,resultText.size() - 1);
}

int main()
{
    int a[] {1, 2, 3, 4, 5};
    int b[] {3, 1, 2, 6};
    int c[] {1, 4, 3};
    cout << OtherProducts(a, std::size(a)) << '\n';
    cout << OtherProducts(b, std::size(b)) << '\n';
    cout << OtherProducts(c, std::size(c)) << '\n';
    return 0;
}