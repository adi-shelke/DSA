#include <bits/stdc++.h> 
void solve (string str, int start, int end, string temp,vector<string> &ans){
	if(start>=end){
		if(temp.length()>0)
		ans.push_back(temp);
		return;
	}
	solve(str,start+1,end,temp,ans);
	temp.push_back(str[start]);
	solve(str,start+1,end,temp,ans);
}
vector<string> subsequences(string str){
	vector<string> ans;
	solve(str,0,str.length(),"",ans);
	return ans;
}
