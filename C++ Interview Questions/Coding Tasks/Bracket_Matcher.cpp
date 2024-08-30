/*----------------------------------------
Have the function BracketMatcher(str) take the str parameter being
 passed and return 1 if the brackets are correctly matched and each
 one is accounted for. Otherwise return 0. For example: if str is
 "(hello (world))", then the output should be 1, but if str is "((hello (world))"
 the the output should be 0 because the brackets do not correctly match up.
 Only "(" and ")" will be used as brackets. If str contains no brackets return 1.
---------------------------------------------*/
#include <iostream>
#include <string>

using namespace std;

string BracketMatcher(const string& str) {

    int count = 0;
    for (char c : str) {
        if (c == '(') {
            count++;
        }
        else if(c == ')') {
            count--;
        }
        if(count < 0) {
            return "0";
        }
    }

    return count ? "0" : "1";

}

int main()
{
    string s1 = "((hello (world))";
    cout << BracketMatcher(s1) << '\n';
    string s2 = "hello world";
    cout << BracketMatcher(s2) << '\n';
    return 0;
}