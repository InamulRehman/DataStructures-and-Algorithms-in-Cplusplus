#include<iostream>
using namespace std;
class Node 
{    
    public:
        int key;
        int data;
        Node * next;
        Node()
        {
            key = 0;
            data = 0;
            next = NULL;
        }
        Node(int k, int d)
        {
            key = k;
            data = d;
        }
};
class SinglyLinkedList
{
    public:
        Node * head;
        SinglyLinkedList()
        {
            head = NULL;
        }
        SinglyLinkedList(Node *n)
        {
            head = n;
        }
        //Check if node exists using key value
        Node * nodeExists( int k)
        {
            Node *temp = NULL;
            Node *ptr = head;
            while (ptr != NULL)
            {
               if(ptr->key == k)
               {
                   temp = ptr;
               }
               ptr = ptr->next;
            }
            return temp;
        }
        //Append a node to the list :  Attach a node at the end
        void appendNode(Node *n)
        {
            if(nodeExists(n->key) != NULL)
            {
                cout << "Node already exists with key value  : " << n->key << " Append another node with different key value. " << endl;
            }
            else
            {
                if (head == NULL)
                {
                    head = n;
                    cout << "Node Appended" << endl;
                }
                else
                {
                    Node *ptr = head;
                    while (ptr->next != NULL)
                    {
                        ptr = ptr ->next;
                    }
                    ptr->next = n;
                    cout << "Node Appended" << endl;
                    
                }
            }
        }

        //Prepend node  : Attach a node at the start
        void prependNode(Node *n)
        {
            if(nodeExists(n->key) != NULL)
            {
                cout << "Node already exists with key value  : " << n->key << " Append another node with different key value. " << endl;
            }
            else
            {
                n->next = head;
                head = n;
                cout << "Node prepended" << endl;
            }
        }

        //Insert node after specified node in linked list 
        void insertNodeAfter(int k, Node *n)
        {
            Node *ptr = nodeExists(k);
            if (ptr == NULL)
            {
                cout << "No node exists with the key value : " << k << endl;
            }
            else
            {
                if(nodeExists(n->key) != NULL)
                {
                    cout << "Node already exists with key value  : " << n->key << " Append another node with different key value. " << endl;
                } 
                else
                {
                    n->next = ptr->next;
                    ptr->next = n;
                    cout << "Node inserted. " << endl; 
                }
            }
        }
        //Delete node by key value
        void deleteNodeByKey(int k)
        {
            if (head == NULL)
            {
                cout << "List is empty, cannot delete it. "<< endl;
            }
            else if(head!=NULL)
            {
                if (head->key == k)
                {
                    head = head->next;
                    cout << "Node Unlinked with key value " << k << endl;
                }
                else
                {
                    Node *temp = NULL;
                    Node *prevptr = head;
                    Node *curptr = head->next;
                    while(curptr != NULL)
                    {
                        if(curptr->key == k)
                        {
                            temp = curptr;
                            curptr = NULL;
                        }
                        else
                        {
                            prevptr = prevptr->next;
                            curptr = curptr->next;
                        }
                    }
                    if(temp!=NULL)
                    {
                        prevptr->next = temp->next;
                        cout << "Node unlinked with key value : " << k <<endl;
                    }
                    else
                    {
                        cout << "Node does not exist with key value : " << k << endl;
                    }


                }
            }

        }

        //update node
        void updateNodeByKey(int k, int d)
        {
            Node *ptr = nodeExists(k);
            if (ptr != NULL)
            {
                ptr->data = d;
                cout << "Node data updated successfully. " << endl;
            }
            else
            {
                cout << "Node does not exists with this value :  " << k  << endl;
            }
        }

        // printing values in singly linked list
        void printList()
        {
            if (head == NULL)
            {
                cout << "No node in singly linked list. " << endl;
            }
            else
            {
                cout << "\nValues in singly lined list are  : ";
                Node *temp = head;
                while (temp != NULL)
                {
                   cout << "(" << temp->key << " , " <<temp -> data << ")-->";
                   temp = temp->next;
                }
                
                
            }

        }



};
int main ()
{
    SinglyLinkedList s;
    int option, k1, key1,data1;    
    do
    {
        cout << "\nWhat do you want to perform. Select one option. Enter 0 to exit." << endl;
        cout << "1. AppendNode() "<<endl;
        cout << "2. prependNode() " << endl;
        cout << "3. insertNodeAfter() " << endl;
        cout << "4. deleteNodeByKey() " << endl;
        cout << "5. updateNodeByKey() " << endl;
        cout << "6. print() " << endl;
        cout << "7. clear screen " <<endl << endl;

        cin >> option;
        Node *n1 = new Node();
        switch (option)
        {
        case 0:
            break;
        case 1:
            cout << "Append node operation \n Enter data and key of node to be appened." << endl;
            cin >> key1;
            cin >> data1;
            n1->key =key1;
            n1->data = data1;
            s.appendNode(n1);
            break;
        case 2:
            cout << "Prepend node operation \n Enter data and key of node to be prepend node." << endl;
            cin >> key1;
            cin >> data1;
            n1->key =key1;
            n1->data = data1;
            s.prependNode(n1);
            break;
        case 3:
            cout << "Insert node after a particular node. " << endl;
            cin >> k1;
            cout << "Enter key and data of the new node first: " << endl;
            cin >> key1;
            cin >> data1;
            n1->key= key1;
            n1->data= data1;
            s.insertNodeAfter(k1,n1);
            break;
        case 4:
            cout << "Enter key value of node to be deleted : " << endl;
            cin >> k1;
            s.deleteNodeByKey(k1);
            break;
        case 5:
            cout << "Enter key value and new data to be updated. " << endl;
            cin >> key1;
            cin >> data1;
            s.updateNodeByKey(key1,data1);
            break;
        case 6:
            s.printList();
            break;
        case 7:
            system("cls");
            break;
        default:
            cout << "Please enter a valid choice." << endl;
            break;
        }

    } while (option != 0);
    

    return 0;
}