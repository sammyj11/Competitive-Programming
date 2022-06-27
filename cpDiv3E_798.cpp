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



void solve(int x, ll int b[], string s1, string c1, ll int sm)
{
    bool t = true;
    while(t){
            string s2 = s1;

    for(int i = 0; i < x; i++)
    {
        s1[b[i]-1] = s2[i];
    }
    if(s1 == c1)
    {
        cout << sm << endl;
        t= false;
    }
    sm++;

}

}

int main() {
    
    int tc ;
    int alpha;
     cin >> tc;
    
    for (int t = 1; t <= tc; t++) {
    int numL;
    string k;
    cin >> numL;
    cin >> k;
    string copy = k;
    ll int store = 1;
    ll int a[numL];
    int ans;
       for(int i = 0; i < numL; i++)
       {
           cin >>a[i];
       }
 
         solve(numL, a, k , copy, store);

        // cout << "Case #" << t << ": ";
        
    }
}