#include<iostream>
#include<cstdlib>
using namespace std;

int main(){
    char ulang;
    int bot1,bot2, player;
    do {
        system("cls");
        string hasil;
        string isi[] = {"Buka", "Tutup"};
        

        for(int i = 0; i < 2; i++){
            cout<<i + 1<<". "<<isi[i]<<endl;
        }
        
        
        cout<<endl;
        
      

        bot1 = (rand() % 2) + 1;
        bot2 = (rand() % 2) + 1;

        // Penentuan
        cout<<"Masukkan Pilihan Anda : ";
        cin>>player;
    
        // Rules
        if(player == 1){
            if(bot1 == 2){
                if(bot2 == bot1){
                    hasil = "PLAYER MENANG";
                } else if (bot2 == 1) {
                    hasil = "BOT 1 MENANG";
                } else {
                    
                }
            } else if(bot1 == player) {
                if(bot2 == 2){
                    hasil = "BOT 2 MENANG";
                } else if (bot2 == player){
                    hasil = "SERI";
                }
            }
        } else if (player == 2){
            if(bot1 == 1){
                if(bot2 == bot1){
                    hasil = "PLAYER MENANG";
                } else if(bot2 == player){
                    hasil = "BOT 1 MENANG";
                }
            } else if(bot1 == player){
                if(bot2 == 1){
                    hasil = "BOT 2 MENANG";
                } else if (bot2 == player){
                    hasil = "SERI";
                }
            }
        } 

        cout<<"Player memilih : "<<player<<"\nBOT 1 Memilih : "<<bot1<<"\nBOT 2 Memilih : "<<bot2<<endl;

        cout<<"Hasil : "<<hasil<<endl;
        cout<<"Ulang? : ";
        cin>>ulang;
        
    } while( ulang == 'Y' || ulang == 'y');
    cout<<"Program Selesai";
    
    
}
