#include <iostream>
using namespace std;

class DelAtEnd
{
    private:
        int arr [5];
    public:
        void assign()
        {
            cout << "Enter values: ";
            for (int i=0; i <=4; i++)
            {
                cout << "\n";
                cin >> arr[i];
            }
        }
        void delt(int i)
        {
            arr[i] = 0;
        }
        void print (int n)
        {
            for (int i =0; i <= n; i++)
            {
                cout << "\n";
                cout << arr[i];
            }
        }


};
int main ()
{
    int i;                              //what about using same variable like i ??
    DelAtEnd obj;
    obj.assign();
    cout << "Values before deletion: ";
    obj.print(4);
    cout << "\n Enter last index to delete: ";
    cin >> i;
    if (i >=5)
    {
        cout << "Invalid index." << endl;
        return 0;

    }
    obj.delt(i);
    cout << "Values after deletion: " ;
    obj.print(3);
    return 0;
}
