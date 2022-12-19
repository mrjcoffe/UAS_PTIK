#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
    int a,b,angka,maks,dicari,urut;
    cout<< "Masukkan Banyaknya Angka : ";
    cin>>angka;

    int nilai[angka];
    for(maks=0; maks<angka; maks++){
        cout<<"masukkan angka ke-"<<maks+1<<" = ";
        cin>>nilai[maks];
    }

    for(a=0; a<angka-1; a++){
        for(b=a+1; b<angka; b++){
            if(nilai[a]>nilai[b]){
                urut = nilai[a];
                nilai[a] = nilai[b];
                nilai[b] = urut;
            }
        }
    }
    cout<< "Hasil Setelah diurutkan : "<<endl;
    for(maks=0; maks<angka; maks++){
        cout<<nilai[maks]<<" | ";
    }
    cout<<endl;

    cout<< "Masukkan Angka yang Ingin Dicari : ";
    cin>>dicari;
    for(maks=0; maks<angka; maks++){
        if(nilai[maks]==dicari){
            cout<< "Angka "<<dicari<<" didalam indeks ke "<<maks+1<<endl;
        }
    }
    return 0;
}
