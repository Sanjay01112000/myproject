#include<bits/stdc++.h>
//#define endl   '\n'
using namespace std;

int main()
{
    #ifndef ONLINE_JUDGE 
	  
	    // For getting input from input.txt file 
	    freopen("input2.txt", "r", stdin); 
	  
	    // Printing the Output to output.txt file 
	    freopen("output2.txt", "w", stdout); 
	  #endif
    int t;
    cin>>t;
    for(int tt=1;tt<=t;++tt)
    {   
        int n;
        cin>>n;
        vector<int> v(2);
        string stone;
        cin>>stone;
        for(int i=0;i<n;++i)
        {
            if(stone[i]=='A')
            v[0]++;
            else
            {
                v[1]++;
            }
        }
       
        int minimum= min(v[0],v[1]);
         cout<<minimum<<endl;
        minimum*=2;
        int maximum= max(v[0],v[1]);
         cout<<maximum<<" "<<minimum<<endl;
        cout<<"Case #"<<tt<<": ";
        if(maximum <= minimum)
        {
            cout<<'Y'<<endl;
        }
        else
        {
            cout<<'N'<<endl;
        }
        
    }
    return 0;
}