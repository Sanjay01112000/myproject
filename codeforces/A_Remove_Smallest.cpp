#include<bits/stdc++.h>
using namespace std;
int main()
{   
    int t;
    cin>>t;
    while(t--)
    {
        
        int n,r=0;
        cin>>n;
        vector<int> v;
        for(int i=0;i<n;++i)
        {
            int x;
            cin>>x;
            v.push_back(x);
        }
        sort(v.begin(),v.end());
        for(int i=0;i<n-1;++i)
        {   
            
                if((v[i+1]-v[i])>1)
                {
                    r=1;     
                }
               
           
    }
    if(r==1 )
    cout<<"NO"<<endl;
    else
    {
        cout<<"YES"<<endl;
    }
    

}
}