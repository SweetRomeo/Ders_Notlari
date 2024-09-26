/*--------------------------------------------------------
34-) String Merge
Kendisine gönderilen string türden yazının yıldız ile ayrılmış iki yazıya
bölüp elemanlarını sırayla ekleyerek birleştirip oluşan yazıyı
geri döndüren StringMerge isimli fonksiyonu yazınız ve test ediniz.
--------------------------------------------------------*/
#include <iostream>
#include <string>
using namespace std;

string StringMerge(string str) {

    // code goes here
    auto search = str.find("*");
    string firstText = str.substr(0, search);
    string secondText = str.substr(search + 1);
    string resultText;
    for (int i = 0; i < firstText.size(); ++i) {
        resultText += firstText[i];
        resultText += secondText[i];
    }
    return resultText;
}

int main()
{
    cout << StringMerge("abc1*kyoo") << '\n';
    cout << StringMerge("aaa*bbb") << '\n';
    cout << StringMerge("123hg*aaabb") << '\n';
    return 0;
}