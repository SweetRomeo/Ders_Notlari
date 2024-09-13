/*--------------------------------------------------------
11-) Her harfin ascii tablosunda bir değeri bulunmaktadır. Örneğin 65 sayı değeri aslında 'A' karakterinin Tablo değerini ifade etmektedir. Bu açıklamalara göre
kendisine gönderilen yazıyı ascii tablo değerine göre dönüştüren ASCIIConversion isimli fonksiyonu yazınız ve test ediniz.
Örneğin:
Giriş: dog
Çıkış: 100111103
Bunun nedeni d = 100, o = 111 ve g = 103 olmasından kaynaklanmaktadır.
--------------------------------------------------------*/
#include <string>
#include <iostream>

using namespace std;

string ASCIIConversion(string str) {

    // code goes here
    string resultText;
    for (int i = 0; i < str.size(); ++i) {
        if (str[i] != ' ') {
            int temp = str[i];
            resultText += to_string(temp);
        }
        else {
            resultText += str[i];
        }
    }
    return resultText;
}


int main()
{
    string s1 = "dog";
    string s2 = "Hello World";
    string s3 = "abc **";
    cout << ASCIIConversion(s1) << '\n';
    cout << ASCIIConversion(s2) << '\n';
    cout << ASCIIConversion(s3) << '\n';
    return 0;
}