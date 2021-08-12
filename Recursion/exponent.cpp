#include<iostream>
using namespace std;

class exponential
{
    private:
        int f;
        int c;

    public:
       // Function to find exponential of an integer
       int power (int b, int e)
       {
           
           if (e == 0)
                return 1;
            else
                c = power(b , e-1);          // how this function returns 1,2, 4 while retreiving  from stack
                f =  b * c ;
                return f;
       }
};


int main()
{
    exponential obj;
    int val, p, result;

    cout << "Enter base value: " << flush;
    cin >> val;
    cout << "Entert exponent value: " << flush;
    cin >> p;
    result = obj.power(val, p);
    cout << "Exponential of an integer is : " << result << endl;
    return 0;
    

}