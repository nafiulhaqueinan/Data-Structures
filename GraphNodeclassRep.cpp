#include<bits/stdc++.h>
using namespace std;
class Node{
public:
	string name;
	list<string> nibrs;
	Node(string name){
		this->name=name;
	}
};
class Graph{
unordered_map<string,Node*>m;
public:
	Graph(std::vector<string> v){
		for(auto x:v){
			m[x]=new Node(x);
		}
	}
	void addEdge(string x,string y,bool undir=false){
		m[x]->nibrs.push_back(y);
		if(undir)
			m[y]->nibrs.push_back(x);
	}
	void printAdjList(){
		for(auto c:m){
			auto city=c.first;
			Node *node=c.second;
			for(auto nbr : node->nibrs){
				cout<<nbr<<",";
			}
			cout<<endl;
		}
	}
};
int main(){

#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output1.txt","w",stdout);
#endif
		int a;
		cin>>a;
		cout<<a;
	
	
	return 0;

}