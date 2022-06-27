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



int solve(int x, string s, string a[])
{

}

int main() {
    
    int tc ;
    int alpha;
     cin >> tc;
    
    for (int t = 1; t <= tc; t++) {
         int numOps;
     string storeStrings[2*numOps];
     int ans;
        cin >> numOps;
       for(int i = 0; i < 2*numOps; i++)
       {
           cin >>storeStrings[i];
       }
       string finalString ;
       cin >> finalString;
        ans =  solve(numOps, finalString, storeStrings);

        // cout << "Case #" << t << ": ";
        
    }
}