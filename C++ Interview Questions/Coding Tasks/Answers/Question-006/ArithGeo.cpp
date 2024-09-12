/*----------------------------------------
6-) Soru: Dizinin elemanları eğer belirli bir ilişkiye göre artıyorsa bu artış iki farklı şekilde gerçekleşebilir.
Geometrik olarak veya Aritmetik olarak. Eğer artık geometrik bir şekilde gerçekleşiyorsa bu durumda elemanların kendisinden
bir önce gelen elemanlara oranı her zaman sabittir. Ancak söz konusu olan aritmetik artış ise bu durumda elemanların kendisinden
önce gelen elemanlara olan farkları sabittir. Örneğin: [2, 4, 6, 8] dizisi bir aritmetik artış gösterirken (4 - 2 = 6 - 4 olduğu için) [2, 6, 18, 54] dizisi
geometrik artış gösterir(6 / 2 = 18 / 6 olduğu için).
Yukarıdaki açıklamalara göre kendisine gönderilen dizi Aritmetikse string olarak "Arithmetic", geometrik ise string olarak "Geometric", eğer bunların
ikisi de söz konusu değilse bu durumda -1 yazısını geri dönen ArithGeo isimli fonksiyonu yazınız ve test ediniz.
---------------------------------------------*/
#include <iostream>
#define aSize(arr) sizeof(arr) / sizeof(arr[0])

using namespace std;

string ArithGeo(const int arr[], int arrLength) {

    bool arithmeticFlag = true;
    bool geometricFlag = true;

    for (int i = 0; i < arrLength - 2; ++i) {
        if(arr[i + 1] - arr[i] != arr[i + 2] - arr[i + 1]){
            arithmeticFlag = false;
            break;
        }
    }
    if (arithmeticFlag)
        return "Arithmetic";
    for (int i = 0; i < arrLength - 2; ++i) {
        if(arr[i + 1] / arr[i] != arr[i + 2] / arr[i + 1]){
            geometricFlag = false;
            break;
        }
    }
    if (geometricFlag)
        return "Geometric";

    return "-1";
}



int main()
{
    int arr1[] =  {2, 4, 6, 8};
    int arr2[] =  {2, 6, 18, 54};
    int arr3[] =  {1, 2, 6, 8};
    cout << ArithGeo(arr1, aSize(arr1)) << '\n';
    cout << ArithGeo(arr2, aSize(arr2)) << '\n';
    cout << ArithGeo(arr3, aSize(arr3)) << '\n';
    return 0;
}