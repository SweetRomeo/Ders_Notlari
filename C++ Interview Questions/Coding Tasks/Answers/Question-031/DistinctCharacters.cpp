/*--------------------------------------------------------
30-) DistinctCharacters
Kendisine gönderilen string türünden bir yazının içerisinde
eşsiz karakter sayısını bulup, eğer eşsiz karakter sayısı
en az 10 ise true yazısını eğer 10'dan küçük ise false yazısını
geri döndüren DistinctCharacters isimli fonksiyonu yazınız ve test
ediniz.
Giriş: 12334bbmma:=6
Çıktı: true(10 adet eşsiz karakter var.)
Giriş: eeeemmmmmmmmm1000
Çıktı: false(10'dan az eşsiz karakter var.)
Giriş: abc123kkmmmm?
Çıktı: false(10'dan az eşsiz karakter var.)
--------------------------------------------------------*/
#include <iostream>
#include <string>

using namespace std;

string DistinctCharacters(string str) {

    // code goes here
    string distinctText;
    for (int i = 0; i < str.size(); ++i) {
        if (auto search = distinctText.find(str[i]); search == string::npos) {
            distinctText += str[i];
        }
    }
    return distinctText.size() >= 10 ? "true" : "false";
}

int main()
{
    cout << DistinctCharacters("abc123kkmmmm?") << '\n';
    cout << DistinctCharacters("12334bbmma:=6") << '\n';
    cout << DistinctCharacters("eeeemmmmmmmmm1000") << '\n';
    cout << DistinctCharacters("abcdlkm158779") << '\n';
    return 0;
}