#include<bits/stdc++.h>

using namespace std;
 int main()
{   
    int t,r=0,m=0;
    cin>>t;
    string bride,groom;
    cin>>bride>>groom;
     for(int i=0;i<groom.size();++i)
     {
         if(groom[i]=='r')
         r++;
         else if(groom[i]=='m')
         m++;
         
     }
    for(int i=0;i<bride.size();++i)
    {
       if(bride[i]=='r')
       {    if(r==0)
           break;
           r--;
           
       }
       else if(bride[i]=='m' )
       {
           
           if(m==0)
           break;
           m--;
       }
    }
    cout<<r+m<<endl;
    
    return 0;
}