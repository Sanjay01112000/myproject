#include<iostream>
#include<stack>
//Don't forget to add stack library when you are implementing std::stack
#include<vector>
#include<deque>

using namespace std;
//Note : Stack works in  LIFO(Last In First Out)  type
int main()
{
    //Creates a empty stack
    stack<int> first_stack;

    //creating a stack and initializing using vector object
    vector<int> v(5,10);
    stack<int,vector<int>> second_stack(v);

    //Creating a stack and initializing using deque object
    deque<int> temp_queue(4,5);
    stack<int , deque<int>> third_stack(temp_queue);

    //stack::size Returns the number of elements present in the stack
    cout<<"Size of first_stack is "<<first_stack.size()<<endl;  //return 0
    cout<<"Size of second_stack is "<<second_stack.size()<<endl; //return 5
    cout<<"Size of third_stack is "<<third_stack.size()<<endl; //return 4

    //stack::empty Returns whether the stack is empty: i.e. whether its size is zero.
    if( first_stack.empty())
    {
        cout<<"Oops stack is empty "<<endl;
    }
    else 
    {
        cout<<"you are lucky stack is not empty "<<endl;
    }

    //Now let's insert some elements into the  stack
    //stack::push is use to inset a new element in the stack 
    for(int i=1;i<=5;++i)
    first_stack.push((i*10));
    //adds 10 20 30 40 50 in first_stack

    //stack::top return a reference to the top(or newest ) most element of  the stack
    cout<<"top-most element of first_stack is "<<first_stack.top()<<endl;

    //stack::pop Removes the element on top of the stack, effectively reducing its size by one
    cout<<first_stack.top()<<" is deleted from top of the first_satck"<<endl;
    first_stack.pop();


    //Let's verify, whether the pop() effectively reduces the size of stack or not
    cout<<"Size of first_stack before popping the elements  "<<first_stack.size()<<endl;  //return 4
    //printing all the elements of first_stack
    while (!first_stack.empty())
    {
        cout  << first_stack.top() << ' ';
        first_stack.pop();
    }
    cout<<endl;
    cout<<"Size of first_stack after popping the elements  "<<first_stack.size()<<endl;  //return 5

}