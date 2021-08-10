#include <iostream>
using namespace std;

class stack
{
    private:
        int top;
        int S[3];
    public:

// constructor to initilize stack
        stack()
        {
            top = -1;
        }
// Function to insert value into stack
        int push(int n)
        {
            if (top >= 2)                                 //checking for stack overflow
            {
                cout << "Stack Overflow. " << endl;
                return 0;
            }
           
           top++;
           S[top] = n;

        }
// Function to delete value from stack
        int pop()
        {
            int temp;
             if (top == -1)                                    //checking for stack underflow 
                {
                    cout << " Stack UnderFlow " ;
                    return 0;
                }
            temp = S[top];
            top--;
            return temp;
        }
// Function to print values into stack
        int print()
        {
            if (top == -1)                                        //checking for stack underflow
                {
                    cout << "\n Stack is empty. "<< endl;
                    cout <<  "*****************************************" << endl;
                    return 0;
                }
            for (int i = 0; i <= top; i++)                        // traversing stack
            {
                cout << "\n" << S[i] << endl;
            }
            cout <<  "*****************************************" << endl;
        }
};

int main()
{
    stack obj;
    int val, opt;
   
    while (opt !=3)
    {
        cout << "1. Push\n";
        cout << "2. Pop\n";
        cout << "3. Exit\n";
        cout << "Enter your choice: " << flush;
        cin >> opt;
        switch (opt)
        {
            case 1:
                cout << "\nEnter value to insert: " << flush;
                cin >> val;
                obj.push(val);
                cout << "*****************************************";
                cout << "\nStack after insertion: " ;
                obj.print();
            break;
            case 2:
                
                cout << "Value is " << obj.pop()  << " Poped." << endl;
                cout <<  "*****************************************" << endl;
                cout << "Stack after deletion: " ;
                obj.print();
            break;    
        }
    }
    cout << "I do not want neither to insert nor to delete value in stack  " << endl;
    return 0;
    

}