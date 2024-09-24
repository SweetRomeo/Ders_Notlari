/*--------------------------------------------------------
25-) ArrayAdditionI
Fonksiyon kendisine gönderilen dizinin en büyük elemanın
diğer herhangi eleman toplamıyla elde edilip edilemeyeceğini
inceleyecektir. Fonksiyon elde edilebilmesi durumunda
true edilememesi durumunda false döndürecektir.
--------------------------------------------------------*/
#include <iostream>
#include <algorithm>
#include <vector>
#define Asize(arr) sizeof(arr) / sizeof(arr[0])

using namespace std;

bool ArrayAdditionI(int arr[], int arrLength) {
    vector<int> iVec;
    int sum = 0;
    for (int i = 0; i < arrLength; ++i) {
        iVec.emplace_back(arr[i]);
        sum += iVec[i];
    }
    sort(iVec.begin(), iVec.end());
    int max = iVec[arrLength - 1];
    sum -= max;
    if (sum < max) {
        return false;
    }
    if (sum == max) {
        return true;
    }
    for (int i = 0; i < arrLength - 1; ++i) {
        if (sum - arr[i] == max) {
            return true;
        }
    }
    return false;
}

int main()
{
    int a[] {1,2,3,4};
    int b[] {5,7,16,1,2};
    int c[] {3,5,-1,8,12};
    cout << boolalpha << ArrayAdditionI(a, Asize(a)) << '\n';
    cout << ArrayAdditionI(b, Asize(b)) << '\n';
    cout << ArrayAdditionI(c,Asize(c)) << '\n';;
    return 0;
}