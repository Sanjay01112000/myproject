#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int chef_result=0,rick_result=0;
        int chef_power,rick_power;
        cin>>chef_power>>rick_power;
        
        chef_result =chef_power/9;
        rick_result = rick_power/9;
        chef_power %=9;
        rick_power %=9;
        if(chef_power != 0)
        chef_result++;
        if(rick_power != 0)
        rick_result++;

        if(chef_result == rick_result)
        cout<<"1 1"<<endl;
        else if( chef_result <rick_result)
        cout<<"0 "<<chef_result<<endl;
        else
        cout<<"1 "<<rick_result<<endl;
    }
    return 0;
}
        