/*--------------------------------------------------------
18-)  Hamming Distance
Kendisine gönderilen iki yazıdan ilkinde olup ikincisinde olmayanlarının
sayısını geri döndüren HammingDistance isimli fonksiyonu yazınız
ve test ediniz. Karakterlerin diğer yazının sadece içinde bulunması
değil aynı konumda olması durumunda ancak toplam etkilenmecektir.
Örneğin:
Giriş: {"codec", "coder"}
Çıktı: 1(çünkü ikinci yazıda c'nin olduğu yerde r karakteri var.)
--------------------------------------------------------*/
#include <iostream>
#include <string>
using namespace std;

string HammingDistance(string strArr[]) {

    int hammingCount = 0;
    for (int i = 0; i < strArr[0].size(); ++i) {
        if (strArr[0][i] != strArr[1][i]) {
            hammingCount++;
        }
    }
    return to_string(hammingCount);
}


int main()
{
    string s1[] = {"codec", "coder"};
    string s2[] = {"10011", "10100"};
    string s3[] = {"helloworld", "worldhello"};
    cout << HammingDistance(s1) << '\n';
    cout << HammingDistance(s2) << '\n';
    cout << HammingDistance(s3) << '\n';
    return 0;
}