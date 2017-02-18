/*
Bilangan Prima atau Bukan Bilangan Prima
*/

#include<bits/stdc++.h>
using namespace std;

int main()
{
	cout << "BILANGAN PRIMA ATAU BUKAN BILANGAN PRIMA \n";
	int angka, jumlah=0;
	
	cout << "MASUKKAN BILANGAN: ";
	cin >> angka;
	
	for(int faktor=1;faktor<=angka;faktor++)
	{
		if(angka%faktor==0)
		jumlah++;	
	}
	if(jumlah==2)
		cout << angka << " MERUPAKAN BILANGAN PRIMA \n";
		
	else
		cout << angka << " BUKAN MERUPAKAN BILANGAN PRIMA \n";
		
	system("PAUSE");	
	return 0;
}
