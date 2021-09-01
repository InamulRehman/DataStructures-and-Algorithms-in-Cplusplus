// Program to get largest number via traversing sequentially through vectors
#include <iostream>
#include <vector>
using namespace std;

class getLargestNumber
{
    private:
        int max;

    public:


// Member function to input values into vector

        void input(vector<int>& v)
        {
            for (size_t i = 0; i < v.size(); ++i)
            {
                cin >> v[i];
            }   
        }
// Member function to get largest number

        void largestNumber(vector<int>& v)
        {
            for (size_t i = 0; i < v.size(); ++i)
            {
                if (i == 0)
                {
                    max = v[i];
                    continue;
                }
                if (max < v[i])
                {
                    max = v[i];
                }
            } 
            cout << "Largest number is : " << max;  
        }

};

int main ()
{
    getLargestNumber large;
    int n;
    cout << "Enter the size of vector: " << flush;
    cin >> n;
    vector<int> vect(n);
    cout << "```````````````````````"<< endl;
    cout << "Enter values in vector: " <<flush;
    large.input(vect);
    cout << "```````````````````````"<< endl;
    large.largestNumber(vect);
}