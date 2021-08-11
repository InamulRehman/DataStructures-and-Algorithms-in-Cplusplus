// calculating factorial using loop

#include <iostream>
using namespace std;

class factorial
{
    private:
       int fac;

    public:

//  function to calculate factorial
        int fact (int val)
        {
            fac = 1;
            if (val == 0)
            {
               return fac;
            }
            else
            {
                for(int i = fac; i <= val; i++ )
                {
                    fac = fac * i;

                }
                return fac;
            }
        }

};

int main ()
{
    factorial obj;
    int val , result;
    cout << "Enter value to calculate factorial: "<< flush;
    cin >> val ;
    result = obj.fact(val);
    cout << "Factorial of " << val << " is " << result;
    return 0;


}



