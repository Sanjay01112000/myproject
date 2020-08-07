#include<bits/stdc++.h>
//#define endl   '\n'
using namespace std;

int main()
{
    #ifndef ONLINE_JUDGE 
	  
	    // For getting input from input.txt file 
	    freopen("input.txt", "r", stdin); 
	  
	    // Printing the Output to output.txt file 
	    freopen("OgOutputBNew1.txt", "w", stdout); 
	  
    int t;
    cin>>t;
    for(int tt=1;tt<=t;++tt)
    {   
        
	#endif
        int n;
        cin>>n;
        string arrival,departure;
        cin>>arrival>>departure;
        int res[n][n]={0};
        //vector<int > v(n)(n);
        //this for loop is to make all value of array to zero
        for(int i=0 ;i<n;++i)
        {
            for(int j=0;j<n;++j)
            {
                res[0][j]=0;
            }
        }
        for(int i=0 ;i<n;++i)
        {
            res[i][i]= 1;
            //this if checks whether the flight can departure from a ith country or not
            if(departure[i] == 'Y')
            {   //this for loop iterate right of middle element 
                for(int j=i+1; j<n;j++)
                {
                    if(departure[j-1]== 'Y' && arrival[j]=='Y')
                    res[i][j]=1;
                    else
                    {
                        break;
                    }
                }
                //this for loop iterates over left of middle element 
                for(int k=i-1;k>=0;k--)
                {
                    if(departure[k+1]== 'Y' && arrival[k]=='Y')
                    res[i][k]=1;
                    else
                    {
                        break;
                    }

                }

            }
        }
        cout<<"Case #"<<tt<<":"<<endl;
         for(int i=0 ;i<n;++i)
        {   
            for(int j=0;j<n;++j)
            {
                if(res[i][j] == 1)
                {
                    cout<<'Y';
                }
                else
                {
                    cout<<'N';
                }
                
            }

            cout<<endl;
        }
   }
}