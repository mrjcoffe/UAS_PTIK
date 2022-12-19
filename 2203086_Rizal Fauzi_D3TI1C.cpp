#include <iostream>
using namespace std;

int main()
{
    int angka, maks, cari, nilai[100];

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
    for(maks=1; maks<= angka; maks++){
        if(nilai[maks]==cari){
            cout<< "Angka "<<cari<<" didalam indeks ke "<<maks<<endl;
        }
    }
    return 0;
}
