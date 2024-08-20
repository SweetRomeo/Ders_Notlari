/*----------------------------------------
Longest Word
Have the function LongestWord(sen) take the sen parameter being passed and return the longest word in the string.
If there are two or more words that are the same length, return the first word from the string with that length.
Ignore punctuation and assume sen will not be empty. Words may also contain numbers, for example "Hello world123 567"
Examples
Input: "fun&!! time"
Output: time
Input: "I love dogs"
Output: love
Tags
---------------------------------------------*/
#include <iostream>
#include <string>
#include <cctype>

std::string LongestWord(const std::string &sen) {
    std::string longestWord;
    std::string currentWord;
    size_t maxLength = 0;

    for (char c : sen) {
        if (std::isalnum(c)) {
            currentWord += c;
        } else {
            if (currentWord.length() > maxLength) {
                maxLength = currentWord.length();
                longestWord = currentWord;
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
    std::string sentence1 = "fun&!! time";
    std::string sentence2 = "I love dogs";
    std::string sentence3 = "Hello world123 567";

    std::cout << "Longest word in '" << sentence1 << "' is: " << LongestWord(sentence1) << std::endl;
    std::cout << "Longest word in '" << sentence2 << "' is: " << LongestWord(sentence2) << std::endl;
    std::cout << "Longest word in '" << sentence3 << "' is: " << LongestWord(sentence3) << std::endl;

    return 0;
}