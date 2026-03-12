#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void rec(ll n)
{
    if(n == 0) return;

    rec(n/10);
    cout << n%10 << " ";
}

void solve()
{
    ll n;
    cin >> n;

    if(n == 0){
        cout << 0 << endl;
        return;
    }

    rec(n);
    cout << endl;
}

int main() {
    ll t;
    cin >> t;

    while(t--){
        solve();
    }

    return 0;
}