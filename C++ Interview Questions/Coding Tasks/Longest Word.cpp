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
#include <cctype>

using namespace std;

string LongestWord(const string& sen) {

  string currentWord;
  string longestWord;
  int maxLength = 0;
  for (char c : sen) {
    if (isalnum(c)) {
      currentWord += c;
    }
    else { if (currentWord.length() > maxLength) {
      longestWord = currentWord;
      maxLength = currentWord.length();
    }
      currentWord = "";
    }
  }

  if (currentWord.length() > maxLength) {
    longestWord = currentWord;
  }

  return longestWord;
}


int main() {
  string s1 = "fun&!! time";
  string s2 = "I love dogs";
  cout << LongestWord(s1) << '\n';
  cout << LongestWord(s2) << '\n';
}
