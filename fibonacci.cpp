#include<iostream>
using namespace std;

int rekursif() {
	int n, n1 = 0, n2 = 1;
	int lanjut;
	cout<<"Masukkan jumlah : ";
	cin>>n;
	cout<<"Fibonacci = ";
	for(int i = 1; i < n; i++) {
		if(i == 1) {
			cout<<n1<<", ";
		} else if (i == 2) {
			cout<<n2<<", ";
		} 
		
		lanjut = n1 + n2;
		n1 = n2;
		n2 = lanjut;
		
		cout<<lanjut<<", ";
	}
}

int main() {
	rekursif();
}
