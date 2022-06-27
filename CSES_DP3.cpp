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

void solve(ll int x,ll int arr[],ll int y)
{   
    vector<ll int> temp1(y+1,0);
   
    if(arr[0 ]>y)
    {
        cout << 0 << endl;
    }
    else{
    temp1[arr[0]] =1;

    for(int i =1; i <= y- arr[0]; i++)
    {
        for(int j = 0; j <x; j++ )
        {

            if(arr[0] +i - arr[j] ==0)
            {
                temp1[arr[0] +i] += 1 ;
            }
         
            else if (i- arr[j]>=0)
            {
                temp1[arr[0] +i] += temp1[arr[0] +i - arr[j]] % MOD;
            }
            else
            {
            }
        }
    }
        cout << temp1[y] % MOD << endl;

    }
    // for(int i =0; i<= y; i++)
    // {
    //     cout<< temp1[i] << endl;
    // }
    
}

int main() {
    
    int tc ;
    int alpha;
    
    
     ll int numC;
     ll int numD;
     ll int ans;
     cin >> numC;
     cin >> numD;
     ll int temp[numC];
    for(int i =0; i< numC; i++)
    {
        cin >> temp[i];
        
    }
    sort(temp, temp + numC);
    solve(numC,temp, numD);

        // cout << "Case #" << t << ": ";
        
    
}