#include <iostream>
using namespace std;

int main()
{
    int angka, maks, cari, awal, nilai[100];

    cout<< "Masukkan Banyaknya Angka : ";
    cin>>angka;
    for(maks=1; maks<=angka; maks++){
        cout<<"masukkan angka ke-"<<maks<<" = ";
        cin>>nilai[maks];
    }

    cout<< "Hasil Setelah diurutkan : "<<endl;
    for(maks=1; maks<=angka; maks++){
        cout<<nilai[maks]<<" | ";
    }
    cout<<endl;

    cout<< "Masukkan Angka yang Ingin Dicari : ";
    cin>>cari;
    awal = 0;
    for(maks=1; maks<= angka; maks++){
        if(nilai[maks]==cari){
            awal = 1;
            cout<< "Angka "<<cari<<" didalam indeks ke "<<maks+1<<endl;
        }
    }
    if(nilai[maks]!=cari){
        cout<< "Angka Tidak Di temukan"<<endl;
    }
    return 0;
}
