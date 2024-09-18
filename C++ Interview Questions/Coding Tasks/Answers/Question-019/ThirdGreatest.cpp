/*--------------------------------------------------------
19-) Third Greatest
Kendisine gönderilen string türünden elemanlardan oluşan bir
dizinin en büyük üçüncü elemanını geri döndüren thirdGreatest isimli fonksiyonu
yaınız ve test ediniz.
--------------------------------------------------------*/
#include <iostream>
#include <string>
#include <algorithm>
#define ASize(a)   sizeof(a) / sizeof(*a)

using namespace std;

string ThirdGreatest(string strArr[], int arrLength) {
  // code goes here
  auto f = [] (const string& s1,const string& s2) {return s1.length() > s2.length();};
  sort(strArr, strArr + arrLength, f);

  return strArr[2];
}


int main()
{
    string s1[] = {"hello","world","world"};
    string s2[] = {"hello", "world", "before", "all"};
    string s3[] = {"hello", "world", "after", "all"};
    cout << ThirdGreatest(s1, ASize(s1)) << '\n';
    cout << ThirdGreatest(s2, ASize(s2)) << '\n';
    cout << ThirdGreatest(s3, ASize(s3)) << '\n';
    return 0;
}