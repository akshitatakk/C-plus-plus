#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;

void red(string s){
	int n=s.length();
	stack<char> st;
	bool ans=false;
	for(int i=0;i<n;i++){
		if(s[i]=='(' || s[i]=='+' || s[i]=='-' || s[i]=='/' || s[i]=='*'){
			st.push(s[i]);
		}
		else if(s[i]==')'){
			if(st.top()=='(' ){
				ans= true;
			}
			while(st.top()=='+' || st.top()=='-' || st.top()=='/' || st.top()=='*'){
				st.pop();
			}
			st.pop();
		}
	}
	cout<<ans;
}

int main(){
	string s="(a+b)";
	red(s);
	return 0;
}
