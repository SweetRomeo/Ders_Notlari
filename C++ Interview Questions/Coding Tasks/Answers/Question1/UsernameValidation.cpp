/*----------------------------------------
1-) Kullanıcı Adı doğrulaması
Kendisine gönderilen kullanıcı adı yazısı için aşağıdaki koşullar sağlanacaktır:

1- Kullanıcı adı minimum 4 maksimum 25 karakterden oluşabilir.
2- Kullanıcı adı harf ile başlamalıdır.
3- Kullanıcı adı harf, sayı veya underscore(alttire(_))  karakteri içerebilir. Ancak başka karakter içeremez.
4- Kullanıcı adı underscore karakteri ile bitemez.

Fonksiyon kullanııcı adının geçerli olması durumunda "true" yazısı olmaması durumunda "false" yazısını döndürecektir.
Bu koşulların tamamını sağlayan UsernameValidation isimli fonksiyonu yazınız ve test ediniz.
---------------------------------------------*/
#include <iostream>
#include <string>
#include <cctype>
using namespace std;

string CodelandUsernameValidation(string str) {

    // code goes here
    if(!isalpha(str[0]) || str.length() > 25 || str.length() < 4 || str[str.length() - 1] == '_') {
        return "false";
    }

    for (char ch : str) {
        if(!isalnum(ch) && ch != '_') {
            return "false";
        }
    }
    return "true";
}

int main()
{
    string s1 = "_ba123mal";
    string s2 = "193|302";
    string s3 = "32823823_";
    string s4 = "a12321_52b";
    cout << CodelandUsernameValidation(s1) << '\n';
    cout << CodelandUsernameValidation(s2) << '\n';
    cout << CodelandUsernameValidation(s3) << '\n';
    cout << CodelandUsernameValidation(s4) << '\n';
    return 0;
}