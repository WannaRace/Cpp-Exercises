/* Exercise 3.7: Write a program to read two strings and report whether the strings 
are equal. If not, report which of the two is the larger. Now change the program to 
report whether the strings have the same length and if not, report which is longer 
*/
#include <iostream>

using namespace std;
int main()
{
     string script1;
     string script2;

     cout << "Enter a phrase" << endl;
     cin >> script1;
     cout << "Enter a second phrase" << endl;
     cin >> script2;

     if (script1.size() == script2.size())
          cout << "The phrases are the same" << endl;
     else if (script2.size() > script1.size())
          cout << "The second phrase is larger" << endl;
     else 
          cout << "The first phrase is larger" << endl;
     return 0;
}