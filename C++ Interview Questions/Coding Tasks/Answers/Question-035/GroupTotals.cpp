/*--------------------------------------------------------
35-) Group Totals
Kendisine gönderilen string türden koordinat elemanlarına sahip olan
toplam koordinat değeri 0 dan büyük olan elemanlar toplamını aralarında virgül olacak
şekilde geri döndüren GroupTotals isimli fonksiyonu yazınız
ve test ediniz. Aşağıdaki bunla ilgili örnek girişler verilmiştir:
Giriş: {"X:-1", "Y:1", "X:-4", "B:3", "X:5"}
Çıktı: B:3,Y:1
Giriş: {"P:6", "PI:1396", "PI:20", "P:-3"}
Çıktı: P:3,PI:1416
--------------------------------------------------------*/
#include <iostream>
#include <string>
#include <map>

using namespace std;

string GroupTotals(string strArr[], int arrLength) {
    map <string, int> coordinates;
    for (int i = 0; i < arrLength; ++i) {
        auto search = strArr[i].find(":");
        string key = strArr[i].substr(0, search);
        int val = stoi(strArr[i].substr(search + 1, strArr[i].size()));
        coordinates[key] += val;
    }
    string resultText;
    for (auto element : coordinates) {
        if (element.second != 0) {
            resultText += element.first + ":" + to_string(element.second) + ",";
        }
    }
    return string(resultText.begin(), resultText.end() - 1);
}

int main()
{
    string a[] {"X:-1", "Y:1", "X:-4", "B:3", "X:5"};
    string b[] {"Z:0", "A:-1"};
    string c[] {"B:-1", "A:1", "B:3", "A:5"};
    string d[] {"Z:-1", "Z:1", "Z:-4", "X:3", "A:5"};
    string e[] {"P:6", "PI:1396", "PI:20", "P:-3"};
    string f[] {"A:1", "B:1", "A:2", "B:3", "A:5"};
    string g[] {"1:1", "2:1", "2:1", "10:3", "10:7"};
    string h[] {"A:1", "B:-3", "C:123", "A:3", "C:-321", "B:5", "C:198"};
    string k[] {"P:1", "N:1", "Z:1", "P:0", "N:-2", "Z:-1"};
    string l[] {"M:-7", "D:-3", "Y:-5", "D:32", "Y:2022", "M:18"};
    cout << GroupTotals(a, size(a)) << '\n';
    cout << GroupTotals(b, size(b)) << '\n';
    cout << GroupTotals(c, size(c)) << '\n';
    cout << GroupTotals(d, size(d)) << '\n';
    cout << GroupTotals(e, size(e)) << '\n';
    cout << GroupTotals(f, size(f)) << '\n';
    cout << GroupTotals(g, size(g)) << '\n';
    cout << GroupTotals(h, size(h)) << '\n';
    cout << GroupTotals(k, size(k)) << '\n';
    cout << GroupTotals(l, size(l)) << '\n';
    return 0;
}