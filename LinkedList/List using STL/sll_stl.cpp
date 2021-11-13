#include<iostream>
#include<list>
#include<iterator>
using namespace std;
void showlist(list<int> l1)
{
    list <int> :: iterator it;
    for (it = l1.begin(); it != l1.end(); ++it)
    {
        cout << " \t " << *it;
    }
    cout << "\n";
}
int main()
{
    bool yes;
    do {
       
        int pos,ele;
        list <int> list1 = {1,2,3};
        cout << "\n List 1 is : ";
        showlist(list1);

        list <int> :: iterator sp;

    //Inserting element at starting position of list
        sp = list1.begin();
        cout << "\n At first position  : " ;
        list1.insert(sp,1888);
        cout << "\n List 1 is : ";
        showlist(list1);

    //Inserting element at end of list
        cout << "\n At the end : ";
        sp = list1.end();
        list1.insert(sp,344);
        cout << "\n List 1 is : ";
        showlist(list1);

    //Insert element at specific position in list
        sp = list1.begin();
        cout << "\n Enter position : " << flush;
        cin >> pos;
        for (int i=0; i < pos-1; i++)
        {
            sp++;
        }
        cout << "\nEnter the element : " << flush;
        cin >> ele;
        list1.insert(sp,1,ele);
        cout << "\n Elements of list are : ";
        showlist(list1);

        //Removing element at starting position of list
        sp = list1.begin();
        cout << "\n From first position  : " ;
        list1.remove(1888);
        cout << "\n List 1 is : ";
        showlist(list1);

        //Removing element at end of list
        sp = list1.end();
        cout << "\n From end position  : " ;
        list1.remove(344);
        cout << "\n List 1 is : ";
        showlist(list1);

        //removing element at specific position in list
        sp = list1.begin();
        cout << "\n Enter the element you want to remove : " << flush;
        cin >> ele;
        
        list1.remove(ele);
        cout << "\n Elements of list are : ";
        showlist(list1);
        
       
        cout << "Run again.. " << "\n yes:  1 \n No: 0 "<< endl;
        cin >> yes;
    }while(yes == 1);
    
    



}