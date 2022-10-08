#include <iostream>
#include "Sales_item.h"

using namespace std;
int main()
{
     Sales_item book1, book2;
     int numBook1 = 0, numBook2 = 0;
     int i = 0;

     cin >> book1;
     while (i < 6)
     {
          cin >> book2;
          numBook1++;
     
          if (book1.isbn() == book2.isbn())
               numBook1++;
          else
               numBook2++;
          i++;
          book1 = book2;     
     }

     cout << numBook1 << endl;
     
     return 0; 
}