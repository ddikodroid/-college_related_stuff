/* this program is originally made by Ahmad Syarifuddin Randiko and Marisha Salsabila
the variable used in this program is in Bahasa Indonesia
the max value of lama_angsuran is 72 (means that 72 months)
the max value of harga is 10 x 10^9 (i don't know what data type that can handle more) */

#include<iostream>
#include<iomanip>
#include<cstdlib>

using namespace std;

float hitung_angsuran(int harga, int lama_angsuran);

int main() {
  float bunga[6] = {0.75, 1, 1.25, 1.5, 1.75, 2};
  double bsr_angsuran;
  int harga;
  int lama_angsuran;
  cout << "Program menghitung total angsuran dan besar angsuran tiap bulan.\n";
  cout << "_______________________________________________________________\n";
  
  cout << "Masukkan harga barang               : Rp";
  cin >> harga;
  cout << "Masukkan lama angsuran (dalam bulan): ";
  cin >> lama_angsuran;
  hitung_angsuran(harga, lama_angsuran);
  
  system("PAUSE");
}

float hitung_angsuran(int harga, int lama_angsuran){
  int i=0;
  double bsr_angsuran;
  float bunga[6] = {0.75, 1, 1.25, 1.5, 1.75, 2};
  if(lama_angsuran>0 && lama_angsuran<=12){
    bunga[i]=bunga[5];
  }
  else if(lama_angsuran>12 && lama_angsuran<=24){
    bunga[i]=bunga[4];
  }
  else if(lama_angsuran>24 && lama_angsuran<=36){
    bunga[i]=bunga[3];
  }
  else if(lama_angsuran>36 && lama_angsuran<=48){
    bunga[i]=bunga[2];
  }
  else if(lama_angsuran>48 && lama_angsuran<=60){
    bunga[i]=bunga[1];
  }
  else if(lama_angsuran>60 && lama_angsuran<=72){
    bunga[i]=bunga[0];                                                                                                                                  
  }
  else if(lama_angsuran>72){
  	cout << " \n";
  	cout << "Maaf, lama angsuran maksimal hanya 72 bulan.\nSilakan ulangi lagi.\n";
  	cout << "\n";
	main();
  }
  
	for(int j=0; j<lama_angsuran;j++){
		 bsr_angsuran=harga*((100+bunga[i])/100);
		 harga=bsr_angsuran;
	}
	cout << "Total angsuran                      : ";
    cout << fixed <<  setprecision(2)<< bsr_angsuran;
 	cout << endl;   
    cout << "Besar angsuran setiap bulan         : Rp"<< bsr_angsuran/lama_angsuran << " selama " << lama_angsuran << " bulan.";
     
    return bsr_angsuran;
  }
