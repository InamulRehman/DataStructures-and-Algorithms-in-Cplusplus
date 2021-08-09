#include <iostream>
using namespace std;
class InsrertAtEnd
{

    private:
        int arr[10];
    public:
        void assign()
        {
            arr[0] = 12;
            arr[1] = 33;
            arr[2] = 97;
            arr[3] = 3;

        }
        void insert()
        {
            cout << "Enter values at end of array: ";
            for (int i = 4; i <= 9; i++)
            {
                cout << "\n";
                cin >> arr[i];
            }
        }
        void print ()
        {
            cout << "Values in arry are: ";
            for (int j = 0; j <= 9; j++)
            {
                cout << "\n" << arr[j];
            }
        }


};
int main ()
{
    InsrertAtEnd obj;
    obj.assign();
    obj.insert();
    obj.print();
    return 0;
}