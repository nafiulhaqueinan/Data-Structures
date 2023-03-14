#include<bits/stdc++.h>
#include"StackOop.h"
using namespace std;
int main(){
	Stack<char>s;
	s.push('N');
	s.push('A');
	s.push('F');
	s.push('I');
	s.push('U');
	s.push('L');
    cout<<s.top();
    s.pop();
    cout<<s.top();
	return 0;

}
