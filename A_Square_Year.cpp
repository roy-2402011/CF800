#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main() {
     ll t;
     cin>>t;
     while(t--)
     {
        string s;
        cin>>s;
        ll x = stoi(s);
        ll root=sqrt(x);
        double r = sqrt(x);
        if(root !=r)
        {
            cout<<"-1"<<endl;
        }
        else 
        {
            cout<<0<<" "<<root<<endl;
        }
     }
    return 0;
}
