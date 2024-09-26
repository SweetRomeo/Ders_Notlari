/*--------------------------------------------------------
32-) Closest Enemy
Kendisine gönderilen int türünden aşağıdaki
açıklamaya göre bir int türünden değer döndürecektir:
- Dizi yaşmızca 0,1 ve 2 rakamlarından oluşacaktır.
- Dizi içerisinde 1 tek bir tane olucak ve kişinin konumunu
belirtecek.
- Dizi içerisindeki 0 lar boşluk anlamına gelmektedir.
- Dizi içerisindeki 2 ler ise düşmanı belirtmektedir.
Buna göre fonksiyon 1 sayısına en yakın olan 2 rakamına
olan uzaklığı geri döndürecektir. Fonksiyon 2 hiç olmaması
durumunda 0 döndürecektir. Örneğin:
Giriş: {0, 1, 0}
Çıktı: 0
Giriş: {0, 0, 1, 0, 0, 2, 0, 2}
Çıktı: 3
Giriş: {1, 0, 0, 0, 2, 2, 0, 0}
Çıktı: 4
--------------------------------------------------------*/
#include <iostream>
#include <string>
using namespace std;

int ClosestEnemy(int arr[], int arrLength) {

    int locIdx = 0;
    bool flag = false;
    for (int i = 0; i < arrLength; ++i) {
        if (arr[i] == 1) {
            locIdx = i;
        }
        if (arr[i] == 2) {
            flag = true;
        }
    }
    if (!flag) {
        return 0;
    }
    int spaces = 1;
    while (true) {
        if (locIdx - spaces >= 0) {
            if (arr[locIdx - spaces] == 2) {
                return spaces;
            }
        }
        if (locIdx + spaces < arrLength) {
            if (arr[locIdx + spaces] == 2) {
                return spaces;
            }
        }
        spaces++;
    }
}

int main()
{
    int a[] {0, 1, 0};
    int b[] {0, 0, 1, 0, 0, 2, 0, 2};
    int c[] {1, 0, 0, 0, 2, 2, 0, 0};
    int d[] {0, 0, 0, 2, 2, 2, 1, 0};
    cout << ClosestEnemy(a, size(a)) << '\n';
    cout << ClosestEnemy(b, size(b)) << '\n';
    cout << ClosestEnemy(c, size(c)) << '\n';
    cout << ClosestEnemy(d, size(d)) << '\n';
    return 0;
}