/*--------------------------------------------------------
38-) Rectangle Area
Kendisine gönderilen 4 adet koordinatı verilen dörtgenin alanını
hesaplayan rectangeArea isimli fonksiyonu yazınız ve test ediniz.
Giriş: ["(0 0)", "(3 0)", "(0 2)", "(3 2)"]
Çıktı: 6
--------------------------------------------------------*/
#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int RectangleArea(string strArr[], int arrLength) {
    int result{};

    int coord[4][2];
    int width{}, length{};
    for(int i = 0; i < arrLength; i++){
        coord[i][0] = std::stoi(strArr[i].substr(1,strArr[i].find(' ')));
        coord[i][1] = std::stoi(strArr[i].substr(strArr[i].find(' ')+1,strArr[i].find(')')-strArr[i].find(' ')-1));

        if(i >= 1){
            width = abs(coord[i][0] - coord[0][0]) > width ? abs(coord[i][0] - coord[0][0]) : width;
            length = abs(coord[i][1] - coord[0][1]) > length ? abs(coord[i][1] - coord[0][1]) : length;
        }
    }
    result = width * length;
    return result;
}

int main()
{
    string coordinateFirst[] = {"(0 0)", "(3 0)", "(0 2)", "(3 2)"};
    string coordinateSecond[] = {"(-1 -1)","(0 0)","(-1 0)","(0 -1)"};
    string coordinateThird[] = {"(-2 -2)","(0 0)","(-2 0)","(0 -2)"};
    string coordinateFourth[] = {"(3 3)","(0 0)","(3 0)","(0 3)"};
    string coordinateFifth[] = {"(0 0)","(8 8)","(0 8)","(8 0)"};
    string coordinateSixth[] = {"(0 0)","(5 0)","(0 3)","(5 3)"};
    string coordinateSeventh[] = {"(1 1)","(4 4)","(1 4)","(4 1)"};
    cout << RectangleArea(coordinateFirst, size(coordinateFirst)) << '\n';
    cout << RectangleArea(coordinateSecond, size(coordinateSecond)) << '\n';
    cout << RectangleArea(coordinateThird, size(coordinateThird)) << '\n';
    cout << RectangleArea(coordinateFourth, size(coordinateFourth)) << '\n';
    cout << RectangleArea(coordinateFifth, size((coordinateFifth))) << '\n';
    cout << RectangleArea(coordinateSixth,  size(coordinateSixth)) << '\n';
    cout << RectangleArea(coordinateSeventh, size(coordinateSeventh)) << '\n';
    return 0;
}
