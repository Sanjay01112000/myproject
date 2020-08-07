#include<bits/stdc++.h>
using namespace std;

int main(void) {
    string s;
    
    string hero[6];
    int done[7] = {0};
    
    int point = 6;
    hero[0] = "ACov(A)";
    hero[1] = "BCov(B)";
    hero[2] = "CCov(C)";
    hero[3] = "DCov(D)";
    hero[4] = "ECov(E)";
    hero[5] = "FCov(F)";
    float jack = 0;
    while(cin >> s) {
        
        if( s == hero[0] ){
            done[1] = 1;
        }
        else if( s == hero[1] ){
            done[2] = 1;
        }
        else if( s == hero[2] ){
            done[3] = 1;
        }
        else if( s == hero[3] ){
            done[4] = 1;
        }
        else if( s == hero[4] ){
            done[5] = 1;
        }
        else if( s == hero[5] ){
            done[6] = 1;
        }
        else{
            // A C o v ( A )
            // 0 1 2 3 4 5 6
        
        
        char t1 = s[0]; //first char
        if(done[t1+1-'A']==1)
        {
            break;
        }
        else{
        if( s[1] == 'C' ){
            if( s[2] == 'o' ){
                if( s[3] == 'v' ){
                    if( s[4] == '(' ){
                        // 0.5 point
                        if( s[6] == ')' )
                        jack += 0.5;
                    }
                }
            }
        }
        cout<<jack<<endl;
        
         if( s[0] == s[s.length()-2] ){
        //   cout << "ala\n";
          jack += 0.5;
        //   cout << "ja" << jack << "\n";
        } 
        // cout << s.length() - 1 << "\n";
        
        }   
        }
    }
    
    for( int i = 1 ; i < 7 ; i++ ) {
        if( done[i] == 1 ) jack += 1;
    }
    cout << jack << " out of 6\n"; 
    return 0;
}