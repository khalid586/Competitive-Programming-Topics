#include<bits/stdc++.h>
using namespace std;

#define rep(i,a,b) for(int i = a; i < b ; i++)

int main(){
    string s;
    cin >> s;

    int n = s.size();
    stack<char> ans;

    rep(i,0,n){
        if(ans.size()){
           if(s[i] != ans.top())
			ans.push(s[i]);
		else
            	ans.pop();
        }
	   else
			ans.push(s[i]);
  
    }

    cout << s.size() << '\n';
}
