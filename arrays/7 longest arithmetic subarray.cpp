#include<iostream>
using namespace std;

int main(){
	cout<<"enter array size"<<endl;
    int n;
    cin>>n;
    int arr[n];
    cout<<"enter array elemets"<<endl;
    for(int i=0;i<n;i++){
    	cin>>arr[i];
	}
	
	int d=arr[1]-arr[0];
	int result=2, ans=2;
	
	for(int i=2;i<n;i++){
		if(arr[i]-arr[i-1]==d){
			result++;
		} else{
			d =arr[i]-arr[i-1];
			result =2;
		}
		ans=max(ans,result);
	}
	cout<<ans<<endl;
	
	return 0;
}
