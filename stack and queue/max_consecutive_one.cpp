#include<bits/stdc++.h>
using namespace std;

int main(){
	vector<int> v={ 1, 0, 0, 1, 0, 1, 0, 1 };
	int n=v.size();
	int k=2;
	
	int i=0;
	int zerocount=0;
	int ans=0;
	for(int j=0;j<n;j++){
		if(v[j]==0){
			zerocount++;
		}
		while(zerocount>k){
			if(v[i]==0){
				zerocount--;
			}
			i++;
		}
		ans=max(ans,j-i+1);
	}
	cout<<ans;
	return 0;
}
