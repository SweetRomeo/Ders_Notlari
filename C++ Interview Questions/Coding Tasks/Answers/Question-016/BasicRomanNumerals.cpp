/*--------------------------------------------------------
16-) Basic Roman Numerals
Romen rakamları sırasıyla I = 1, V = 5, X = 10, L = 50,
C = 100, D = 500, M = 1000 şeklinde ifade edilir. I
--------------------------------------------------------*/
#include <iostream>
#include <string>
#include <map>
#include <algorithm>
using namespace std;

string BasicRomanNumerals(string str) {

    map <char, int> romanNumerals =
    {
        {'I', 1},
        {'V', 5},
        {'X', 10},
        {'L', 50},
        {'C', 100},
        {'D', 500},
        {'M', 1000},
      };

    reverse(str.begin(), str.end());
    int oldValue = -1;
    int value = 0;
    bool firstTime = true;
    for (auto element : str) {
        if (auto search = romanNumerals.find(element); search != romanNumerals.end()) {
            if (firstTime) {
                value = search->second;
                firstTime = false;
            }
            else if (search->second < oldValue) {
                value -= search->second;
            }
            else {
                value += search->second;
            }
            oldValue = search->second;
        }
    }

    return to_string(value);
}

int main()
{
    return 0;
}
