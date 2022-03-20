#include<iostream>
using namespace std;

int main(){
	int nilai[] = {1,8,5,2};
	int length = sizeof(nilai)/sizeof(*nilai);
	int temp;
	
	for(int i = 1; i < length; i++){
		for(int j = 0; j < length-i; j++){
			if(nilai[j] > nilai [j+1]){
				temp = nilai[j];
				nilai[j] = nilai[j+1];
				nilai[j+1] = temp;
			}
		}
		for(int l = 0; l < length; l++){
			cout<<"| "<<nilai[l]<<" | ";
		}
		cout<<endl;
	}
	cout<<endl;
	cout<<"Hasil yang telah diurutkan : ";
	for(int k = 0; k < length; k++){
		cout<<nilai[k]<<" ";
	}
}
