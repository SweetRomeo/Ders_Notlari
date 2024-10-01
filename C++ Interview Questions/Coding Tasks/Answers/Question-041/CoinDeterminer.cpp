/*--------------------------------------------------------
41-) Coin Determiner
kendisine gönderilen 1-250 arası bir sayıyı belli
değerlere sahip olan(1,5,7,9,11) paralardan minimum kaç tane kullanılarak
elde edilebileceği geri döndüren CoinDeterminer isimli fonksiyonu yazınız
ve test ediniz. Örneğin:
Giriş: 25
Çıktı: 3(çünkü 25 -> 11, 9 ve 5)
Giriş: 16
Çıktı: 2(16 -> 11 + 5)
--------------------------------------------------------*/
#include <iostream>
#include <string>
#include <climits>
#include <vector>

using namespace std;

int minCoinsUsed = INT_MAX;
int coinDenoms[] = {11,9,7,5,1};

void CoinRecursion(int amount, vector<int> coinsUsed){
    if(amount == 0){  // Solution found!
        if(coinsUsed.size() < minCoinsUsed)
            minCoinsUsed = coinsUsed.size();
        return;
    }
    if(coinsUsed.size() >= minCoinsUsed )
        return;

    for(int coin : coinDenoms){
        if(coin > amount) continue;
        vector<int> temp = coinsUsed;
        temp.push_back(coin);
        CoinRecursion(amount - coin, temp);
    }
}

int CoinDeterminer(int num) {
    vector<int> used;
    CoinRecursion(num, used);
    return minCoinsUsed;
}

int main()
{
    int x = 16;
    int y = 6;
    int z = 25;
    cout << CoinDeterminer(x) << '\n';
    cout << CoinDeterminer(y) << '\n';
    cout << CoinDeterminer(z) << '\n';
    return 0;
}