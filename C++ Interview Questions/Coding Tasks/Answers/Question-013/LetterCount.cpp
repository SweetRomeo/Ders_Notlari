/*----------------------------------------
13-) Soru: LetterCount fonksiyonu bir yazı alıp
yazıda bulunan kelimelerden tekrar eden karakterden
 oluşan ilk yazıyı döndürecektir. Örneğin:
 Giriş: Hello world
 Çıktı: Hello
 Giriş: code you need
 Çıktı: need
 Giriş: decoder
 Giriş: decoder
---------------------------------------------*/
#include <iostream>
#include <string>

using namespace std;

bool hasRepeatingLetters(string str) {
    for (int i = 0; i < str.size(); ++i) {
        if (str.find(str[i]) != str.rfind(str[i]))
            return true;
    }
    return false;
}

string LetterCountI(const string& str) {

    string text;
    for (char c : str) {
        if (c != ' ') {
            text += c;
        }
        else {
            if (hasRepeatingLetters(text)) {
                return text;
            }
            text = "";
        }
    }

    return hasRepeatingLetters(text) ? text : "-1";
}


int main()
{
    string s1 = "Hello World";
    string s2 = "decoder";
    string s3 = "code you need";
    cout << LetterCountI(s1) << '\n';
    cout << LetterCountI(s2) << '\n';
    cout << LetterCountI(s3) << '\n';
    return 0;
}