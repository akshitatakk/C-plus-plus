#include<iostream>
using namespace std;

int main(){
	cout<<"Enter a number to check if it's a prime number or not"<<endl;
	int n;
	cin>>n;
	int flag=0;
	
	for(int i=2;i<=n/2;i++){
		if(n%i==0){
			flag=1;
			break;
		}
	}
	if(flag==0){
		cout<<n<<" is a prime number"<<endl;
	} else{
		cout<<n<<" is not a prime number"<<endl;
	}
	
	return 0;
}
