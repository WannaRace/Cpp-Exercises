/* Exercise 2.11: Write a program that prompts the user to input two numbers,
the base and exponent. Print the result of raising the base to the power of 
the exponent.
*/
#include <iostream>

using namespace std;
int main()
{
     int num = 0;
     int _Power = 0;
     int result = 1;
     cout << "Enter a number" << endl;
     cin >> num; 
     cout << "Enter an exponent" << endl;
     cin >> _Power;

     for (int i = 0; i < _Power; i++)
     {
          result *= num;
     }
     
     cout << num << " to the power of " << _Power << " = " << result << endl;

     //Exercise 2.27: What does the following code print?
     //int i, &ri = i;
     //i = 5; ri = 10;
     //cout << i << " " << ri << endl;
     return 0; 
}