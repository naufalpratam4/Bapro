#include<iostream>
using namespace std;

int main(){
	char ulang;
	do {
		system("cls");
		int angka;
		cout<<"Menentukan jenis bilangan, satuan, puluhan, ratusan, ribuan dan seterusnya\n";
		
		
		cout<<"Masukkan angka : ";
		cin>>angka;
		
		if(angka < 10){
			cout<<"Satuan";
		} else if (angka >= 10 && angka < 100){
			cout<<"Puluhan";
		} else if (angka >= 100 && angka < 1000){
			cout<<"Ratusan";
		} else if (angka >= 1000 && angka < 10000){
			cout<<"Ribuan";
		} else {
			cout<<"Banyakk";
		}
		cout<<endl;
		cout<<"Ingin mengulang program ? (y/t) : ";
		cin>>ulang;
		cout<<endl;
	} while (ulang == 'y' || ulang == 'Y');
	cout<<"Program Selesai..";
	
}
