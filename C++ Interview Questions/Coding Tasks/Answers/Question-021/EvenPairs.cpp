/*----------------------------------------
21-) Even Pairs
Hide Question
Have the function EvenPairs(str) take the str parameter
 being passed and determine if a pair of adjacent even
 numbers exists anywhere in the string. If a pair exists,
 return the string true, otherwise return false. For example:
 if str is "f178svg3k19k46" then there are two even numbers at the
 end of the string, "46" so your program should return the string true.
 Another example: if str is "7r5gg812" then the pair is "812" (8 and 12)
 so your program should return the string true.
---------------------------------------------*/
#include <iostream>
#include <string>

using namespace std;

bool isEven(int val)
{
  return val % 2 == 0;
}

bool EvenPairs(string str) {
  string pair;
  for (int i = 0; i < str.size() - 1; ++i) {
      if (isdigit(str[i]) && isdigit(str[i + 1])) {
         pair += str[i];
         pair += str[i + 1];
         if (isEven(atoi(pair.c_str()))) {
           return true;
         }
         pair = "";
      }
  }
  return false;
}


int main()
{
    cout << EvenPairs("f178svg3k19k46") << '\n';
    cout << EvenPairs("7r5gg812") << '\n';
    cout << EvenPairs("abc") << '\n';
    cout << EvenPairs("jfb735f9ph8152") << '\n';
    return 0;
}