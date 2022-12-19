#include <iostream>
using namespace std;
int main() {
  int x,z,i,y,cari,ketemu=0;
  int N[100];

  cout<<"#PROGRAM SEARCHING LINIER#\n";
  cout<<"==========================\n";
  cout<<"Masukan Banyaknya Angka : ";
  cin>>z;
  cout<<endl;

  for (x=1;x<=z;x++)
  {
	cout<<"Masukan Angka Ke-"<<x<<" : ";
	cin>>N[x];
  }
 for (int x=1; x<=z; x++) {
 	for (int i=1; i<=x; i++) {
 		if(N[x] < N[i]){
 			y = N[x];
            N[x] = N[i];
            N[x] = y;
		 }
	 }
 }
 cout<<"\nHasil setelah diurutkan : "<<endl;
 for (int x=1; x<=z; x++) {
 	cout<<N[x]<<" ";
 }
  cout<<endl;
  cout<<"Masukkan angka yang ingin anda cari : ";
  cin>>cari;
  cout<<"--------------------------"<<endl;
  cout<<endl;

  for(x=0;x<=z;x++)
  {
	  if (N[x]==cari)
	  {
		  ketemu=1;
		  cout<<"Angka "<<cari<<" terdapat didalam indeks Ke-"<<x;
	  }
  }
  if (ketemu==0)
  {
  	cout<<"Data tidak ditemukan";
  }
}
