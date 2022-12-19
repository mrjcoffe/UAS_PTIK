#include <iostream>
using namespace std;
main(){
 int j,x,k;
 int cari, ketemu;
 int D[100];

 cout<<"PERCOBAAN MEMBUAT PROGRAM MEMBUAT BINARY SEARCH";
 cout<< "\n===============================================";
 cout<< endl;
 cout<<"masukan 10 buah data\n\n";
 for(j=1; j<=10; j++)
 {
cout<<"masukan data ke-"<<j<<" = ";
 cin>>D[j];
 }
 cout<<endl;
 cout<<"Input bilangan yang ingin dicari : ";
 cin>>cari;
 for (int j=1; j<=10; j++){
        for (int k=1; k<=10; k++){
            if (D[j] < D[k]){
                x = D[j];
                D[j] = D[k];
                D[j] = x;
            }
        }
    }
cout << "Hasil setelah diurutkan: " << endl;
  for (int j=1; j<=10; j++){
    cout << D[j] << ' ';
  }
 cout<<endl;
 ketemu=0;
 for(j=0; j<=10; j++)
 {
 if (D[j]==cari)
 {
 ketemu=1;
 cout<<"Data ditemukan pada indeks ke-"<<j<<endl;
 }
 }
 if(ketemu==0)
 {
 cout<<"Data tidak ditemukan"<<endl;
 }
}
