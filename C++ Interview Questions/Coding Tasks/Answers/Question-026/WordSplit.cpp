/*--------------------------------------------------------
25-) Word Split
Kendisine gönderilen iki yazıdan ikincinin içerisinde bulunan
yazıların kombinasyonundan ilk yazıyı elde edebiliyorsa
bu durumda o yazıları aralarında virgülle birlikte döndüren
WordSplit isimli fonksiyonu yazınız. Fonksiyon ilk yazının
elde edilememesi durumunda "not possiible" yazısını döndürecektir.
Bazı örnek girişler aşağıdaki gibidir:
Giriş : {"hellocat", "apple,bat,cat,goodbye,hello,yellow,why"}
Çıktı : base,ball
Giriş : {"abcgefd", "a,ab,abc,abcg,b,c,dog,e,efd,zzzz"}
Çıktı : abcg,efd
Giriş: {"hellocat", "apple,bat,cat,goodbye,hello,yellow,why"}
--------------------------------------------------------*/
#include <iostream>
#include <string>
#include <vector>

using namespace std;

string WordSplit(string strArr[]) {

    // code goes here
    string tempText;
    vector<string> iVec;
    for (char c : strArr[1]) {
        if (c != ',') {
            tempText += c;
        }
        else {
            iVec.emplace_back(tempText);
            tempText = "";
        }
    }
    iVec.emplace_back(tempText);
    for (int i = 0; i < iVec.size(); ++i) {
        for (int k = i + 1; k < iVec.size(); ++k) {
            if (iVec[i] + iVec[k] == strArr[0]) {
                return iVec[i] + "," + iVec[k];
            }
            if (iVec[k] + iVec[i] == strArr[0]) {
                return iVec[k] + "," + iVec[i];
            }
        }
    }
    return "not possible";
}


int main()
{
    string s1[] {"hellocat", "apple,bat,cat,goodbye,hello,yellow,why"};
    string s2[] {"baseball", "a,all,b,ball,bas,base,cat,code,d,e,quit,z"};
    string s3[] {"abcgefd", "a,ab,abc,abcg,b,c,dog,e,efd,zzzz"};
    cout << WordSplit(s1) << '\n';
    cout << WordSplit(s2) << '\n';
    cout << WordSplit(s3) << '\n';;
    return 0;
}