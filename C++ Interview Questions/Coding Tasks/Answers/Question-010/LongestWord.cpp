/*--------------------------------------------------------
9-) OneDecremented fonksiyon bir yazı alacak ve sırasıyla gelen rakamlarda kaç adet rakamın bir önceki rakamın
1 azı olduğu hesaplayıp geri döndürecektir. Örneğin eğer giriş "5655984" olduğu durumda geri dönüş değeri
2 olacaktır. Çünkü 9 dan sonra 8 ve 6 dan sonra 5 gelmiştir.
--------------------------------------------------------*/
#include <string>
#include <iostream>
#include <sstream>
#include <cmath>

using namespace std;

string LongestWord(string sen) {
    string longestWord;
    string currentWord;
    int maxLength = 0;
    for (char c : sen) {
        if (isalnum(c)) {
            currentWord += c;
        }
        else { if (currentWord.size() > maxLength) {
            maxLength = currentWord.size(),
            longestWord = currentWord;
        }
            currentWord = "";
        }
    }
    if (currentWord.size() > maxLength) {
        longestWord = currentWord;
    }
    return longestWord;
}


int main()
{
    string s1 = "fun%|& time";
    string s2 = "5655984 123456";
    string s3 = "98765321";
    cout << LongestWord(s1) << '\n';
    cout << LongestWord(s2) << '\n';
    cout << LongestWord(s3) << '\n';
    return 0;
}