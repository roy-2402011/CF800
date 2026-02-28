/*************************************************************************
*      Author : PRASANJIT ROY                                            *
*      Date   : 28-02-2025                                               *
*      Problem:  https://codeforces.com/problemset/problem/2188/A        *
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
    int val=n;
    int val2=1;
    for(int i=n-1; i>=0; i-=2)
    {
        arr[i]=val;
        val--;
    }
    for(int i=n-2; i>=0; i-=2 )
    {
        arr[i]=val2;
        val2++;
    }
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int main() {
     int t;
     cin>>t;
     while(t--){
        solve();
     }
    return 0;
}
