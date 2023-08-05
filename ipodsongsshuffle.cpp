#include <bits/stdc++.h>
#include <string>

using namespace std;

class Node
{
    public:
        string info;
        Node* next;

        Node()
        {
            info = "";
            next = NULL;
        }
};

class Stack
{
    public:
        Node* top;

        Stack()
        {
            top = NULL;
        }

        //Create a stack of a perticular size
        void  createSTACK()
        {
            int n=0;
            string str="";
            cout<<"Enter the number of elements you want in the Stack: ";
            cin>>n;
            while(n != 0)
            {
                cout<<"Enter the song name: ";
                fflush(stdin);
                getline(cin, str);
                push(str);
                n--;
            }
        }

        // Push an element in the stack
        void push(string str)
        {
            Node* cur = new Node();
            if (cur==NULL)
            {
                cout<<"Memory Overflow"<<endl;
                return;
            }

            cur->info=str;
            cur->next=top;
            top=cur;

            cout<<"One element added to the playlist."<<endl;
        }

        // Pop an element from the stack
        void pop()
        {
            if(top == NULL)
            {
                cout<<"Stack Underflow"<<endl;
                return;
            }
            Node* cur = top;
            cout<<"The element "<<cur->info<<" is popped."<<endl;
            top=top->next;
            cur->next=NULL;
        }

        //Display the stack
        void show()
        {
            if (top == NULL)
            {
                cout<<"Nothing to display.\tStack in empty."<<endl;
                return;
            }
            Node* cur=top;
            cout<<"Top <-- ";
            while(cur != NULL)
            {
                cout<<cur->info<<" <-- ";
                cur=cur->next;
            }
            cout<<"(0)"<<endl;
        }
};

//Driver Code
int main()
{
    Stack stack;
    int choice=-1;
    string str = "";
    cout<<"SONG STACK.\n"<<endl;
    cout<<endl;
    while(choice != 4)
    {
        if (choice == -1)
        {
            for(int i=0;i<33;i++) {cout<<"-";}
            cout<<"Menu";
            for(int i=0;i<33;i++) {cout<<"-";}
            cout<<endl;
            cout<<"Enter 0 to make a stack of a perticular size."<<endl;
            cout<<"Enter 1 for Push."<<endl;
            cout<<"Enter 2 for Pop."<<endl;
            cout<<"Enter 3 to show."<<endl;
            cout<<"Enter 4 to exit."<<endl;
        }
        cout<<"\nEnter -1 to view the menu "<<endl;
        cout<<"\nEnter your choice: ";
        cin>>choice;

        switch(choice)
        {
            case 0:
                stack.createSTACK();
                break;
            case 1:
                cout<<"Enter the song name: ";
                fflush(stdin);
                getline(cin, str);
                stack.push(str);
                break;
            case 2:
                stack.pop();
                break;
            case 3:
                stack.show();
                break;
            case 4:
                cout<<"\nThank you for using the program.\n\nProgrammer:- UJJWAL SRIVASTAVA\n-------------------EXIT-------------------"<<endl;
                break;
            case -1:
                break;
            default:
                cout<<"\nInvalid Input!!!!\nEnter a valid choice."<<endl;
                break;
        }
    }
    return 0;
}