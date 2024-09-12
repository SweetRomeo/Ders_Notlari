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

int OneDecremented(string str) {

    // code goes here

    int count = 0;
    for (int k = 0; k < str.size() - 1; ++k) {
        if (str[k] - '0' - 1 == str[k + 1] - '0') {
            count++;
        }
    }
    return count;
}


int main()
{
    string x = "56";
    string y = "5655984";
    string z = "98765321";
    cout << OneDecremented(x) << '\n';
    cout << OneDecremented(y) << '\n';
    cout << OneDecremented(z) << '\n';
    return 0;
}