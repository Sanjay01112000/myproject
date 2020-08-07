#include<bits/stdc++.h>
#define int long long
using namespace std;

 main()
{   
    int t;
    cin>>t;
    while(t--)
    {   
        int n,sum=0;
        cin>>n;
        vector<int>a,b;
         for(int i=0;i<n;++i)
        {
            int x;
            cin>>x;
            a.push_back(x);
        }
        int min_a=*min_element(a.begin(),a.end());
          for(int i=0;i<n;++i)
        {
            int x;
            cin>>x;
            b.push_back(x);
        }
        int min_b=*min_element(b.begin(),b.end());
        for(int i=0;i<n;++i)
        {
            int temp_a=0,temp_b=0;
            temp_a=a[i]-min_a;
            temp_b=b[i]-min_b;
            if(temp_a < temp_b)
            sum+=temp_b;
            else
            sum+=temp_a;
        }
        cout<<sum<<endl;
    }
   
}
