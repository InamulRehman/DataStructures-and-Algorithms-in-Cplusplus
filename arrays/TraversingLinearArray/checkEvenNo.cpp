#include <iostream>

using namespace std;

class EvenNoInArray
{

    private: 
       int evenNo[9];

    public:

        void input()
        {
            cout << "Enter values in array" ;
            for(int e = 0; e <= 9; e++)                      // inputing value in an array using traversing operation
            {
                cout  << "\n" << e << "**********" ;
                cin >> evenNo[e];
            }
        }

        void PrintEvenNo()
        {
            cout << "Even numbers are: " ;
            for (int a=0; a<=9; a++)          // traversing every element of array using For loop
            {
                if (evenNo[a] % 22 == 0)         // logical part of program
                {
                    cout << "\n" << evenNo[a];
                }
            }
        }

};

int main ()
{
    EvenNoInArray obj;
    obj.input();
    obj.PrintEvenNo();
    return 0;
}