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

	
	//Time complexity O(n^2)
	int sum;
	int maxx=0;
	for(int i=0;i<n;i++){
		sum=0;
		for(int j=i;j<n;j++){
			sum+=arr[j];
			maxx=max(maxx,sum);
		}
	}
    cout<<maxx<<endl;
    
    //Time complexity O(n)
    int sum2=0;
    int maxx2=0;
    for(int i=0;i<n;i++){
    	sum2+=arr[i];
    	if(sum2<0){
    		sum2=0;
		}
		maxx2=max(maxx2,sum2);
	}
    cout<<"using kadane's algo "<<maxx2<<endl;
	
	return 0;
}
