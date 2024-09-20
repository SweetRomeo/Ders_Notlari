/*--------------------------------------------------------
24-) StarRating
Kendisine gönderilen yazı şeklinde yıldız reyting değerine
bağlı aşağıdaki yazıları döndüren StarRating isimli fonksiyonu
yazınız ve test ediniz.
- Reyting minimum 0.00 maksimum 5.00 şeklinde olacaktır.
- Reyting yazısı 5 ana bölümden oluşacak ve bu yazı tipi
boş olan yıldızlar için "empty", bir kısmı boş olan yıldızlar
içim "half" ve tamamı dolu olan yıldızlar için "full" yazısı
olarak ifade edilecektir.
- Bir yıldızın "half" olması için noktadan sonraki kısmının
0.1 den büyük ve 0.75 ten küçük olması gerekmektedir.
- 0.1'den küçük olan yıldızlar empty olarak sayılırken
0.75 ten büyük olan yıldızlar full sayılacaktır.
İşte bazı örnekler:
Giriş: "0.38"
Çıktı: half empty empty empty empty
Çıktı: "1.02"
Çıktı: full empty empty empty empty
Giriş: "4.5"
Çıktı: full full full full half
--------------------------------------------------------*/
#include <iostream>
#include <string>
#include <sstream>

using namespace std;

string StarRating(string str) {

    double num = stod(str);

    int full_stars = static_cast<int>(num); // number of full stars
    double remaining = num - full_stars; // remaing decimal value
    int half_star = (remaining > 0.1 && remaining < 0.75) ? 1 : 0 ;
    int count = 0;

    stringstream ss;

    for (int i = 0; i < full_stars; i++){
        ss << "full ";
        count++;
    }
    if (remaining >= 0.75){
        ss << "full ";
        count++;
    }
    if (half_star == 1){
        ss << "half ";
        count++;
    }

    for (int i = count; i < 5; i++){
        ss << "empty ";

    }

    return ss.str();
}


int main()
{
    cout << StarRating("1.02") << '\n';
    cout << StarRating("1.75") << '\n';
    cout << StarRating("0.00") << '\n';
    cout << StarRating("5.00") << '\n';
    cout << StarRating("1.02") << '\n';
    return 0;
}