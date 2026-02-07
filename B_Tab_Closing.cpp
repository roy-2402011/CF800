#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int a, b, n;
        cin >> a >> b >> n;

    double tmp1 = a/ (double)n;
    double tmp2 = a / 1.0;
    if((b> tmp1) && (b<tmp2)) {
    cout << 2 << endl;
    } 
    else {
    cout << 1 << endl;
    }

}
    return 0;
}
