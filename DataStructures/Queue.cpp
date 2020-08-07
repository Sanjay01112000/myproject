//Linear Queue Implementation using Array
#include<bits/stdc++.h>
using namespace std;
#define size 100
 int example_queue[size];
//declaring two variables front and rear 
int front=-1,rear= -1;
bool IsFull()
{
    if(rear == size-1)
    return true;
    return false;
}
void Enqueue()
{   int input_value;
    cout<<"Enter a value : ";
    cin>>input_value;
    if(IsFull())
    {
        cout<<"Queue is Full.you cannot insert an element \n";
    } 
    else
    example_queue[++rear] = input_value;
}
bool IsEmpty()
{
    if(rear == front)
    return true;
    return false;
}
void Dequeue()
{   int return_value=0;
    if(IsEmpty())
    {
        cout<<"Queue is empty.Insert an element \n";
    }
    else
    {   return_value = example_queue[++front];
        cout<<return_value<<" is deleted from queue \n";
    }
    
}
void display()
{
    if(IsEmpty())
    {
        cout<<"Queue is empty.Enter a value in the queue \n";
    }
    else
    {
        cout<<"--------------Queue element--------------\n";
        for(int temp_iterator=front + 1 ;temp_iterator<=rear;++temp_iterator)
        {
            cout<<example_queue[temp_iterator]<<" \n";
        }
    }
}

int main()
{   
    int operation_choice=0;
    cout<<"These are opertion you can do queue \n 1=>Push to Queue \n 2=>Pop from queue \n";
    cout<< " 3=>Display content of the queue \n 4=> Exit\n";
    while (true)
    {
       //this a loop which will take user option such as 1,2,3,4 and perform the task mapped with the particular  option
      int user_choice;
       cout<<"Enter your option: ";
       cin>>user_choice;
        switch(user_choice)
        {
            case 1:
                    Enqueue();
                    break;  
            case 2:
                    Dequeue();       
                    break;
            case 3:
                    display();
                    break;
            case 4:
                    exit(0);
            default:
                cout<<" Wrong choice for operation \n";
        }
    }
    
    return 0; 
}