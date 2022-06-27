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

int solve(int x)
{   ll int ansS[x];
    for(int i = 0; i < x ; i++)
    {
        if(i == 0)
        {
            ansS[i] = 1;
            

        }
        else if(i ==1)
        {
            ansS[i] = 2;
        }
         else if(i <=5)
        {
            ansS[i] = 2*ansS[i-1];
        }
        else
        {
           ansS[i] =( ansS[i-1]+ansS[i-2]+ansS[i-3]+ansS[i-4]+ansS[i-5]+ansS[i-6])%MOD; 
        }
    }
    if(x != 1)
    {
    cout << ansS[x-1] << endl;
    return ansS[x-1];
    }
    else{
        cout << 1;
        return 1;
    }
}

int main() {
    
    int tc ;
    int alpha;
    
    
     int numQ;
     int ans;
        cin >> numQ;
    

        ans =  solve(numQ);

        // cout << "Case #" << t << ": ";
        
    
}