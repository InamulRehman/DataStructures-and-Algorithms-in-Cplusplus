// Program to sort an array of ten elements using in ascending order 
#include <iostream>
using namespace std;

int main ()
{
    int num[10],temp;
    cout << "Enter values in an array: " << flush;
    for (int i=0; i <=9; i++)
    {
        cout << "\n" << i << "`````````````` " ;
        cin >> num[i];
    }
    ////////////////////////////////////////////////////////
    cout << "Values in array without sorting: " ;
    for (int i=0; i <=9; i++)
    {
        cout << "\n" << i << "|||||||||||||||||| " ;
        cout << num[i];
    }
    ////////////////////////////////////////////////////////
    for (int i=0; i <= 8; i++)
    {
        for(int j=i+1; j<= 9; j++)
        {
            if (num[j] > num[j])
            {
                temp = num[j];
                num[j] = num[j];
                num[j] = temp;
            }
        }
    }
    ////////////////////////////////////////////////////////
    cout << "\nValues in array after sorting: " ;
    for (int i=0; i <=9; i++)
    {
        cout << "\n" << i << "~~~~~~~~~~~~~~~ " ;
        cout << num[i];
    }
    
}