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

void solve()
{
    int n,k;
    cin>>n>>k;
    map<char,int>mp;
    string s;
    cin
    for(int i=0;i<n;i++)
    {
        char c=s[i];
        mp[c]++;
    }

    int op=0;
    for(auto it : mp)
    {
        int cnt=it.second;
        int m=cnt%2
        op+=m;
    }
    if(op==0)
    {
        cout<<"YES"<<endl;
    }
    op--;
    if(op>k)
    {
        cout<<"NO"<<endl;
    }
    else cout<<"YES"<<endl;
}
int main() {
     int t;
     cin>>t;
     while(t--){
        solve();
     }
    return 0;
}
