#include<iostream>
#include<queue>
using namespace std;

class stack{
	queue<int> q1;
	queue<int> q2;
	int N;
	public:
		stack(){
			N=0;
		}
		
		int pop(){
			if(q1.empty()){
				cout<<"empty"<<endl;
				return -1;
			}
			while(q1.size()!=1){
				q2.push(q1.front());
				q1.pop();
			}
			int p=q1.front();
			q1.pop();
			N--;
			queue<int> temp=q1;
			q1=q2;
			q2=temp;
			return p;
		}
		
		void push(int x){
			q1.push(x);
			N++;
		}
};

int main(){
	stack s;
	s.push(1);
	s.push(2);
	s.push(3);
	s.push(4);
	cout<<s.pop()<<endl;
	return 0;
}
