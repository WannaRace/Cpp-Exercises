/* Exercise 3.13: Read a set of integers into a vector. Calculate
and print the sum of each pair of adjacent elements in the vector.
If there is an odd number, tell the user and print the value of the 
last element without summing it. 

Now change your program so that it prints the sum of the first and 
last elements followed by the sum of the second and second-to-last
and so on.  
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
    for (vector<int>::size_type i = 0; i <= ivec.size()-(i+1); i++)
    {
        if (i != ivec.size()-(i+1)) //not the same index
        {
            vecSum = ivec[i] + ivec[ivec.size()-(i+1)];
            cout << ivec[i] << " + " << ivec[ivec.size()-(i+1)] << " = " << vecSum << endl;
        }
        else if (ivec.size()%2 != 0) //same index and odd vector size
        {
            vecSum += ivec[i];
            cout << "Odd number left out: " << vecSum << endl;
        }
        
        vecSum = 0;
    }
    
     return 0;
}