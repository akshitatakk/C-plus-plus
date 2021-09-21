#include<iostream>
using namespace std;
#define n 20

class queue{
	int* arr;
	int front;
	int back;
	
	public:
		queue(){
			arr= new int[n];
			front=-1;
			back=-1;
		}
		
		void push(int x){
			if(back==n-1){
				cout<<"overflow"<<endl;
				return;
			}
			back++;
			arr[back]=x;
			if(front==-1){
				front++;
			}
		}
		
		void pop(){
			if(front==-1 || back<front){
				cout<<"no elements"<<endl;
				return;
			}
			front++;
		}
		
		int seek(){
			if(front==-1 || back<front){
				cout<<"no elements"<<endl;
				return -1;
			}
			return arr[front];
		}
		
		bool empty(){
			if(front==-1 || back<front){
				return true;
			}
			return false;
		}
};

int main(){
	queue q;
	q.push(1);
	q.push(2);
	q.push(3);
	q.push(4);
	
	cout<<q.seek()<<endl;
	q.pop();
	
	cout<<q.seek()<<endl;
	q.pop();
	
	cout<<q.seek()<<endl;
	q.pop();
	
	cout<<q.seek()<<endl;
	q.pop();
	
	cout<<q.empty()<<endl;
	return 0;
}

