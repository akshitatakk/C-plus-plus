#include<iostream>
using namespace std;

int binarySearch(int arr[],int n, int key){
	int start=0, end=n;
	
	while(start<=end){
		int mid = (start+end)/2;
		if(arr[mid]==key){
			return mid;
		}
		else if(arr[mid]>key){
			end=mid--;
		}
		else{
			start=mid++;
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
	cout<<"index of the key is "<<binarySearch(arr,n,key)<<endl;
	return 0;
}
