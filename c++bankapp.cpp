// Your First C++ Program
// creat by egehan kahraman ig:egehan46_
#include <iostream>
using namespace std;
int main() {
    string is;
    string kln_ad;
    int kln_pass;
    float bakiye;
	bakiye = 0.0;
	int kapat;
	kapat = 0;
	int tutar;
	tutar = 0;
    cout << "Kullanici adi: \n ";
    cin >> kln_ad;   // Taking input
    cout << "Kullanici sifre: \n ";
    cin >> kln_pass;   // Taking input
   
    	if(kln_ad == "admin" and kln_pass == 5648){
    		while(kapat == 0){
			cout << "Bir islem secin: \n para cekme (1)\n para yatirma (2)\n bakiye sorgulama (3)\n kapat (4) \n ";
		    cin >> is;   // Taking input
		    cout << "Islem :  " << is << "\n";
		    if(is == "1"){
		    	cout << "Bakiyeniz su kadar: \n "<< bakiye << "\n";
		    	if(bakiye == 0 and bakiye <=  0 ){
		    		cout << "Bakiyeniz yetersiz !!: "<< bakiye << "\n";
				}
				else {
					cout << "Bir miktar  secin: \n ";
			    	cin >> tutar;   // Taking input
			    	bakiye = tutar -=  bakiye;
			    	cout << "bakiye  :  " << bakiye << "\n";
				}
			}
			if(is == "2"){
				cout << "Bir tutar secin: \n ";
			    cin >> tutar ;   // Taking input
			    bakiye = tutar += bakiye;
			    cout << "tutar :  " << bakiye << "\n";
			}
			
			if(is == "3"){
				cout << "Kullanici:  "<< kln_ad << "\n";
				cout << "sifre :  " << kln_pass << "\n";
				cout << "bakiye:  "<< bakiye << "\n";
			    	
			}
			if(is == "4"){
				cout << "Cikis yapiliyor: \n";
				kapat = 1;
			}
	}
	}
		else {
		kapat = 1;
	}
    

    

    return 0;
}

