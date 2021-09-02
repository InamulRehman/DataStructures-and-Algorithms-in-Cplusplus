//Program to sort N elements of vector using slection sorting technique

#include <iostream>
#include<vector>
using namespace std;

class slection
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
// Member function to sort values in vector
        void sorting(vector<int>& v)
        {
            int min,temp;
            for (size_t i = 0; i < v.size()-1; ++i)
            {
                min = i;
                
                for (size_t j = i+1; j< v.size(); ++j)
                {
                    if (v[min] > v[j] )
                        min = j;
      
                }
                if (min != i)
                {
                    temp = v[i];
                    v[i] = v[min];
                    v[min] = temp;
                }       
                     
            }    
        }  

};
int main ()
{
    int n;
    slection Sort;
    cout << "Enter index: " << flush;
    cin >> n;
    vector<int> values(n);
    cout << "Enter values in vector: ";
    Sort.input(values);
    cout << "Values before sorting: ";
    Sort.print(values);
    Sort.sorting(values);
    cout << "\nValues after sorting: ";
    Sort.print(values);

}