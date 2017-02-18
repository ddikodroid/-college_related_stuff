#include<bits/stdc++.h>
using namespace std;

int main()
{
	int range, num1=1, num2=0, fibNum;
	
	cout << "MASUKKAN JUMLAH BILANGAN FIBONACCI: ";
	cin >> range;
	
	
	for(int sequence=1;sequence<=range;sequence++)
	{
	fibNum=num1+num2;
	num1=num2;
	num2=fibNum;
		
	cout << fibNum << endl;	
	}
system("PAUSE");	
return 0;
}
