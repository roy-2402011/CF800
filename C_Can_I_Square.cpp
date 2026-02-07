#include <bits/stdc++.h>
#define ll long long
#define db double

using namespace std;
int main() {
     int t;
     cin>>t;
     while(t--)
     {
        int n;
        cin>>n;
        long long  int a[n];
        long long int sum=0;
        for(long long int i=0;i<n;i++)
        { 
            cin>>a[i];
            sum+=a[i];
        } 
        
     double root=sqrt(sum);
      long long int   r=sqrt(sum);
      if(r==root)
      {
        cout<<"YES"<<endl;
      }
      else cout<<"NO"<<endl;
     }
    return 0;
}
