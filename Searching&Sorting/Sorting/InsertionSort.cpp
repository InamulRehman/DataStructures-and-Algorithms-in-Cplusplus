
#include <iostream>
#include <vector>
using namespace std;

class Insertion
{
    
       
    public:
// Member function to input values in vector
        void input(vector<int>& v)
        {
            
            for (size_t i = 0; i < v.size(); ++i)
            {   cout << "\n" << i << "````````````` ";
                cin >> v[i];
            }
            
        }

// Member function to print values in vector
        void print(vector <int>& v)
        {
            for (size_t i = 0; i < v.size(); ++i)
            {
                cout << "\n" << i << "````````````` ";
                cout << v[i];
            }
            
        }
// Member function to sort vector
        void insrtSort(vector <int>& v)
        {
            int temp, j;
            for (size_t i = 0; i < v.size(); ++i)
            {
                temp = v[i];
                j = i;
                while (j >0 && temp < v[j-1])
                {
                    v[j] = v[j-1];
                    j = j - 1;
                }
                v[j] = temp; 
            //   for ( j = i; j >=0 && temp < v[j-1]; --i)
            //   {   
            //      v[j] = v[j-1];
            //  }
                   
            }
            
        }

};
int main ()
{
    int n;
    Insertion sort;
    cout << "Enter index: " << flush;
    cin >> n;
    vector<int> values(n);
    cout << "Enter values: " ;
    sort.input(values);
    cout << "Values before sorting: " ;
    sort.print(values);
    
    sort.insrtSort(values);
    cout << "\nValues after sorting: " ;
    sort.print(values);

    

}
