#include<iostream>
using namespace std;

int main(){
	int a, b, c;
	char ulang;
	do {
		system("cls");
		cout<<"Masukkan nilai a = ";
		cin>>a;
		cout<<"Masukkan nilai b = ";
		cin>>b;
		cout<<"Masukkan nilai c = ";
		cin>>c;
	
	
		if(a > b){
			if(a < c){ 
				cout<<a;
			} else if(a > c){
				if(c > b){
					cout<<c;
				} else if(c < b){
					cout<<b;
				}
				
			} 
		} else if(a < b) {
			if(a > c){
				cout<<a;
			} else if (a < c){
				if(b > c){
					cout<<c;
				} else if(b < c){
					cout<<b;
				}
			}	
		}
		cout<<endl;
		cout<<"Apakah ingin mengulang ? ";
		cin>>ulang;
		cout<<endl;
	} while(ulang == 'y' || ulang == 'Y');
	cout<<"SELESAI";
	
}
