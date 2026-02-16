#include <bits/stdc++.h>
using namespace std;
string decimalToBinary(int n)
{
    string binary="";
    while(n>0)
    {
        int rem=n%2;
        binary+=to_string(rem);
        n/=2;

    }
    reverse(binary.begin(),binary.end());
    return binary;
}
int binaryTodecimal(string bi)
{
    int n=bi.size();
    int p=1;
    int decimal=0;
    for(int i=n-1;i>=0;i--)
    {
        if(bi[i]=='1')
        {
            decimal+=p;
        }
        p*=2;
    }
    return decimal;
}
int main() {
     int n;
     cin>>n;
    string bi= decimalToBinary(n);
    cout<<bi<<endl;
    cout<<binaryTodecimal(bi);
     
    return 0;
}
