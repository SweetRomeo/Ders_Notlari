/*----------------------------------------
Questions Marks
Have the function QuestionsMarks(str) take the str string
parameter, which will contain single digit numbers, letters,
and question marks, and check if there are exactly 3 question marks
between every pair of two numbers that add up to 10. If so, then your
program should return the string true, otherwise it should return the string false.
If there aren't any two numbers that add up to 10 in the string, then your program should return false as well.

For example: if str is "arrb6???4xxbl5???eee5" then your program should return true because
there are exactly 3 question marks between 6 and 4, and 3 question marks between 5 and 5 at the end of the string.
---------------------------------------------*/
#include <iostream>
#include <string>
#include <cctype>
using namespace std;

string QuestionsMarks(const string& str) {
    int prev_num = -1;
    int question_marks = 0;
    bool found_pair = false;

    for (char c : str) {
        if (isdigit(c)) {
            int curr_num = c - '0';
            if (prev_num != -1 && (prev_num + curr_num == 10)) {
                if (question_marks == 3) {
                    found_pair = true;
                } else {
                    return "false";
                }
            }
            prev_num = curr_num;
            question_marks = 0;
        } else if (c == '?') {
            question_marks++;
        }
    }

    return found_pair ? "true" : "false";
}

int main()
{
    string input;
    cout << "Enter the string: ";
    cin >> input;
    cout << QuestionsMarks(input) << endl;
    return 0;
}