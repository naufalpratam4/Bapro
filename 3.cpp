#include<iostream>
using namespace std;

int main(){
	do {
		double x,y;
		cout<<"Mencari kuadran koordinat"<<endl;
		
		cout<<"Masukkan nilai x : ";
		cin>>x;
		cout<<"Masukkan nilai y : ";
		cin>>y;
		
		if(x >= 0 && y >= 0){
			cout<<"x = "<<x<<endl;
			cout<<"y = "<<y<<endl;
			cout<<"Titik x dan titik y berada di kuadran 1";
		} else if (x > 0 && y < 0){
			cout<<"x = "<<x<<endl;
			cout<<"y = "<<y<<endl;
			cout<<"Titik x dan titik y berada di kuadran 2";
		} else if (x < 0 && y < 0){
			cout<<"x = "<<x<<endl;
			cout<<"y = "<<y<<endl;
			cout<<"Titik x dan titik y berada di kuadran 3";
		} else {
			cout<<"x = "<<x<<endl;
			cout<<"y = "<<y<<endl;
			cout<<"Titik x dan titik y berada di kuadran 4";
		}
	} while (ulang == 'Y' || ulang == 'y');
	cout<<"Program Selesai";
	
}
