// First CP template
 
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
 
int convPow(int x)
{
    int ans = 0;
   while(x >0)
   {
       if ( x % 2 == 0 && x > 0) 
       {
           ans +=1;
       }
       else
       {
           break;
       }
       x = x/2;
   }
return ans;
}
 
int solve(int t[] , int y)
{
 for(int i =0; i < y ; i++)
 {
     t[i] = convPow(t[i]);
 }
 vector<int> vect;
 int min = 1000000000;
 int freq = 0;
 int finalAns = 0;
 bool oddd = false;
 for(int j = 0; j < y;j++)
 { 
 
     if(t[j] > 0)
     {
         vect.push_back(t[j]);
         if(t[j] < min )
         {
             min = t[j];
             freq = 1;
         }
         else if(t[j] == min){
             freq+=1;
         }
         else
         {
            
         }
         
     }
     else{
oddd = true;
     }
 }
 if(!oddd){
    if(vect.size() == 0)
    {
        finalAns = 0;
    }
 else 
 {
     finalAns = (vect.size() - 1)+ min;
 }
 /*else {
     int rem = vect.size() % freq ;
    //  finalAns = ((vect.size()/freq))*freq +min*(freq);
    finalAns = (vect.size()/freq)*( rem) + ((vect.size()/freq) - 1)*(freq - rem)  +min*(freq); 
 }*/
 }
 else {
     finalAns = vect.size();
 }
 return finalAns;
}
 
int main() {
    
    int tc ;
    int alpha;
     cin >> tc;
    for (int t = 1; t <= tc; t++) {
        int x;
        cin >> x;
        int testVal[x];
        for(int i =0; i < x ; i++)
        {
           cin >> testVal[i];
        }
        cout << solve(testVal,x)<< endl;
 
        // cout << "Case #" << t << ": ";
        
    }
}