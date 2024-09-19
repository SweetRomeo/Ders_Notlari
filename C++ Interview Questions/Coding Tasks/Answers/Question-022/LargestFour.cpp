/*--------------------------------------------------------
22-) LargestFour
Kendisine gönderilen dizinin en büyük 4 elemanının
toplamını geri döndüren LargestFour isimli fonkisyonu yazınız ve
test ediniz.
--------------------------------------------------------*/
#include <iostream>
#include <vector>
#include <algorithm>

#define ASize(arr) sizeof(arr) / sizeof(*arr)

using namespace std;

int LargestFour(int arr[], int arrLength) {

    switch (arrLength) {
        case 1:
            return arr[0];
        case 2:
            return arr[0] + arr[1];
        case 3:
            return arr[0] + arr[1] + arr[2];
    }
    vector<int> iVec;
    for (int i = 0; i < arrLength; ++i) {
        iVec.emplace_back(arr[i]);
    }
    sort(iVec.begin(), iVec.end());
    int sum = 0;
    for (auto iter = iVec.end() - 4;iter != iVec.end(); ++iter) {
        sum += *iter;
    }
    return sum;
}


int main()
{
    int a[] {1 ,2 ,3 ,4};
    int b[] {4, 5, -2, 3, 1, 2, 6, 6};
    int c[] {1, 1, 1, -5};
    int d[] {0, 0, 2, 3, 7, 1};
    cout << LargestFour(a, ASize(a)) << '\n';
    cout << LargestFour(b, ASize(b)) << '\n';
    cout << LargestFour(c, ASize(c)) << '\n';
    cout << LargestFour(d, ASize(d)) << '\n';
    return 0;
}