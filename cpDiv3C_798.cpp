#include <bits/stdc++.h>


using namespace std;

#define ar array
#define ll long long
#define ld long double
#define sza(x) ((int)x.size())
#define all(a) (a).begin(), (a).end()

const int MAX_N = 1e5 + 5;
const ll MOD = 1e9 + 7;
const ll INF = 1e9;
const ld EPS = 1e-9;



void solve(ll int x,  ll int a[], ll int b[])
{
ll int d[x];
for (int c =0; c < x ; c++){
    if(c == 0)
    {
        d[0] = b[0] - a[0];
    }
    else
    {
        if(b[c-1] > a[c])
        {
            d[c] = b[c]-b[c-1] ;
        }
        else
        {
            d[c] = b[c]-a[c];
        }
    }
}
for(int k = 0; k<x ; k++)
{
    cout << d[k] << " ";
}
cout << endl;
}

int main() {
    
    int tc ;
    int alpha;
     cin >> tc;
    
    for (int j = 1; j <= tc; j++) {
    ll int numL;
    cin >> numL;

    ll int t[numL];
    ll int f[numL];


     int ans;
       for(int i = 0; i < numL; i++)
       {
           cin >>t[i];
       }
        for(int g = 0; g < numL; g++)
       {
           cin >>f[g];
       }
         solve(numL, t, f);

        // cout << "Case #" << t << ": ";
        
    }
}