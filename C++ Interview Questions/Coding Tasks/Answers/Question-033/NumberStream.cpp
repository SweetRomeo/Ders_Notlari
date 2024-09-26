/*--------------------------------------------------------
33-) Number Stream
Have the function NumberStream(str) take the str parameter being passed
which will contain the numbers 2 through 9, and determine if there is
a consecutive stream of digits of at least N length where N is the actual
digit value. If so, return the string true, otherwise return the string false.
For example: if str is "6539923335" then your program should return the string true because
there is a consecutive stream of 3's of length 3. The input string will always contain at least one digit.
--------------------------------------------------------*/
#include <iostream>
#include <string>
using namespace std;

string NumberStream(string str) {

    string found = "false";

    for (int i = 0; i < str.length()-1; i++){
        int count = 1;
        int num = str[i] - '0';
        for (int j = i+1; j < str.length(); j++){
            if (str[i] == str[j] && j < j+str[i]){
                count++;
                if (count == num){
                    found = "true";
                    return found;
                }
            }
            else {
                break;
            }
        }
    }


    return found;
}

int main()
{
    cout << NumberStream("6539923335") << '\n';
    cout << NumberStream("5556293383563665") << '\n';
    cout << NumberStream("5788888888882339999") << '\n';
    return 0;
}