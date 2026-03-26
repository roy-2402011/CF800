#include <bits/stdc++.h>
using namespace std;
int main() {
     int tt;
     cin>>tt;
     stack<int>st;
     while(tt--)
     {
        string s;
        cin>>s;

        if(s=="push") 
        {
            int val;
            cin>>val;
            st.push(val);
        }
        else if(s=="top")
        {
            cout<<st.top()<<endl;
        } 
        else st.pop();       
     }
    return 0;
}
