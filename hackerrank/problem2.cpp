
#include<bits/stdc++.h>

using namespace std;
int solve(int x)
{
    vector<int> check;
    check.push_back(x/100);
    x=x%100;
    check.push_back(x/10);
    check.push_back(x%10) ;
    int res=(*max_element(check.begin(),check.end()))*11 + (*min_element(check.begin(),check.end()))*7;
    res=res%100;
   // cout<<res<<" ";
    return res;
    
}
 int main()
{   
    int n,pair1=0,pair2=0;
    cin>>n;
    vector<int> odd,even,odd_count(10),even_count(10);
    for(int i=0;i<n;++i)
    {
        int x,t;
        cin>>x;
        t=solve(x);
        if((i+1)%2==0)
        even.push_back(t);
        else
        odd.push_back(t);
    }
    /*cout<<endl;
     for(int i=0;i<odd.size();++i)
    {
        cout<<odd[i]<<" ";
    }cout<<endl;
     for(int i=0;i<even.size();++i)
    {
        cout<<even[i]<<" ";
    }*/
   int odd_size=odd.size();

    for(int i=0;i<odd_size;++i)
    {
        int x=odd[i]/10;
        odd_count[x]++;
    }
    //cout<<endl;
   int even_size=even.size();
     for(int i=0;i<even_size;++i)
    {
        int x=even[i]/10;
        even_count[x]++;
    }
    /*for(int i=0;i<odd_count.size();++i)
    {
        cout<<odd_count[i]<<" ";
    }cout<<endl;
     for(int i=0;i<even_count.size();++i)
    {
        cout<<even_count[i]<<" ";
    }
    */
   int odd_count_size=odd_count.size();
    for(int i=0;i<odd_count_size;++i)
    {
            if(odd_count[i]>1)
            pair1+=(odd_count[i] - 1);
            //cout<<pair1<<endl;
    }
    //cout<<" "<<endl;
   int even_count_size=even_count.size();
     for(int i=0;i<even_count_size;++i)
    {
            if(even_count[i]>1)
            pair2+=(even_count[i] - 1);
            //cout<<pair2<<endl;
    }
    cout<<pair1+pair2<<endl;
    
    
    return 0;
}