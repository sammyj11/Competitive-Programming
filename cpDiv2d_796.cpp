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



int solve(ll int x,ll int a[], ll int b)
{
    ll int max =0;
    ll int temp=0;
    ll int cnt=0;
    ll int anss=0;

    if(x < b){
    for (int i =0; i<b; i++ )
    {
        if(cnt < x)
        {
            max+= a[i];
            temp += a[i];
            cnt++;
            
        }
        else
        {
            if(temp + a[i] - a[i-x]> max)
            {
                max = temp + a[i] - a[i-x];
                temp = temp + a[i] - a[i-x];
            }
            else{
                temp = temp + a[i] - a[i-x];
            }
        }
        
    }
        anss = max + x*(x-1)/2;
        cout << anss << endl;
    }
    else{
 
         anss = b*(x-b) + b*(b-1)/2 ;

        for(int k=0; k < b ; k++){
            anss += a[k];
        }
        cout << anss << endl;
    }
    return anss;
}

int main() {
    
    int tc ;
    int alpha;
     cin >> tc;
    
    for (int t = 1; t <= tc; t++) {
     ll int numL;
     ll int subL;
     ll int ans;
     cin >> numL;
     cin >> subL;
     ll int storeMush[numL];


       for(int i = 0; i < numL; i++)
       {
           cin >>storeMush[i];
       }
        ans =  solve(subL, storeMush, numL);

        // cout << "Case #" << t << ": ";
        
    }
}