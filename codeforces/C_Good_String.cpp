#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        vector<int > v(10);
        for(int i=0;i<s.size();++i)
        {
            v[i]++;
        }
        sort(v.begin(),v.end());
        if(v[0]==1 && v[1]==1)
        {
            cout<<s.size()-2<<endl;
        }
        
    }
}