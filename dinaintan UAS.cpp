#include <iostream>
#include <conio.h>
using namespace std;

int jumlah, asc;

main(){
    cout << "Masukan jumlah bilangan : ";
    cin >> jumlah;

    int nilai[jumlah];

    for(int i=0; i<jumlah; i++){
        cout << "Masukan bilagan ke- " << (i+1) << " : ";
        cin >> nilai[i];
    }

    for(int c=1;c<jumlah;c++)
    {
        for(int d=0;d<jumlah-c;d++)
        {
            if(nilai[d] > nilai[d+1])
            {
                asc=nilai[d];
                nilai[d]=nilai[d+1];
                nilai[d+1]=asc;
            }
        }
    }

    cout << endl << "Hasil Pengurutan Adalah";
    for(int i=0;i<jumlah;i++)
    {
        cout << " " << nilai[i];
    }
    cout << endl;
    getch();
    return 0;
}
