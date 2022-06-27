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

void solve(ll int a[], ll int b[], ll int x )
{
    int diff;
    bool set = true;
    int max = 0;
    bool t = true;
    for(int i =0; i < x; i++)
    {   
           if(b[i] > a[i])
         {
                cout << "NO" << endl;
                 t = false; 
                 break;
         }
         else if(b[i] == 0 && set)
         {
             if(a[i]> max)
             {
                 max = a[i];
             }
         }
        else if(b[i] != 0 && set  )
        {
            diff = a[i] - b[i];
            set = false;
            if(diff < max)
            {
                 cout << "NO" << endl;
                 t = false;
                 break;  
            }
        }
         
         else if(b[i] != 0)
         {
             if(diff != a[i] - b[i] )
             {
                 cout << "NO" << endl;
                 t = false;
                 break;
             }
          
         }
         else if(b[i] == 0)
         {
             if(diff < a[i])
                        {
                 cout << "NO" << endl;
                 t = false;
                 break;
             }
         }
       
    }
    if(t)
    {
        cout << "YES" << endl;
    }
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
     ll int storeA[numL];
     ll int storeB[numL];



       for(int i = 0; i < numL; i++)
       {
           cin >>storeA[i];
       }
        for(int i = 0; i < numL; i++)
       {
           cin >>storeB[i];
       }
          solve(storeA, storeB, numL);

        // cout << "Case #" << t << ": ";
        
    }
}