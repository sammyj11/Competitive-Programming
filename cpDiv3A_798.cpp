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

void solve(int x )
{   ll int h1 =0;
    ll int h2 =0;
    ll int h3 = 0;
//    if(x== 6)
//    {
//        h1 = 3;
//        h2 = 2 ;
//        h3 = 1;
//        cout << h2 << " " << h1 << " "<< h3 << " " << endl;
//    } 
   if(x== 7)
   {
       h1 = 4;
       h2 = 2 ;
       h3 = 1;
       cout << h2 << " " << h1 << " "<< h3 << " " << endl;
   }
    else if(x % 3 == 0)
   {
       h1 = (x+3)/3;
       h2 = h1-1;
       h3 = h2-1;
       cout << h2 << " " << h1 << " "<< h3 << " " << endl;

   }
      else if(x % 3 == 1)
   {
       h1 = (x+2)/3+1;
       h2 = h1-1;
       h3 = h2-3;
       cout << h2 << " " << h1 << " "<< h3 << " " << endl;

   }
      else if(x % 3 == 2)
   {
       h1 = (x+1)/3 +1;
       h2 = h1-1;
       h3 = h2-2;
       cout << h2 << " " << h1 << " "<< h3 << " " << endl;

   }
   else 
   {
       
   }

}

int main() {
    
    int tc ;
    int alpha;
    cin >> tc;
    
    for (int t = 1; t <= tc; t++)
    {
     ll int numL;
    
     ll int ans;
     cin >> numL;
      solve( numL);

    }


}