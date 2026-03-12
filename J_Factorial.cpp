#include <bits/stdc++.h>
using namespace std;
long long int rec(long long int n)
{
    if(n==1)
    {
        return 1;
    }
    return n*rec(n-1);
}
int main() {
    long long int n;
     cin>>n;
     cout<<rec(n)<<endl;
    return 0;
}
