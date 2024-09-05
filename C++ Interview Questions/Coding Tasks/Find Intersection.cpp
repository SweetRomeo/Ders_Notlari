/*--------------------------------------------------------
Longest Word
Have the function LongestWord(sen) take the sen parameter being passed
and return the longest word in the string. If there are two or more words
that are the same length, return the first word from the string with that length.
Ignore punctuation and assume sen will not be empty.
Words may also contain numbers, for example "Hello world123 567"
Examples
Input: "fun&!! time"
Output: time
Input: "I love dogs"
Output: love
--------------------------------------------------------*/
#include <string>
#include <iostream>
#include <vector>
#include <sstream>
#include <cctype>

using namespace std;

vector<int> convertString(const string& str)
{
    stringstream ss(str);

    vector<int> iVec;

    string line;

    while (getline(ss, line, ',')) {
        int value;
        stringstream linestream(line);
        linestream >> value;
        iVec.push_back(value);
    }
    return iVec;
}

string FindIntersection(string strArr[])
{
    vector<int> arrFirst = convertString(strArr[0]);
    vector<int> arrSecond = convertString(strArr[1]);

    vector<int> intersection;

    for (auto elementFirst : arrFirst) {
        for (auto elementSecond : arrSecond) {
            if(elementFirst == elementSecond) {
                intersection.push_back(elementFirst);
            }
        }
    }
    if (intersection.size() == 0)
    {
        return "false";
    }
    string interText;
    for (auto element : intersection) {
        interText += to_string(element);
        interText += ",";
    }
    return string(interText.begin(),interText.end() - 1);
}


int main() {
  string array[2] = {"1, 3, 4, 7, 13", "1, 2, 4, 13, 15"};
  cout << FindIntersection(array);
}
