#include<iostream>
#include<queue>
using namespace std;

class stack{
	int N;
	queue<int> q1;
	queue<int> q2;
	
	public:
		stack(){
			N=0;
	    }
		void push(int x){
			if(q1.empty()){
				N++;
				q1.push(x);
				return;
			}
			N++;
			q2.push(x);
			while(!q1.empty()){
				int a = q1.front();
				q1.pop();
				q2.push(a);
			}
			
			queue<int> temp;
			temp=q1;
			q1=q2;
			q2=temp;
		    
		}
		
		int pop(){
			int p=q1.front();
			q1.pop();
			N--;
			return p;
			
		}
};

int main(){
	stack s;
	s.push(1);
	s.push(2);
	s.push(3);
	s.push(4);
	cout<<s.pop()<<endl;
	cout<<s.pop()<<endl;
	return 0;
}
