#include<iostream>

using namespace std;
int aglobal[3];
int a=10;
void Printing ( )
{
    cout<<a<<endl;

}
int main()
{
    int alocal[3];
    int a=5;
    Printing();
    cout<<"Algobal is: "<<aglobal[0]<<" "<<aglobal[1]<<" "<<aglobal[2]<<endl;
    cout<<"Algobal is: "<<alocal[0]<<" "<<alocal[1]<<" "<<alocal[2]<<endl;
    return 0;    
}
