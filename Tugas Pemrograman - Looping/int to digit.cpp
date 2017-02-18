/*
Mengonversi integer ke digit dan jumlahan per digit
*/


#include <bits/stdc++.h>
using namespace std;

int main (){

   int num,sum,count=0,arr[128];
   cout << "INPUT SEBUAH BILANGAN: ";
   cin >> num;
 
   while (num!=0){
      if (num<0){
         num*=-1;}
     arr[count++] = num%10;
     num/=10;
    }

    for (int i=count-1; i>=0; i--){
      cout << arr[i] << ends;
      sum+=arr[i];
     }

     cout << endl << "JUMLAH : " << sum << "\n";
     
system("PAUSE");
return 0;
}
