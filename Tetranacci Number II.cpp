
// 0 1 1 2 4 8 15 29  Tetranacii  sequencee 

#include <bits/stdc++.h>
using namespace std;
int main() {
    long long int Tetranacci[100];
    long long int n;
    cin>>n;
    Tetranacci[0]=0;
    Tetranacci[1]=1;
    Tetranacci[2]=1;
    Tetranacci[3]=2;

    for(int i=4; i<=n ;i++)
    {
        Tetranacci[i]=Tetranacci[i-1] + Tetranacci[i-2] + Tetranacci[i-3]  + Tetranacci[i-4] ;
    }
    cout<<Tetranacci[n] <<endl;
    return 0;
}
