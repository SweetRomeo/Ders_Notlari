/*--------------------------------------------------------
15-) Three Numbers isimli fonksiyon bir string parametre alarak
kendisine gönderilen yazının her bir cümlesinde eşsiz
karakterler arayacak. Eğer cümlelerin hepsinde en az 3 tane eşşiz karakter(sayı) bulunuyorsa
fonksiyon bu durumda true döndürecektir. Ancak 3'ün altında eşsiz
karakter bulunduğu takdirde veya 3 eşsiz karakter olmasına karşın
bu karakterlerin yan yana olması durumunda false geri döndürecektir.
İşte bazı örnekler:
Giriş: "2hell6o3 wor6l7d2"
Çıktı: true(tüm cümlelerdeki eşsiz rakam karakterleri 3 ten fazla)
Giriş: "hell268o w6or2l4d"
Çıktı: false(her kelimede en az 3 eşsiz rakam var ancak bunların hepsi peş peşe)
--------------------------------------------------------*/
#include <iostream>
#include <string>
#include <cctype>
using namespace std;

bool hasThreeUniqueIntegers(string str) {
    int count = 0;
    for (char c : str) {
        if (isdigit(c)) {
            if (str.find(c) == str.rfind(c)) {
                count++;
            }
        }
    }
    return count >= 3;
}

bool isAdjacent(string str) {
    for (int i = 0; i < str.size() - 2; ++i) {
        if (isdigit(str[i]) && isdigit(str[i + 1]) && isdigit(str[i + 2])) {
            return true;
        }
    }
    return false;
}

string ThreeNumbers(string str) {

    string tempText;
    for (char c : str) {
        if (c != ' ') {
            tempText += c;
        }
        else { if (!hasThreeUniqueIntegers(tempText) || isAdjacent(str)) {
            return "false";
        }
            tempText = "";
        }
    }
    return hasThreeUniqueIntegers(tempText) && !isAdjacent(str) ? "true" : "false";
}

int main()
{
    string s1 = "2hell6o3 wor6l7d2";
    string s2 = "hell268o w6or2l4d";
    string s3 = "2a3b5 w1o2rl3d g1gg92";
    string s4 = "21aa3a ggg4g4g6ggg";
    cout << ThreeNumbers(s1) << '\n';
    cout << ThreeNumbers(s2) << '\n';
    cout << ThreeNumbers(s3) << '\n';
    cout << ThreeNumbers(s4) << '\n';
    return 0;
}