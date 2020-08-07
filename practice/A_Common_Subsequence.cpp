#include <bits/stdc++.h>
using namespace std;


int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,m,k=0,res=0;
        cin>>n>>m;
        vector<int > a,b;
        for(int i=0;i<n;++i)
        {

            int x;
            cin>>x;
            a.push_back(x);
        }
        for(int j=0;j<m;++j)
        {

            int x;
            cin>>x;
            b.push_back(x);
        }
        sort(a.begin(),a.end());
        for(int i=0;i<a.size();++i)
       {   int lowest=a[i];
            for(int j=0;j<b.size();++j)
            {
                if(lowest == b[j])
                {
                    k=1;
                    res = lowest;
                    cout<<res<<endl;
                    break;

                }
                if(k==1)
                cout<<res<<endl;
                break;
            }
        }

        if(k==1)
       { cout<<"YES"<<endl;
        cout<<1<<" "<<res<<endl;
         }
         else
         {
             cout<<"NO"<<endl;
         }



     }

    return 0;
}
