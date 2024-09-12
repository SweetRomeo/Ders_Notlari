/*----------------------------------------
5-) MeanMode
MeanMode isimli fonksiyon kendisine gönderilen dizinin
moduyla ortalamasının eşit olup olmadığı kontrol
edicek. Eğer eşit ise bu durumda 1 eşit değilse
 0 değişkenini döndürecektir.
---------------------------------------------*/
#include <iostream>

using namespace std;

int getMode(const int* arr, int size)
{
    int count = 0;
    int modeCount = 0;
    int mode = 0;
    for (int i = 0; i < size; ++i) {
        for (int k = i + 1; k < size; ++k) {
            if (arr[i] == arr[k]) {
                count++;
            }
        }
        if (count > modeCount) {
           modeCount = count;
           mode = arr[i];
        }
        count = 0;
    }
    return mode;
}

int getMean(const int* arr, int size)
{
    int sum = 0;
    for (int i = 0; i < size; ++i) {
        sum += arr[i];
    }
    return sum / size;
}

int MeanMode(int arr[], int arrLength) {

    return getMode(arr, arrLength) == getMean(arr, arrLength) ? 1 : 0;
}

int main()
{
    int arr[] = {1,2,3,4,4,5,5,6,6,6,7,7,7};
    cout << MeanMode(arr, sizeof(arr) / sizeof(arr[0]));
    return 0;
}