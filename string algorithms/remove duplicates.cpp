#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin >> s;

    int n = s.size();
    stack<char> ans;

    rep(i,0,n){
        if(s[i] != ans.top() or ans.size() == 0){
            ans.push(s[i]);
        }
        else{
            ans.pop();
        }
    }

    cout << s.size() << ‘\n’;
}
