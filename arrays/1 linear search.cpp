#include<iostream>
using namespace std;

int linearSearch(int arr[],int n, int key){
	for(int i=0;i<n;i++){
		if(key==arr[i]){
			return i;
		}
	}
	return -1;
}

int main(){
	cout<<"enter array size"<<endl;
    int n;
    cin>>n;
    int arr[n];
    cout<<"enter array elemets"<<endl;
    for(int i=0;i<n;i++){
    	cin>>arr[i];
	}
	cout<<"enter key"<<endl;
	int key;
	cin>>key;
	cout<<"index of the key is "<<linearSearch(arr,n,key)<<endl;
	return 0;
}
