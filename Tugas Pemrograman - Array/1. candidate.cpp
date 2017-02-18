#include <iostream>
using namespace std;

int main (){
	string ca[50];
	int vote[50],max,sum(0),check(0);
	float average[50];
	bool get=false;
	max = vote[0];
	
	for (int i=0; i<5; i++){
		cout << "";
		cin >> ca[i] >> vote[i];
		sum+= vote[i];
	}	
	for (int i=0; i<5; i++){
		for (int j=0; j<5; j++){
			if (vote[j]>max){
				max = vote[j];
			}
		}
	}
	for (int i=0; i<5; i++){
		if (max == vote[i]){
			check = i;
			get = true;
			break;
		}
	}
	
	cout << "\nCandidate Votes Received % of Total Votes" << endl;
	
	for (int i=0; i<5; i++){
		average[i] = (vote[i]*100000)/sum*0.001;
		cout << ca[i] << ends << vote[i] << ends << average[i];
		cout << endl;
	}	
	cout << "Total " << sum;
	cout << "\n\nThe Winner of the Election is " << ca[check];
}	
