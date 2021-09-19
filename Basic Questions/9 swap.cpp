#include<iostream>
using namespace std;



int main(){
    cout<<"enter two number to swap"<<endl;
    int a,b;
    cin>>a>>b;
    a=a+b;
    b=a-b;
    a=a-b;
    cout<<a<<" "<<b;
	return 0;
}
