#include <iostream>
using namespace std;
class facto
{
    private:
            int f;
            int r;
    public:
        int fact(int val)
        {
            f = 1;
            if (val == 0)
            {
                return f;
            }
            else
            {
                r = fact(val - 1);         ////logic is very important
                f = val * r;                          // in second iteration how recursive  function  r has value 1
                return f;
            }
        }
};
int main ()
{
    facto obj;
    int val, result;
    cout << "Enter value: " << flush;
    cin >> val;
    result = obj.fact(val);
    cout << "Foactorial of " << val << " is " << result;
}