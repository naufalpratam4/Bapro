#include<iostream>
using namespace std;

int main(){
	char ulang;
	do {
		system("cls");
		int a,b,c;
		cout<<"Menentukan Segitiga Sama Sisi, Sama Kaki, atau Sembarang"<<endl;
		
		cout<<"Masukkan nilai a : ";
		cin>>a;
		cout<<"Masukkan nilai b : ";
		cin>>b;
		cout<<"Masukkan nilai c : ";
		cin>>c;	
		
		cout<<a<<" "<<b<<" "<<c<<endl;
		if (a == b){
			if(a == c){
				cout<<"Segitiga Sama Sisi";
			} else if(a != c){
				cout<<"Segitiga Sama Kaki";
			}
		} else if (a == c){
			if(a == b){
				cout<<"Segitiga Sama Sisi";
			} else if(a != b){
				cout<<"Segitiga Sama Kaki";
			}
		} else if (b == c){
			if(b == a){
				cout<<"Segitiga Sama Sisi";
			} else if(b != a){
				cout<<"Segitiga Sama Kaki";
			}
		} else if (a != b) {
			if(a != c) {
				cout<<"Segitiga Sembarang";
			}
		} else if (a != c){
			if(a != b) {
				cout<<"Segitiga Sembarang";
			}
		}
	  	cout<<endl;
	  	cout<<"Ingin ulang? : ";
	  	cin>>ulang;
	  	cout<<endl;
	} while (ulang == 'Y' || ulang == 'y');
	cout<<"Program Selesai";
	
}
