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
	
	int maxx=INT_MIN;
	int minn=INT_MAX;
	
	for(int i=0;i<n;i++){
    	maxx=max(arr[i],maxx);
    	minn=min(arr[i],minn);
	}
	
	cout<<"max = "<<maxx<<" min = "<<minn<<endl;
	
	
	return 0;
}
