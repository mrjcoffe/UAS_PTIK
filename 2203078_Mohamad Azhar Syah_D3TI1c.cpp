#include <iostream>

using namespace std;

int main()
{
    int i,j,b,tmp,cari,ada;
    cout<<"masuka bayaknya angka : ";
    cin >> b;
    int angka[b];
    for(int index=0;index<b;index++){
        cout<<"masukan angka ke - "<<index+1<<" : ";
        cin >> angka[index];
    }

    for(i=0; i<b-1; i++){
           for(j=i+1; j<b; j++){
              if(angka[i]>angka[j]){
                tmp = angka[i];
                angka[i] = angka[j];
                angka[j] = tmp;
             }
          }
       }
    cout<<"setelah diurutkan : "<<endl;
    for(int index=0;index<b;index++){
        cout << angka[index]<<" ";
    }
    cout<<endl;

    cout<<"Masukan angka yang ingin anda cari : ";
    cin>>cari;
    ada = 0;
    for(int index=0;index<b;index++){
        if(angka[index]==cari){
                ada = 1;
                cout<<"Angka "<<cari<<" terdapat dalam index ke  "<<index+1<<endl;
        }
    }
    if(ada==0){
        cout<<"Angka tidak ditemukan \n";
    }
    return 0;
}
