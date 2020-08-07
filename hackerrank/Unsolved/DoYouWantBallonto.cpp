#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n;
    cin>>n;
    vector<int> v;
    int last=0,res=0,value=1;
    
    for(int i=0;i<n;++i)
    {
        int x;
        cin>>x;
        v.push_back(x);
    }
     int size=v.size();
    for(int i=0;i<size;)
    {   
        
                        while(i<size && v[i]>last)
                    {
                        res+=value;
                        value++;
                        last=v[i];
                        i++;
                    }
                        last=0;value=1;
                      
         
   
    }
     cout<<res<<endl;
    return 0;
}
