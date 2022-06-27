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

int solve( long int x[], int coins,ll int dmon)
{   
  

    int solver[coins+1][dmon+1];
    for (int i =0; i<= dmon; i++ )
    {
        solver[0][i] = 1;
    }

    for (int i =1; i<= coins; i++ )
    {
        solver[i][0] = 0;
    }

    for (int i =1; i<= coins; i++ )
{
        for(int j =1; j <= dmon; j++)
        {               

            if((i == 1) && (j % x[0] == 0))
            {
                solver[i][j]= j/ x[0];
                //cout << solver[i][j] << endl;

            } 
            else if((i == 1) && (j % x[0] != 0))
            {   
                    solver[i][j] = -1;

            } 
            else if(solver[i-1][j] == -1 && j %x[i-1] == 0)
            {
                solver[i][j]= j/ x[i-1];


            } 
            else if(solver[i-1][j] == -1 && j % x[i-1] != 0)
            {
                solver[i][j] = -1;


            }

            else
            {
                if(j >= x[i-1] && solver[i][j-x[i-1]] != -1)
                {                           

                    solver[i][j] = min(solver[i-1][j], solver[i][j- x[i-1]]+1);

                }
                else {

                    solver[i][j] = solver[i-1][j];

                }
            }

        }
    }
    
if(solver[coins][dmon] != 0 && solver[coins][dmon] != -1)
{
cout << solver[coins][dmon];
}
else{
    cout << -1 << endl;
}
return solver[coins][dmon];


}

int main() {
    

    
    
     int numC;
     ll int numA;
     int ans;
     cin >> numC;
     cin >> numA;
    long int temp[numC];
     for(int i =0; i < numC; i++)
     {
         cin >> temp[i];
     }
    sort(temp, temp + numC);

     ans =  solve(temp, numC, numA);

        // cout << "Case #" << t << ": ";
        
    
}