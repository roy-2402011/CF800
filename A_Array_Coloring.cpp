/*************************************************************************
*      Author : PRASANJIT ROY                                            *
*      Date   : 27-02-2025                                               *
*      Problem:  https://codeforces.com/problemset/problem/2205/G        *
*      Notes:                                                            *
*      - BFS / DFS / DP / Grid / Graph etc.                              *
*************************************************************************/

#include <bits/stdc++.h>
using namespace std;

typedef vector<int> vi;
typedef vector<vi> vvi;
typedef pair<int, int> ii;
typedef vector<ii> vii;
typedef long long ll;
typedef vector<ll> vll;
typedef vector<vll> vvll;
typedef double ld;
vector<bool>t(1005);
void solve()
{
    int n;
    cin>>n;
    vector<int>v(n);
     for(int i=0;i<n;i++)
     {
        cin>>v[i];
        
     }
    
     bool flag = true;
     for(int i=0; i<n-1 ;i++)
     {  
      if(v[i] % 2 == v[i+1] % 2)
        {
            flag =false;
            break;
        }
     }
     if(flag) cout<<"YES"<<endl;
     else cout<<"NO"<<endl;

}
int main() {
     int t;
     cin>>t;
     while(t--){
        solve();
     }
    return 0;
}
