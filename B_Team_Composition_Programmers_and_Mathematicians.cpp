/*************************************************************************
*      Author : PRASANJIT ROY                                            *
*      Date   : 30-03-2025                                               *
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

void solve()
{
    int a,b;
    cin>>a>>b;

    if(a<1 || b<1) cout<<"0"<<endl;
    else 
    {
        cout << min(min(a, b), (a + b) / 4) << '\n';
    }
}
int main() {
     int t;
     cin>>t;
     while(t--){
        solve();
     }
    return 0;
}
