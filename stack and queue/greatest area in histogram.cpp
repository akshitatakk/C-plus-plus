#include<iostream>
#include<stack>
#include<vector>
using namespace std;

int greatestArea(vector<int> &heights){
	int n = heights.size();
        stack<int> st;
        int ma =0;
        int i=0;
        while(i<n){
            if(st.empty() or heights[i] >= heights[st.top()]){
                st.push(i++);
            }
            else{
                int tp = st.top();
                st.pop();
                int ans = heights[tp]*(st.empty()? i: i-st.top()-1);
                ma = max(ma, ans);
            }
        }
        
        while(!st.empty()){
            int tp = st.top();
            st.pop();
            int ans = heights[tp]*(st.empty()? i: i-st.top()-1);
            ma = max(ma, ans);
        }
        
        return ma; 
}

int main(){
	vector<int> a = {2,1,5,6,2,3};
	cout<<greatestArea(a)<<endl;
	return 0;
}
