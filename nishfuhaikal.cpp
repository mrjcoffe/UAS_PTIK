#include <iostream>
using namespace std;

int main()
{
    int i,n,x,temp,cari,a;
    cout << "Masukkan banyaknya angka = ";
    cin >> x;
    cout << "\n";
    int bil[x];
    for(int index = 0;index < x;index++){
        cout << "Masukan angka ke- "<<index+1<<" = ";
        cin >> bil[index];
    }
    cout << "\n";
    for(i = 0; i < x-1; i++){
        for(n=i+1; n<x; n++){
            if(bil[i]>bil[n]){
                temp = bil[i];
                bil[i] = bil[n];
                bil[n] = temp;
            }
        }
    }
    cout << "Hasil setelah diurutkan : "<<endl;
    for(int index = 0;index < x;index++){
        cout << bil[index]<<" ";
    }
    cout << endl;
    cout << "Masukan angka yang ingin anda cari : ";
    cin >> cari;
    a = 0;
    for(int index = 0;index < x;index++){
        if(bil[index]==cari){
                a = 1;
                cout << "Angka "<<cari<<" terdapat dalam indeks ke "<<index+1<<endl;
        }
    }
    if(a==0){
        cout << "Angka tidak ditemukan \n";
    }
    return 0;
}
