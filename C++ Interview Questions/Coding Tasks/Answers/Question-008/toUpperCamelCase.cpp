/*--------------------------------------------------------
UpperCamelCase standardı pek çok pek firmada fonksiyon isimlendirmelerinde kullanılan bir yöntemdir.
Yukarıdaki açıklamaya göre kendisine gönderilen ve alfabetik karakterler hariç(boşluk karakteri(" "), alttire karakteri("_") veya özel karakterler) karakterlerle ayrılmış
yazılardan bir UpperCamelCase yazısı geri döndüren toUpperCamelCase isimli fonksiyonu yazınız ve test ediniz. İşte bazı örnekler:
Giriş: "cats AND*Dogs-are Awesome"
Çıkış: CatsAndDogsAreAwesome

Giriş: "a b c d-e-f%g"
Çıkış: ABCDEFG
--------------------------------------------------------*/
#include <string>
#include <iostream>
#include <sstream>
#include <cmath>

using namespace std;

string toUpperCamelCase(const string& str) {
  string resultText;
  string tempText;
  bool upperFlag = true;
  for (char c : str) {
    if (isalpha(c) && c != ' ') {
      tempText += upperFlag ? toupper(c) : tolower(c);
      upperFlag = false;
    }
    else {
      resultText += tempText;
      tempText = "";
      upperFlag = true;
    }
  }

  return resultText + tempText;

}

int main()
{
    string s1 = "cats AND*Dogs-are Awesome";
    cout << boolalpha << toUpperCamelCase(s1) << '\n';
    string s2 = "a b c d-e-f%g";
    cout << toUpperCamelCase(s2) << '\n';
    return 0;
}