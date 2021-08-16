#include<iostream>
using namespace std;

class convert
{
    private:
        
        char stack[15] ,ch;
        int top;

    public:
        char st[100];

        convert()
        {
            top = -1;
        }
        // member function to input expression
        void input ()
        {
            cout << "Enter expression without space: " << flush;
            cin >> st;
        }

        void scan(void);
        void push(void);
        void pop(void);


};

int main()
{
    convert obj;
    obj.input();
    obj.scan();

}

// Member function to scane expression

void convert :: scan(void)
{
    for (int i=0 ; st[i] != '\0';  i++)
    {
        ch = st[i];

        if(ch == '(' || ch == '*' || ch == '+' || ch == '-' || ch == '/' || ch == ')')
        {
            if (ch == '(')
              {  push();  }

            else if(stack[top] == '(')
              {  push();  }

            else if (ch == ')')
              {  pop();    }

            else if (stack[top] == '+' || stack[top] == '-' && ch == '*' || ch == '/')
               { push();   }
               
            else if (top == -1)
              {  push();  }

            else
                {
                    pop();
                    push();
                }
            
        }
        else
           { cout << ch << " ";}
    }
    pop();
    
}

// Function to push operators into stack
void convert::push(void)
{
    top++;
    stack[top] = ch;
}

// Function to pop operators from stack
void convert::pop(void) 
{
    while (top != -1)
    {
        if (ch == ')')
        {
            cout << stack[top] << " " ;
            top--;
            if(stack[top] == '(')
            {
                top-- ;
                break;
            }
        }
        else
        {
            cout << stack[top] << " ";
            top-- ;
            if (stack[top] == '(')
              {  break; }
        }
    }
    
}

