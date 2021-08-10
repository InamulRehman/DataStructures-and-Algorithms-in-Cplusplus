#include <iostream>
using namespace std;

class DelAtSpefLoc
{
    private: 
        int arr[5];
    public:
        void assign()
        {
            cout << "Enter values: ";
            for (int i = 0; i <= 4; i++)
            {
                cout << "\n";
                cin >> arr[i];
            }
        }

        void del(int loc)
        {
            for (int i = loc; i<=4; i++)
            {
                arr[i] = arr[i+1];          // where goes varying of i+1 after iteration??
                
            }
            arr[4] = 0;
        }
        
        void print (int p)
        {
            for (int i = 0; i <=p; i++)
            {
                cout << "\n";
                cout << arr[i];
            }
        }
};

int main ()
{
    DelAtSpefLoc obj;
    obj.assign();
    cout << "\n Values before deletion are: " ;
    obj.print(4) ;

    int loc;
    cout << "\nEnter Index to delete: " << endl;
    cin >> loc;
    if (loc >=5)
    {
        cout << "Invalid index.. "<< endl;
        return 0;
    }
    obj.del(loc);

    cout << "\n Values after deletion are: " ;
    obj.print(4) ;
    return 0;
}