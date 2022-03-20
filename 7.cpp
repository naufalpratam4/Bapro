#include<iostream>
#include<math.h>
using namespace std;

int main(){
	float a, b, c, x1, x2, k;
	cout<<"Persamaan Kuadrat : ax^2 + bx + c"<<endl;
	
	cout<<"Masukkan nilai a : ";
	cin>>a;
	cout<<"Masukkan nilai b : ";
	cin>>b;
	cout<<"Masukkan nilai c : ";
	cin>>c;
	
	k = b * b - 4 * a * c;
	
	if(k > 0){ 
		x1 = (-b + sqrt(k)) / (2*a);
		x2 = (-b - sqrt(k)) / (2*a);
		cout<<"Akar berbeda"<<endl;
		cout<<"x1 : "<<x1<<endl;
		cout<<"x2 : "<<x2;
	} else if (k == 0){
		x1 = (-b + sqrt(k)) / (2 * a);
		x2 = x1;
		cout<<"Akar sama"<<endl;
		cout<<"x1 : "<<x1<<endl;
		cout<<"x2 : "<<x2;	
	} else if (k < 0){
		cout<<"Tidak punya akar real";
	}
}
