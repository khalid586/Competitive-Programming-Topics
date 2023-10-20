**Problem**:
<br>

**You are given a string. You can remove any two identical adjacent characters. Now you have to tell the minimum length possible after performing unlimited operations?**

<details>
    <summary>Solution<summary>


```
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
```   

</details>
