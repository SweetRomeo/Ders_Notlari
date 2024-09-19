/*--------------------------------------------------------
23-) Bitwise Two
Kendisine gönderilen iki yazıya sahip olan dizilerin
elemanlarının birer birer bitsel ve işlemine sokarak
sonucu döndüren Bitwisetwo isimli fonksiyonu yazınız
ve test ediniz.
--------------------------------------------------------*/
#include <iostream>
#include <string>
using namespace std;

string BitwiseTwo(string strArr[]) {

    // code goes here
    string result;
    for (int i = strArr[0].size() - 1;0 <= i; --i) {
        string s1;
        string s2;
        s1 += strArr[0][i];
        s2 += strArr[1][i];
        result += to_string(atoi(s1.c_str()) && atoi(s2.c_str()));
    }
    return string(result.rbegin(), result.rend());
}


int main()
{
    string a[] {"10111", "01101"};
    string b[] {"100", "000"};
    string c[] {"10111", "01101"};
    cout << BitwiseTwo(a) << '\n';
    cout << BitwiseTwo(b) << '\n';
    cout << BitwiseTwo(c) << '\n';
    return 0;
}