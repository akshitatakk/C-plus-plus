#include<bits/stdc++.h>
using namespace std;

vector<int> stockspan(vector<int> a){
	stack<pair<int,int>> st;
	vector<int> ans;
	
	for(auto x: a){
		int days=1;
		while(!st.empty() and st.top().first<x){
			days+=st.top().second;
			st.pop();
		}
		st.push({x,days});
		ans.push_back(days);
	}
	return ans;
	
}

int main(){
	vector<int> v={100,80,60,70,60,75,85};
	vector<int> result = stockspan(v);
	for(auto i: result){
		cout<<i<<" ";
	}
	cout<<endl;
	return 0;
}
