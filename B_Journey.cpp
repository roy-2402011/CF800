/*************************************************************************
*      Author : PRASANJIT ROY                                            *
*      Date   : 30-03-2025                                               *
*      https://codeforces.com/problemset/problem/2051/B                  *
*      Notes:                                                            *
*      - Binary Search  BFS / DFS / DP / Grid / Graph etc.               *
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

void solve()
{
    ll n,a,b,c;
    cin>>n>>a>>b>>c;
    ll mod=n%(a+b+c);
    ll d = n/(a+b+c);
    if(mod==0) cout<<d*3<<endl;
    else if(mod<=a) cout<<d*3+1<<endl;
    
    else if(mod<=a+b) cout<<d*3+2<<endl;

    else cout << d*3 + 3 << endl; 

}
int main() {
     ll t;
     cin>>t;
     while(t--){
        solve();
     }
    return 0;
}
