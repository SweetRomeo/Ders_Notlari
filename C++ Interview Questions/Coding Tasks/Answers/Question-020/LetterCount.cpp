/*--------------------------------------------------------
20-) Kendisine gönderilen cümledeki kelimelerden en çok tekrar
eden karaktere sahip olan yazıyı geri döndüren LetterCount
isimli fonksiyonu yazınız ve test ediniz. Program tekrar
eden karakter içermeyen durumlarda -1 döndürecektir.                          
 Giriş: Hello world
 Çıktı:
--------------------------------------------------------*/
#include <iostream>
#include <string>

using namespace std;

int GreatestRepeatingLettersCount(const string& str)
{
    int count = 0;
    int greatestCount = 0;
    for (int i = 0; i < str.size(); ++i) {
        for (int k = 0; k < str.size(); ++k) {
            if (str[i] == str[k]) {
                count++;
            }
        }
        if (count > greatestCount) {
            greatestCount = count;
        }
        count = 0;
    }
    return greatestCount;
}

string LetterCount(const string& str) {
    string tempText;
    string resultText;
    int count = 0;
    for (char c : str) {
        if (c != ' ') {
            tempText += c;
        }
        else { if (GreatestRepeatingLettersCount(tempText) > count) {
            resultText = tempText;
            count = GreatestRepeatingLettersCount(tempText);
        }
            tempText = "";
        }
    }

    if (GreatestRepeatingLettersCount(tempText) > count) {
        resultText = tempText;
        count = GreatestRepeatingLettersCount(tempText);
    }

    return count == 1 ?  "-1" : resultText;
}


int main()
{
    cout << LetterCount("No Words") << '\n';
    cout << LetterCount("Hello world") << '\n';
    cout << LetterCount("Hello apple pie") << '\n';
    cout << LetterCount("We do not belong here") << '\n';
    return 0;
}