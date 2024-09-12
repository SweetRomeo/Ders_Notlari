/*----------------------------------------
3-) Letter Changes
Bu program fonksiyon:
- Bir yazı parametresi alacak ve karakterler alfabetik karakterler ise onları değiştirecek.
- Harf karakterleri değiştirilirken ingilizce alfabeye göre bir sonraki karakteri alacaktır.(Eğer alfabenin son karakteri ise bu durumda başa dönüşüm ilk karakter olarak alınacaktır.
Örneğin karakter z ise a, b ise c olacaktır.)
- Harfler değiştirilirken son durumda elde edilen harfler "a", "e", "i", "o", "u" karakterlerinden herhangi biriyse bu durumda bu karakterler büyütülecektir. (Örneğin "a" karakteri "A" olacaktır.)

koşulları sağlayan LetterChanges isimli fonksiyonu yazınız ve test ediniz.
---------------------------------------------*/
#include <iostream>
#include <string>
#include <cctype>

using namespace std;

string LetterChanges(string str) {

    for (int i = 0; i < str.size(); ++i) {
        if (isalpha(str[i])) {
            str[i] = str[i] == 'z' ? 'a' : str[i] + 1;
            switch(str[i]) {
                case 'a':
                case 'e':
                case 'i':
                case 'o':
                case 'u':
                    str[i] = toupper(str[i]);
            }
        }
    }
    return str;

}


int main()
{
    string str;
    cout << "Enter Text : \n";
    cin >> str;
    cout << LetterChanges(str) << '\n';
    return 0;
}