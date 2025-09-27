/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include "linkedlist.h"
using namespace std;
int main()
{
    linkedlist l;
    int choice;
    do
    {
        cout<<"1.Insert the numbers"<<endl;
        cout<<"2.Insert At the Start"<<endl;
        cout<<"3.Display the data of all nodes"<<endl;
        cout<<"4.Delete the first node"<<endl;
        cout<<"5.Count the nodes being used"<<endl;
        cout<<"6.Largest value"<<endl;
        cout<<"7.Minimum value"<<endl;
        cout<<"8.Delete node which is the last"<<endl;
        cout<<"=========================="<<endl;
        cout<<"enter choice:";
        cin>>choice;
        if(choice==1)
        {
            l.Insert(15);
            l.Insert(42);
            l.Insert(512);
            l.Display();
        }
        else if(choice==2)
        {
            l.Insert_At_Start(45);
            l.Insert_At_Start(65);
            l.Insert_At_Start(56);
            l.Display();
        }
        else if(choice==3)
        {

            l.Delete();
        }
        else if(choice==4)
        {
            l.Count();
        }
        else if(choice==5)
        {
            l.largest();
        }
        else if(choice==6)
        {
            l.minimum();
        }
        else if(choice==7)
        {
            l.deletenode();
            l.Display();
        }
        else
            cout<<"invalid choice"<<endl;
    }while(choice !=8);

    return 0;
}