#include<iostream>
using namespace std;

bool isprime(int n){
	for(int i=2;i<=n/2;i++){
		if(n%i==0){
			return false;
		}
	}
	return true;
}

int main(){
	cout<<" enter two numbers to find prime numbers between them"<<endl;
	int a,b;
	cin>>a>>b;
	for(int i=a;i<=b;i++){
		if(isprime(i)){
			cout<<i<<" ";
		}
	}
    cout<<endl;
	return 0;
}
