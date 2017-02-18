/*
cookies, boxes, containers

  *ahmad syarifuddin r
  *16/398493/pa/17454
*/

#include <bits/stdc++.h>
using namespace std;

int main(){
	
	int a,b,c; //input
	int x,y; //output
	
	cout << "number of cookies: "<<endl;
	cin >> a;
	cout << "number of cookies in a box: "<<endl;
	cin >> b;
	cout << "number of box in a container: "<<endl;
	cin >> c;
	
	x=(a-(a&b))/b;
	y=(x-(x&c))/c;

	cout << "total of box: " << x << endl;
	cout << "total of container: " << y << endl;
}

