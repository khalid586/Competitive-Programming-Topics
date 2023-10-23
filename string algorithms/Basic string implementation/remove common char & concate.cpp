//{ Driver Code Starts
// C++ program Find concatenated string with 
// uncommon characters of given strings 
#include <bits/stdc++.h> 
using namespace std; 


// } Driver Code Ends


class Solution
{
    public:
    //Function to remove common characters and concatenate two strings.
    string concatenatedString(string s1, string s2) 
    { 
        set<char> first,second;
        string ans;
        
        for(auto x:s1) first.insert(x);
        for(auto x:s2) second.insert(x);
        
        for(auto x:s1)
            if(second.count(x) == 0) ans += x;
        
        for(auto x:s2)
            if(first.count(x) == 0) ans += x;
            
        if(ans.size() == 0) return "-1";
        
        return ans;
    }

};

//{ Driver Code Starts.

/* Driver program to test above function */
int main() 
{ 
	int t;
	cin >> t;
	
	while(t--){
    	string s1, s2;
    	cin >> s1 >> s2;
    	Solution obj;
    	string res = obj.concatenatedString(s1, s2);
    	cout<<res<<endl;
	}
	return 0; 
}

// } Driver Code Ends