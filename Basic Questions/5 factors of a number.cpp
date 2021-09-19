#include<iostream>
using namespace std;
int main(){
	cout<<"enter a number to find it's factors"<<endl;
	int n;
	cin>>n;
	
	for(int i=1;i<=n;i++){
		if(n%i==0){
			cout<<i<<" ";
		}
	}
	cout<<endl;
	return 0;
}
