#include<iostream>
using namespace std;

class InsrtAtSpficLoc
{
    private:
       int arr[5];
    
    public:

    
    void assign()
    {
        cout << "Enter Four values: " ;
        for (int i = 0; i<=3; i++)
        {
            cout << "\n";
            cin >> arr[i];
        }
    }
    void insert(int val, int loc)
    {
       
        for (int j = 4; j >= loc; j-- )
        {
            // j = 3
            arr[j+1] = arr[j];
            arr[loc] = val;
        }
    }

    void print(int val) // is it necessary to declare new variable or not instead of var
    {
        for (int c = 0; c <= val; c++ )
        {
            cout << "\n";
            cout << arr[c];
        }
    }
    
};

int main ()
{
    InsrtAtSpficLoc obj;

    obj.assign();
    int val , loc; 
    cout << "values before insertion: ";
    obj.print(3);

    cout << "\n Enter value to insert: " ;
    cin >> val;
    cout << "Enter location of value:  ";
    cin >> loc;

    if (loc >= 5)
        {
            cout << "no space";
            return 0;
        }
    obj.insert(val, loc);
    obj.print(4);
    cout << "/n values after insertion: ";

    return 0;
    
}