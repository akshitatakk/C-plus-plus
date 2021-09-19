#include<iostream>
using namespace std;

int kadane(int arr[], int n){
	int sum=0;
    int maxx=0;
    for(int i=0;i<n;i++){
    	sum+=arr[i];
    	if(sum<0){
    		sum=0;
		}
		maxx=max(maxx,sum);
	}
    return maxx;
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
	
	int nonwrapsum = kadane(arr,n);
	int totalsum = 0;
	
	for(int i=0;i<n;i++){
		totalsum+=arr[i];
    	arr[i]=-arr[i];
	}
	
    int wrapsum = totalsum + kadane(arr,n);
	cout<<max(wrapsum,nonwrapsum)<<endl; 
	
	return 0;
}
