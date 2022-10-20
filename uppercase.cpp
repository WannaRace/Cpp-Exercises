/* Exercise 3.14: Read some text into a vector, storing each word in the 
input as an element in the vector. Transform each word into uppercase letters.
Print the transformed elements from the vector, printing eight words to a line 
*/
#include <iostream>
#include <vector>
#include <cctype>

using namespace std;
int main()
{
    vector<string> vwords;
    string input;

    cout << "Tell me a story. Type \"quit\" when you're finished " << endl;
    while (cin >> input && input != "quit")
        vwords.push_back(input);
    for (vector<string>::size_type i = 0; i < vwords.size(); i++)//iterate words
    {
        if (i%8 == 0)
            cout << endl;
        for (string::size_type j = 0; j < vwords[i].size(); j++)//iterate chars
            vwords[i][j] = toupper(vwords[i][j]);
        cout << vwords[i] << " ";
    }    
    
     return 0;
}