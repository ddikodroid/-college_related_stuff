/*
basic calculator

  *ahmad syarifuddin randiko
  *16/398493/pa/17454
*/

#include<bits/stdc++.h>
using namespace std;

int main(){
	int a,b;
	float x;
	char o;
	cout << "basic calculator" << endl;
	cin >> a >> o >> b;
	
	if(o=='+'){
		x=a+b;
	}
	else if(o=='-'){
		x=a-b;
	}
	else if(o=='*'){
		x=a*b;
	}
	else if(o=='/'){
		
		if(b==0){
			cout << "invalid denominator." << endl;
		}
		else x=a/b;
	
	}
	
	cout << a << o << b << " = " << x;
	
	return 0;
}
