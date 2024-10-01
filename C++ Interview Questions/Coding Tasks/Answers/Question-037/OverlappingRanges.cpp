/*--------------------------------------------------------
37-) Overlapping Ranges
Kendisine gönderilen 5 elemanlı bir dizinin ilk iki elemanındaki
range ile 3. ve 4. elemanları arasındaki range değerlerinden
ortak olanlarını alıp bunun son elemana en azından eşit olması
durumunda true döndürecektir. Örneğin dizi [4, 10, 2, 6, 3]
şeklinde olsun burada 4-10 aralığında: 4,5,6,7,8,9 ve 10
saıyları bulunmaktadır. diğer taraftan 2-6 aralığında ise
2,3,4,5 ve 6 sayıları bulunmaktadır. Bu iki aralığın ortak
elemanlarının sayısı en fazla son eleman kadar olması gerekmektedir.
Burada bu eleman sayısı 4,5 ve 6 olmak üzere 3 adettir. Bu da son elemana
eşit olduğundan sonuç true olarak döner. Aşağı buna benzer 2 örnek daha verilmiştir:
Giriş: {5,11,1,5,1}
Çıktı: true
Giriş: {1,8,2,4,4}
Çıktı: false
--------------------------------------------------------*/
#include <iostream>
#include <string>
#include <algorithm>
#include <vector>

using namespace std;

string OverlappingRanges(int arr[], int arrLength) {
    int overlap = arr[arrLength - 1];
    int ranges[4] {arr[0], arr[1], arr[2], arr[3]};
    sort(ranges, ranges + (arrLength - 1));
    return ((ranges[2] - ranges[1]) + 1>= overlap) ? "true" : "false";
}

string OverlappingRanges(int arr[]) {

    vector <int> rangeFirst;
    vector <int> rangeSecond;
    for (int i = arr[0]; i <= arr[1]; ++i) {
        rangeFirst.emplace_back(i);
    }
    for (int i = arr[2]; i <= arr[3]; ++i) {
        rangeSecond.emplace_back(i);
    }
    vector <int> overlappingRanges;
    for (int range : rangeFirst) {
        if (find(rangeSecond.begin(), rangeSecond.end(), range) != rangeSecond.end()) {
            overlappingRanges.emplace_back(range);
        }
    }
    return overlappingRanges.size() >= arr[4] ? "true" : "false";
}

int main()
{
    int a[] {5,11,1,5,1};
    int b[] {1,8,2,4,4};
    cout << OverlappingRanges(a, size(a)) << '\n';
    cout << OverlappingRanges(b, size(b)) << '\n';
    return 0;
}
