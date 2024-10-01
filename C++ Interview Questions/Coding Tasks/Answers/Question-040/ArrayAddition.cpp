/*--------------------------------------------------------
40-) Array Addition
Dizideki herhangi bir sayı kombinasyonu (en büyük sayı hariç)
dizideki en büyük sayıya eşit olacak şekilde toplanabiliyorsa,
ArrayAddition(arr) işlevinin arrr'da saklanan sayı dizisini
almasını ve dizeyi true döndürmesini sağlayın. aksi takdirde
diziyi false döndürür. Örneğin: eğer arr [4, 6, 23, 10, 1, 3]
içeriyorsa çıktı true döndürmelidir çünkü 4 + 6 + 10 + 3 = 23.
Dizi boş olmayacak, aynı öğelerin tümünü içermeyecek ve negatif sayılar içerebilir.
Örneğin:
Giriş: {5,7,16,1,2}
Çıktı: false
Giriş: {3,5,-1,8,12}
Çıktı: true
--------------------------------------------------------*/
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

string ArrayAddition(int arr[], int sizeArr) {
    string isTrue = "false";
    int largest = -9999;
    int sum = 0;
    std::vector<int> sortedValues;

    // code goes here
    //Find largest value and store values in vector
    for (int count = 0; count < sizeArr; count++) {
        if (arr[count] > largest) {
            largest = arr[count];
        }
    }

    //Store all but largest value in vector
    for (int count = 0; count < sizeArr; count++) {
        if (arr[count] < largest) {
            sortedValues.push_back(arr[count]);
        }
    }

    //Sort vector
    sort(sortedValues.begin(), sortedValues.end());

    //Loop through vector to see if any combination of values equals sum
    for (int count = 0; count < sizeArr-1; count++) {
        sum = sortedValues[count];

        //Check total sum
        for (int count2 = count+1; count2 < sizeArr-1; count2++) {
            sum += sortedValues[count2];

            if (largest == sum) {
                isTrue = "true";
                break;
            }
        }

        //Check single values
        for (int count2 = count+1; count2 < sizeArr-1; count2++) {
            int newSum = sum;
            newSum -= sortedValues[count2];

            if (largest == newSum) {
                isTrue = "true";
                break;
            }
        }
    }

    return isTrue;

}

int main()
{
    int a[] {3,5,-1,8,12};
    int b[] {5,7,16,1,2};
    int c[] {4, 6, 23, 10, 1, 3};
    cout << ArrayAddition(a, size(a)) << '\n';
    cout << ArrayAddition(b,size(b)) << '\n';
    cout << ArrayAddition(c, size(c)) << '\n';
    return 0;
}