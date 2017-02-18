/*
input three numbers
output three numbers 
in ascending order

  *ahmad syarifuddin randiko
  *16/298493/pa/17454
*/

#include <bits/stdc++.h>
using namespace std;

int main(){
	
	int a,b,c;
	cout << "bilangan pertama: " ;
	cin >> a ;
	cout << "bilangan kedua: " ;
	cin >> b ;
	cout << "bilangan ketiga: " ;
	cin >> c ;
	
	if(a<b && a<c && b<c){
		cout << a << "\n" << b << "\n" << c;
	}else if(a<c && a<b && c<b){
		cout << a << "\n" << c << "\n" << b;
    }else if(b<a && b<c && a<c){
		cout << b << "\n" << a << "\n" << c;
	}else if(b<a && b<c && c<a){
		cout << b << "\n" << c << "\n" << a;
	}else if(c<a && c<b && a<b){
		cout << c << "\n" << a << "\n" << b;
	}else if(c<a && c<b && b<a){
		cout << c << "\n" << b << "\n" << a;
	}
		
return 0;

} 
