#include <iostream>
#include<vector>
using namespace std;

class binary_search
{
    private: 
        int loc, mid;
    public:
    
    // Constructor to intiliuze the loc to -1
        binary_search()
        {
            loc = -1;
        }

    // Member function input items/values
    // here it is required to enter values in sorted form
        void input(vector<int>& it)
        {
            cout << "Enter values: ";
            for (size_t i=0; i < it.size(); ++i)
            {
                cout << i << " ";
                cin >> it[i] ;
                cout << "\n";
            }
        }
    //Member function to search an item 

        void search_item(int value,int no_of_items,vector<int>& it)
        {
            mid  = no_of_items/2;
            if (value == it[mid])
            {
                loc = mid;
                cout << "Value found at mid: " << loc << endl;
            }
                
            
            if (value > it[mid])
            {
                for (size_t i = mid+1; i < it.size(); ++i)
                {
                    if (value == it[i])
                    {
                        loc = i;
                        cout << "Value found at ``` " << loc << endl;
                    }
                }
            }
            else
            {
                for (size_t i = mid-1; i >=0 ; --i)        //some bug is while using i >=0
                {
                   if (value == it[i])
                    {
                        loc = i;
                        cout << "Value found at :" << loc << endl;
                    }
                }
                
            }
            if (loc == -1) 
            {
                cout << "No data found... " << endl;
            }
            
            
        }
};

int main ()
{
    int n, val;
    binary_search search;
    cout << "Enter index: ";
    cin >> n;
    vector<int> items(n);
    search.input(items);
    cout << "Enter value to search: " << flush;
    cin >> val;
    search.search_item(val,n,items);
}