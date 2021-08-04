#include <iostream>
using namespace std;
class CalculatingSum {

    private:
        int sum;
        int arr[9];
    public:

    CalculatingSum()
    {
        sum = 0;
    }

    void input()
    {
        cout  << "Enter values in array: ";
        for (int i = 0; i <=9; i++)
        {
            cout  << "\n" << i << " ........" ;
            cin >> arr[i];
        }
    }

    void print ()
    {
        cout << "Sum of array of ten elements is:" << endl;
        for (int j=0; j<=9; j++)
        {
           //sum = sum + arr[j];
            sum += arr[j];  
        }
        cout << sum;
    }
};

int main()
{
    CalculatingSum obj;
    obj.input();
    obj.print();
    return 0;

}