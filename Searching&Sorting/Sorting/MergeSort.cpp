#include <iostream>
#include <vector>
using namespace std;
             
class MergeSort
{
    private:
        int ab[10], a[5], b[5];
    
       
    public:
// Member function to input values 
        void input()
        {
            
            for (size_t i = 0; i <= 9; ++i)
            {   cout << "\n" << i << "````````````` ";
                cin >> ab[i];
            }
            
        }

// Member function to sort values 
        void sort()
        {
            // dividing array ab 
            int mid = (0+9)/2;            // mid is upper bound of first half sub array 
            int l = mid + 1;              // l is lower bound of second half sub array


            for (size_t i = 0; i <= mid; ++i)
            {
                a[i] = ab[i];                //storing data into first sub array from array ab
            }
            for (size_t i =l ; i <= 9; ++i)
            {
                b[i-l] = ab[i];               //storing data into second sub array from array ab
            }
            

            // sort sub arrays
            for (size_t t = 0; t <=mid; ++t) //sort first sub array
            {
                int temp = a[t];
                int i;

                for ( i = t; i > 0 && temp < a[i-1]; i--)
                {
                   a[i] = a[i-1];
                   
                }
                a[i] = temp;
                
            }
            for (size_t t = 0; t <l; ++t) //sort second sub array
            {
                int temp = b[t];
                int i;

                for ( i = t; i > 0 && temp < b[i-1]; i--)
                {
                   b[i] = b[i-1];
                  
                }
                b[i] = temp;
                
            }

            //merge two sub arrays in sorted form into array ab
            int c1=0 ;           // c1 for first sub array a
            int c2=0;            //c2 for second sub array b
            int c=0;             // c for array ab
            while (c1 <=mid && c2<l)
            {
                if (a[c1] < a[c2])
                    {
                        ab[c] = a[c1];
                        c1++;
                        c++;
                    }
                    else
                    {
                        ab[c] = a[c2];
                        c2++;
                        c++;
                    }

            }
//assigning remaining values
            if (c1 > l)
            {
                for (size_t i = 0; i < l-c2; ++i)
                {
                   ab[c+i] = b[c2 + i];
                }
                
            }
            else
            {
                for (size_t i = 0; i < mid-c1; ++i)
                {
                    ab[c+i] = a[c1 + i];
                }
            }   
        }

// Member function to print values 
        void print()
        {
            for (size_t i = 0; i <= 9; ++i)
            {
                cout << "\n" << i << "````````````` ";
                cout << ab[i];
            }
            
        }


};
int main ()
{
    MergeSort s1;
    cout << "Enter values: ";
    s1.input();
    cout << "\nValues before sorting " << endl;
    s1.print();
    s1.sort();
    cout << "\nValues afer sorting " << endl;
    s1.print();
    

}
