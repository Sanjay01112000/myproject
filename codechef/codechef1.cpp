#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        vector<int> v;
        long long l=0;
        cin>>n;
        for(int i=0;i<n;++i)
        {   int x;
            cin>>x;
            v.push_back(x);
        }
       
        for(int i=0;i<n ;++i)
        {  
            for(int j=n-1;j>=0;j--)
            {
            long long x=ceil((pow(10,j)));
            l+=v[i]*x;
            // cout<<j<<" "<<x<<endl;
            }
           
        }
         cout<<(l*2)<<endl;
        
    }

    return 0;


}