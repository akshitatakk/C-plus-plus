#include<iostream>
#include<vector>
using namespace std;

int trappedwater(vector<int> arr){
	int n=arr.size();
	int l=0, r=n-1;
	int lmax=0, rmax=0;
	int result=0;
	
	while(l<=r){
		if(arr[l]<arr[r]){
			if(arr[l]>lmax){
				lmax=arr[l];
			}
			else{
				result+=lmax-arr[l];
			}
			l++;
		}
		else{
			if(arr[r]>rmax){
				rmax=arr[r];
			}
			else{
				result+=rmax-arr[r];
			}
			r--;
		}
	}

	return result;
}

int main(){
	vector<int> h={0,1,0,2,1,0,1,3,2,1,2,1};
	cout<<trappedwater(h)<<endl;
	return 0;
}
