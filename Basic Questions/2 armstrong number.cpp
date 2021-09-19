#include<iostream>
using namespace std;

int main(){
	cout<<"Enter a number to check if it's an armstrong number or not"<<endl;
	int n;
	cin>>n;
    int m=n, rev=0, r;
	while(n>0){
		r=n%10;
		rev=rev*10 +r;
		n=n/10;
	}
	if(m==rev){
		cout<<m<<" is an armstrong number"<<endl;
	} else{
		cout<<m<<" is not an armstrong number"<<endl;
	}

	return 0;
}
