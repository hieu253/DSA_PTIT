#include<bits/stdc++.h>

using namespace std;

bool check(string s){
    stack<char> st;
    for(char x : s){
        if(x == '(' || x == '[' || x == '{'){
            st.push(x);
        }
        else{
            if(st.empty())  return false;
            if(x == ')' && st.top() == '(') st.pop();
            if(x == '}' && st.top() == '{') st.pop();
            if(x == ']' && st.top() == '[') st.pop();
        }
    }
    return st.empty();
}

int main()
{
    int t;  cin >> t;
    while(t--){
        string s;   cin >> s;
        if(check(s))    cout << "YES" << endl;
        else            cout << "NO" << endl;
    }
}