/*************************************************************************
*      Author : PRASANJIT ROY                                            *
*      Date   : 28-02-2025                                               *
*      Problem:  https://codeforces.com/problemset/problem/2185/B        *
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
    int n; 
    cin>>n;
    int arr[n];
    int mx=INT_MIN;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        mx=max(mx,arr[i]);

    }
    cout<<mx*n<<endl;
}
int main() {
     int t;
     cin>>t;
     while(t--){
        solve();
     }
    return 0;
}
