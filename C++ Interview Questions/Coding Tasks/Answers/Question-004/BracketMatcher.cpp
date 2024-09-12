/*----------------------------------------
4-) Soru: BracketMatcher fonksiyonu parametre olarak string alan,
aç ve kapa parantez sayıları birbirine eşit olduğunda "1" yazısını
döndürürken, aç ve kapa parantezler birbirine eşit olmadığı durumda
 ise "0" yazısını döndürecektir.
 İstisna durumlar: eğer yazıda hiçbir parantez bulunmuyorsa bu durumda
 gene "1" yazısı döndürülecektir.
 Bazı örnek girişler:
 Giriş: (hello (world))
 Çıktı: 1
 çünkü burada aç ve kapa parantezler birbirine eşittir.
---------------------------------------------*/
#include <iostream>
#include <string>

using namespace std;

string BracketMatcher(const string& str) {

    int count = 0;
    for (char c : str) {
        if (c == '(') {
            count++;
        }
        else if(c == ')') {
            count--;
        }
        if(count < 0) {
            return "0";
        }
    }

    return count ? "0" : "1";

}

int main()
{
    string s1 = "((hello (world))";
    cout << BracketMatcher(s1) << '\n';
    string s2 = "hello world";
    cout << BracketMatcher(s2) << '\n';
    return 0;
}