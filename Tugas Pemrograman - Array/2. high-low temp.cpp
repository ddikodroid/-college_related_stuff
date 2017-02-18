#include<iostream>
using namespace std;
 
int main()
{
	long int a[12][2],high,low,i,j;
	float sum1(0),sum2(0);
	string month_name[12] = {"January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};   
	    
	cout << "High-Low Temperature \n";
	    
    for(i=0;i<12;i++) {
    	cout << month_name[i] << " " << "\t: ";
    	cout <<"";
    	
        for(j=0;j<2;++j){
        	cin>>a[i][j];
		}            
    sum1 += a[i][0];
	sum2 += a[i][1];
	}
            
    high=a[0][0];
    low=a[0][0];
    
    for(i=0;i<12;++i){
        for(j=0;j<2;++j)
        {
            if(a[i][j]>high)							
                high=a[i][j];
            else if (a[i][j]<low)
            	low=a[i][j];
        }
 
        }
	cout <<"\n\nAverage of High Temperature" << "\t:" <<sum1/12;
	cout <<"\n\nAverage of Low Temperature"<< "\t:" <<sum2/12;    
    cout <<"\n\nHighest Temperature" << "\t:" <<high;
 	cout <<"\n\nLowest Temperature" << "\t:" <<low;
}
