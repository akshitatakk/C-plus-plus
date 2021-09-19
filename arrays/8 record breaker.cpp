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
	
	int maxx=0, count=0;
	
	if(n==1){
		cout<<"1"<<endl;
		return 0;
	}
	
	for(int i=0;i<n;i++){
		maxx=max(maxx,arr[i]);
		if(arr[i]==maxx && (arr[i]>arr[i+1] || i==n)){
			count++;
		}
	}
	cout<<count<<endl;
	return 0;
}
