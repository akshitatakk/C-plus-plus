#include<bits/stdc++.h>
using namespace std;

int main(){
	string s="aaabbccbababacdccdd";
	int maxlength=0;
	vector<int> dict(256,-1);
	int start=-1;
	for(int i=0;i<s.size();i++){
		if(dict[s[i]]>start){
			start=dict[s[i]];
		}
		dict[s[i]]=i;
		maxlength=max(maxlength, i-start);
	}
	cout<<maxlength;
}
