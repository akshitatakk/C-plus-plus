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
	
	int sum;
	for(int i=0;i<n;i++){
		sum=0;
		for(int j=i;j<n;j++){
			sum+=arr[j];
			cout<<sum<<endl;
		}
	}
	
	return 0;
}
