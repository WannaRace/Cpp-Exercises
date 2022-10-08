/* Exercise 3.10: Write a program to strip the punctuation from a string. The input
to the program should be a string of characters including punctuation; the output
should be a string in which the punctuation is removed. 
*/
#include <iostream>

using namespace std;
int main()
{
     string script1;
     string result;

     cout << "Enter a password that includes punctuation" << endl;
     cin >> script1;
     for (string::size_type i =0; i != script1.size(); i++)
     {
          if (ispunct(script1[i]) == false)
          result += script1[i];
     }
     cout << result << endl;
     return 0;
}