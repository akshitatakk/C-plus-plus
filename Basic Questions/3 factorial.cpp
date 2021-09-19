#include<iostream>
using namespace std;
int main(){
	cout<<"enter a number to find it's factorial"<<endl;
	int n;
	cin>>n;
	int fact=1;
	
	for(int i=2;i<=n;i++){
		fact=fact*i;
	}
	cout<<fact<<" is "<<n<<"'s factorial"<<endl;
	return 0;
}
