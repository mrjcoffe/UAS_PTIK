#include <iostream>
#include <conio.h>
using namespace std;
int main() {
  int i,x,m,n,cari,ketemu=0;
  int A[100];
  
  cout<<"=== MENGURUTKAN DATA ==="<<endl;
  cout<<"------------------------"<<endl;
  cout<<"Masukan Banyaknya Angka : ";
  cin>>x;
  cout<<endl;

  for (i=1;i<=x;i++)
  {
	cout<<"Masukan Angka Ke-"<<i<<" : ";
	cin>>A[i];
  }
 for (int i=1; i<=x; i++) {
 	for (int m=1; m<=x; m++) {
 		if(A[i] < A[m]){
 			n = A[i];
            A[i] = A[m];
            A[i] = n;
		 }
	 }
 }
 cout<<"\nHasil setelah diurutkan : "<<endl;
 for (int i=1; i<=x; i++) {
 	cout<<A[i]<<" ";
 }
  cout<<endl;
  cout<<"Masukkan angka yang ingin anda cari : ";
  cin>>cari;
  cout<<endl;
  
  for(i=0;i<=x;i++)
  {
	  if (A[i]==cari)
	  {
		  ketemu=1;
		  cout<<"Angka "<<cari<<" terdapat didalam indeks Ke-"<<i;
	  }
  }
  if (ketemu==0)
  {
  	cout<<"Data tidak ditemukan";
  }
  
  getch();
}
