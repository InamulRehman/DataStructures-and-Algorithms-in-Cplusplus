#include<iostream>
using namespace std;

class seq
{
    private:
        int arr[10];
        int loc = -1;
    public:
    
// program to input values in array
        void input ()
        {
            cout << "Enter values: ";
            for (int i=0; i <= 9; i++)
            {
                cout << "\n" << i << " ************* ";
                cin >> arr[i];
            }
        }

// program to search an item in array
        void search(int val)
        {
            for (int i=0; i<=9; i++)
            {
                if (val == arr[i])
                {
                    loc = i;
                    cout << "Item found at loc " << i ;
                    break;
                }
                
            }
            
            if (loc == -1)
            {
                cout << "Item not found.";
            }
           
        }




};
int main ()
{
    seq obj;
    int item;
    obj.input();
    cout << "Enter item to search: " << flush;
    cin >> item;
    obj.search(item);
    return 0;
}