/*----------------------------------------
2-) Faktöriyel
Faktöriyel 1 sayısından başlayarak o sayıya kadar sayıların çarpımını ifade eden bir matematiksel gösterimdir.
a-) Buna göre kendisine gönderilen sayının faktöriyelini hesaplayıp geri döndüren CalculateFactorial isimli fonksiyonu yazınız ve test ediniz.
b-) e sayısı:
e = 1/0! + 1/1! + 1/2! + ......
seri toplamından elde edilen bir gerçek sayıdır. Buna göre e sayısını geri dönen getEulerNumber isimli fonksiyonu yazınız ve test ediniz.
---------------------------------------------*/
#include <iostream>

using namespace std;

int calculateFactorial(int num)
{
    return num <= 1 ? 1 : num * calculateFactorial(num - 1);
}

void calculateFactorialTest()
{
    for (int i = 0; i < 14; ++i) {
        cout << i << "! = " << calculateFactorial(i) << '\n';
    }
}

double getEulerNumber()
{
    double e = 0;
    for (int i = 0; i < 14; ++i) {
        e += (double) 1 / calculateFactorial(i);
    }
    return e;
}

int main()
{
    calculateFactorialTest();
    cout << "e : " << getEulerNumber() << '\n';
    return 0;
}