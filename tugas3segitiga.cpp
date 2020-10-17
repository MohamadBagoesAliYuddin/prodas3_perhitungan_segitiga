#include <iostream>
#include <math.h>
using namespace std;
int main()

{
	int alas,tinggi,sisimiring, luas, keliling;
	string pagar = "================================================================================";
	
	cout << endl;
	cout <<"--------------";
	cout <<"P R O G R A M  M E N G H I T U N G  S E G I  T I G A";
	cout <<"--------------"<<endl;
	
	cout << pagar << endl;
	cout <<"--------------------SILAHKAN MEMASUKAN DATA YANG ANDA KETAHUI-------------------" <<endl << endl;
	cout <<"Masukkan data alas        = "; cin >> alas;
	cout <<"Masukkan data tinggi      = "; cin >> tinggi;
	cout << pagar << endl;
	cout <<endl;
	
	
	sisimiring  = sqrt((alas*alas)+(tinggi*tinggi));
	luas        = (alas*tinggi)/2;
	keliling    = alas+tinggi+sisimiring;
	
	
	cout << pagar << endl;
	cout << endl;
	cout << "-----------------------------HASIL PERHITUNGAN ANDA-----------------------------" << endl << endl;
	cout << "sisi miring segitiga        = " << sisimiring << endl;
	cout << "luas        segitiga        = " << luas << endl;
	cout << "keliling    segitiga        = " << keliling << endl;
	
	
	cout << pagar << endl << endl << endl; 
	cout <<"    ======================================================================"<< endl;
	cout <<"    ======================================================================"<< endl;
	cout <<"    ==                                                                  =="<< endl;
	cout <<"    ==                                                                  =="<< endl;
	cout <<"    ==                                                                  =="<< endl;
	cout <<"    ==                TERIMAKASIH TELAH MEMPERCAYAI KAMI                =="<< endl;
	cout <<"    ==   SEBAGAI PROGRAM PERHITUNGAN CEPAT DALAM MENGHITUNG SEGITIGA    =="<< endl;
	cout <<"    ==                                                                  =="<< endl;
	cout <<"    ==                                                                  =="<< endl;
	cout <<"    ==                                                        Penk_Zpk  =="<< endl;
	cout <<"    ======================================================================"<< endl;
	cout <<"    ======================================================================"<< endl;
	cout << endl << endl << pagar << endl;
	
	return 0;
}
