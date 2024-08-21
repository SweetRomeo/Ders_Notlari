/*----------------------------------------
Username Validation
Have the function CodelandUsernameValidation(str) take the str
parameter being passed and determine if the string is a valid username according to the following rules:

1. The username is between 4 and 25 characters.
2. It must start with a letter.
3. It can only contain letters, numbers, and the underscore character.
4. It cannot end with an underscore character.

If the username is valid then your program should return the string true, otherwise return the string false.
---------------------------------------------*/
#include <iostream>
#include <string>
#include <cctype>
using namespace std;

string CodelandUsernameValidation(string str) {

    // code goes here
    if(!isalpha(str[0]) || str.length() > 25 || str.length() < 4 || str[str.length() - 1] == '_') {
        return "false";
    }

    for (char ch : str) {
        if(!isalnum(ch) && ch != '_') {
            return "false";
        }
    }
    return "true";
}

int main()
{
    return 0;
}