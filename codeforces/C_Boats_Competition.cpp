#include<bits/stdc++.h>
#define int long long
using namespace std;

 main()
{   
    int t;
    cin>>t;
    while(t--)
    {   
        int n,sum=0,count1=1,ones=0;
        cin>>n;
        vector<int> w(n+1);
        for(int i=0;i<n;++i)
        {
            int x;
            cin>>x;
            w[x]++;
        }
        
        int max_weight=0,second_max=0;
        for(int i=0;i<n+1;i++)
        {   second_max=max_weight;
            if(w[i]>max_weight)
                max_weight=w[i];
            
        }
        for(int i=0;i<n+1;i++)
        {
            // if(w[i]==max_weight)
            // {
            //     sum+=max_weight;
            // }
            // if(w[i]==1)
            // {
            //     count1++;
            // }
            if(w[i]==1)
            {
                ones++;
                if(ones==n)
                {
                    cout<<n/2<<endl;break;
                }
            }
            
        }
        if(count1<sum){
        sum = sum/2;
        cout<<sum<<endl;}
        else
        {
            count1/=2;
            cout<<count1<<endl;
        }
        
    }
}