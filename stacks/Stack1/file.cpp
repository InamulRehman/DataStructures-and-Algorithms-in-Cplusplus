#include <iostream>
using namespace std;
class Stack{

    private:
        int arr[5];
        int top;
    public:
    //constructor to initilize default values
        Stack()
        {
            top = -1;
            for(int i = 0; i<5; i++)
            {
                arr[i] = 0;
            }
        }
        // checks stack is empty or not
        bool isEmpty()
        {
            if(top == -1)   //confusion?????
                return true;
            else
                return false;
        }
        // checks stack is full 
        bool isFull()
        {
            if (top==4)
                return true;
            else
                return false;
        }
        // to insert values from stack
        void push(int val)
        {
            if (isFull())
            {
                cout << "Stack overflow"<<endl;
            }
            else
            {
                top++;
                arr[top] = val;
                cout << "Message: Value Pushed into stack... " << endl;
            }
        }
        // to remove values from stack
        int pop()
        {
            if (isEmpty())
            {
                cout << "Stack underflow"<< endl;
                return 0 ;
            }
            else 
            {
                int popValue = arr[top];
                arr[top] = 0;
                top--;
                return popValue;
            }

        }
        //return value in stack on specified position
        int peek(int pos)
        {
            if(isEmpty())
            {
                cout<< "Stack underflow";
                return 0 ; 
            }
            else
            {
                cout << "Value at " <<pos << " is "<< arr[pos];
                return arr[pos];
            }
        }
        //to count values pushed into stack
        int count()
        {
            return top+1;
        }
        // to change value at specified location
        void change(int val , int loc)
        {
            if(isEmpty())
            {
                cout<<"Stack underflow"<<endl;
            }
            else
            {
                arr[loc] = val;
            }
        }
        //displays values in stack
        void display()
        {
            cout << "Values in stack are: " <<endl;
            for (int i = 4; i >=0; i--)
            {
               cout << arr[i] << endl;
            }
            
        }

};


int main()
{
    Stack obj1;
    int position, option , value;
    
    do{
        
        cout <<"\nSelect one of the following..... " << endl;
        cout << "1. Push()" << endl;
        cout << "2. pop()" << endl;
        cout << "3. isEmpty()" <<endl;
        cout << "4. isFull()" << endl;
        cout << "5. Peek()" << endl;
        cout << "6. Count()" <<endl;
        cout << "7. Change()" << endl;
        cout << "8. Display()" << endl;
        cout << "9. Clear scren" << endl;
        cout << "Enter Choice:  " << flush;
        cin >> option;
        cout << "************************************** What you want is here************* " << endl;

        switch (option)
        {
        case 0:
            cout << "Program quited.......";
            break;

        case 1: 
            cout<< "Enter value to insert into stack: " << flush;
            cin >> value; 
            obj1.push(value);
            
               
            
          
            break;
        
        case 2: 
            cout << "Value Poped from stack " << endl;
            obj1.pop();
            break;
        case 3: 
            if(obj1.isEmpty())
            {
                cout << "Stack is empty"<< endl;

            }
            else
            {
                cout << "Stack is not empty." << endl;
            }
            break;
        case 4: 
            if(obj1.isFull())
            {
                cout << "Stack is Full"<< endl;

            }
            else
            {
                cout << "Stack is not Full." << endl;
            }
            break;
        case 5:
            cout << "Enter position of value you want to get: "<<flush;
            cin >> position;
            obj1.peek(position);
            break;
        case 6:
            cout << "No of values in stack are : " << endl;
            cout << obj1.count();
            break;
        case 7:
            cout << "Enter new value you want to replace : " <<flush;
            cin >> value ;
            cout << "Enter Position: " << flush;
            cin >> position;
            
            obj1.change(value,position);
            cout << "Value is replaced...";
            break;
        case 8:
            cout << "Dispaly called" << endl;
            obj1.display();
            break;

        case 9:
            system("cls");
            break;

        
        default:
            cout << "Please enter valid choice." << endl;
            break;
        }


    }while(option !=0);

    return 0;

}