// Program to search sequentially an item and insert item at that location 
#include <iostream>
#include<vector>
using namespace std;

class SeqSch
{
    
        
    public: 
        int loc;

// Constructor to assign value of loc to -1
        SeqSch()
        {
            loc = -1;
        }

// Member function to input values into vector
        void input(vector<int>& v)
        {
            for (size_t i = 0; i < v.size(); ++i)
            {
                cin >> v[i];
            }   
        }
// Member function to find value
        int searchItem(int val1, vector<int>& v)
        {
            bool found = true;
            for (size_t i = 0; i < v.size(); ++i)
            {
               if (val1 == v[i])
               {
                   found = false;
                   loc = i;
                   cout << "Value found at " << loc <<" loc."<< endl;
                  
               }   
            }
            if (found)
               {
                   cout << "Opps....\n Value not found."<< endl;    
               }
            return loc;
        }
// Member function to insert/replace value at specific location in vector
        void InsrtItem(int v2,int loc2, vector<int>& v)
        {
            for (size_t i = 0; i < v.size(); i++)
            {
                if (loc2 == i)
                {
                    v[i] = v2;
                    cout << "```````````````````````"<< endl;
                    cout << "New value "<< v[i] << " inserted seccessfully at " << i;
                }
            }
            
        }
};

int main ()
{
    SeqSch search;
    int n, val1,val2,searchedItemLoc;
    cout << "Enter the size of vector: " << flush;
    cin >> n;
    vector<int> vect(n);
    cout << "```````````````````````"<< endl;
    cout << "Enter values in vector: " <<flush;
    search.input(vect);
    cout << "```````````````````````"<< endl;
    cout << "Enter value to search: " <<flush;
    cin >> val1;
    cout << "```````````````````````"<< endl;
    cout << "Enter value you want to insert/replace: " <<flush;
    cin >> val2;
    cout << "```````````````````````"<< endl;
    searchedItemLoc = search.searchItem(val1,vect);
    if (searchedItemLoc != -1)
        search.InsrtItem(val2,searchedItemLoc,vect);


    
    
    
    
}