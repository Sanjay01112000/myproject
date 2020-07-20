//created by sanjay
#include<iostream>
#include<stack>
//Don't forget to add stack library

using namespace std; 

// MAX is size of the stack;
#define MAX 5
int arr[MAX];                                                                                      //|_3_|
//top always points to the first element of the stack, top points to 3                             //|_1_|
int top=-1;                                                                                        //|_2_|
//1 -->True && 0-False


bool isEmpty() 
{ 
    //checks whether the stack is empty or not, return true if stack is empty otherwise return false
	return (top < 0); 
} 

bool isFull()
{
    //check whether the stack is full or not, return true if stack is full otherwise return false
    return top==(MAX-1);
}
void push(int x) 
{ 
    //add element at top of the stack
	if (isFull()) { 
		cout << "Stack Overflow\n"; 
	} 
	else { 
		arr[++top] = x; 
		cout << x << " pushed into stack\n"; 
	} 
} 

int pop() 
{ 
    //removes element from top of the stack
	if (isEmpty()) { 
		cout << "Stack Underflow\n"; 
		return 0; 
	} 
	else { 
		int x = arr[top--]; 
		return x; 
	} 
} 
int peek() 
{ 
    //return top most element of the stack
	if (isEmpty()) { 
		cout << "Stack is Empty"; 
		return 0; 
	} 
	else { 
		int x = arr[top]; 
		return x; 
	} 
} 
int main() 
{   //To check all the function
    cout<<bool(isEmpty())<<endl;
	push(1);
    push(2);
    push(3);
    push(4);
    push(5);
    push(6);
    cout<<isFull()<<endl;
    cout<<pop()<<" poped from stack\n";

	return 0; 
} 
