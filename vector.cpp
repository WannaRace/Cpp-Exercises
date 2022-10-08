/* Exercise 3.13: Read a set of integers into a vector. Calculate
and print the sum of each pair of adjacent elements in the vector.
If there is an odd number, tell the user and print the value of the 
last element without summing it. 
*/
#include <iostream>
#include <vector>

using namespace std;
int main()
{
    vector<int> ivec;
    int input;

    cout << "Input some numbers" << endl;
    while (cin >> input)
        ivec.push_back(input);

    int vecSum = 0;
    for (vector<int>::size_type i = 0; i <= ivec.size()-1; i++)
    {
        if (i < ivec.size()-1) //not the last item
        {
            vecSum = ivec[i] + ivec[i+1];
            cout << ivec[i] << " + " << ivec[i+1] << " = " << vecSum << endl;
            i++;
        }
        else if (i == ivec.size()-1) //last element
        {
            vecSum += ivec[i];
            cout << "Odd number left out: " << vecSum << endl;
        }
        
        vecSum = 0;
    }
    
     return 0;
}