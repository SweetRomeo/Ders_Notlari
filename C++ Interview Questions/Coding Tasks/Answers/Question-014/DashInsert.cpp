/*--------------------------------------------------------
14-) Dash Insert
Have the function DashInsert(str) insert dashes ('-') between each two odd numbers in str. For example: if str is 454793 the output should be 4547-9-3. Don't count zero as an odd number.
Examples
Input: 99946
Output: 9-9-946
Input: 56730
Output: 567-30
--------------------------------------------------------*/
#include <iostream>
#include <string>
using namespace std;

string DashInsert(string str) {
    string resultText;
    resultText += str[0];
    for (int i = 1; i < str.size(); ++i) {
        if (str[i] % 2 == 1 && str[i - 1] % 2 == 1) {
            resultText += "-";
        }
        resultText += str[i];
    }
    return resultText;
}

int main()
{
    cout << DashInsert("99946") << '\n';
    cout << DashInsert("56730") << '\n';
    cout << DashInsert("454793") << '\n';
    return 0;
}
