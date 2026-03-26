#include <bits/stdc++.h>
using namespace std;
int main() {
    string s;
    cin>>s;
    stack<char>st;
    for(char c : s)
    {
        if(c=='(' || c=='{' || c=='[') st.push(c);
        else{
            if(st.top()=='(' && c==')') st.pop();
            else if(st.top()=='{' && c=='}') st.pop();
            else if(st.top()=='[' && c==']') st.pop();
        }
    }
    if(st.empty()) cout<<"Valid\n";
    else cout<<"Invalid\n";
    return 0;
}
