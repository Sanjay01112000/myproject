#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int> v(101);
    for(int i=0;i<n;i++)
    {
        int x;cin>>x;
        v[x]++;
    }
    int left=0,max=0,res=0;
    n=v.size()-1;
     for(int i=0;i<n;i++)
    {
        if(v[i] == 0)
        continue;

        else{
        
        if(i==0)
        left=0;
        else 
        left=v[i-1];
       res=left+v[i];
        if(res>=max)
        max = res;

    }
    cout<<i<<" "<<max<<endl;
    }
    cout<<max<<endl;
}