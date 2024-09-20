/*--------------------------------------------------------
25-) CaesarCipher
Kendisine gönderilen yazıya ve sayıya göre yazının alfabetik
karakterlerini kendisine gönderilen sayı kadar alfabede ileri
götürüp o karakter ile değiştiren CaesarCipher isimli fonksiyonu
yazınız ve test ediniz.
Not: karakter alfabenin sonunu aştığı takdirde baştan başlayarak
gidilmektedir. Örneğin karakter z karakteri ve 2 adım kaydırma
yapılacaksa b karakteri elde edilecektir.

Not2: Karakter değiştirilken karakterin büyüklük küçüklüğü
değiştirilmeli ayrıca alfabetik olmayan karakterler değiştirilmeyecektir.
--------------------------------------------------------*/
#include <iostream>
#include <string>
#include <cctype>

using namespace std;

string CaesarCipher(string str, int num) {

    string alphabeth = "abcdefghijklmnopqrstuvwxyz";
    for (int i = 0; i < str.size(); ++i) {
        if(isalpha(str[i])) {
            auto search = alphabeth.find(tolower(str[i]));
            if (search + num + 1 > alphabeth.size()) {
                str[i] = islower(str[i]) ? alphabeth[search + num - 26] : toupper(alphabeth[search + num - 26]);
            }
            else {
                str[i] = islower(str[i]) ? alphabeth[search + num] : toupper(alphabeth[search + num]);
            }
        }
    }
    return str;

}


int main()
{
    cout << CaesarCipher("Caesar Cipher", 2) << '\n';
    cout << CaesarCipher("Hello", 4) << '\n';
    cout << CaesarCipher("Zehir", 2) << '\n';
    cout << CaesarCipher("World", 3) << '\n';
    cout << CaesarCipher("How", 20) << '\n';
    return 0;
}