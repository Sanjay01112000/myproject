#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll i, j, k, t, ip;

    cin >> t;
    while (t--)
    {
        ll n, p, b, c, d, x, y, z, q, r, m = 0;
        double d1, d2;
        string s;
        vector<ll> v;
        cin >> n;
        ll a[n];
        for (i = 0; i < n; i++)
        {
            cin >> a[i];
            a[i] -= (i + 1);
            if (a[i] > 0)
                m = a[i];
        }
        m = m * 1000;
        
        if (m > 2000)
        {
            cout << "Too Much\n";
        }
        else
        {
            cout << m << "\n";
        }
    }
    return 0;
}