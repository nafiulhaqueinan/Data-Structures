#include<bits/stdc++.h>
using namespace std;
class Stack{
private:
	int st[100],i=-1,m=100;
public:
	bool isEmpty(){
		if(i==-1)
			return true;
		else
			return false;
	}
	bool isFull(){
		if(i==m){
			return true;
		}else{
			return false;
		}
	}
	bool push(int x){
		if(!isFull()){
			i++;
			st[i]=x;
		}
	}
	bool pop(){
		if(isEmpty()){
			cout<<"Empty!\n";
		}else{
			i--;
		}
	}
	int topElement(){
		return st[i];
	}
	void show(){
		int k=i+1;
		while(k--){
			cout<<st[k]<<endl;
		}
	}
};

int main(){

#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
#endif

	Stack s;
	s.push(10);
	s.push(20);
	s.push(30);
	s.pop();
	s.pop();
	s.push(100);
	cout<<s.topElement()<<endl;
	s.show();

	
	return 0;

}
