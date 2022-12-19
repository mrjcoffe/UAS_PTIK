#include <iostream>
#include <array>
using namespace std;

int main() {
  int n, x, pilih, ini[1];

  cout << "Masukan banyaknya angka = ";
  cin >> n;
  int arr[n];

  // gunakan loop untuk memasukkan angka
  for (int i = 1; i <= n; ++i) {
    cout << "Masukkan angka ke-" << i << ": ";
    cin >> arr[i];
    ini[i] = arr[i];
  }

  // proses pengurutan
  for (int i=1; i<=n; i++){
        for (int j=1; j<=n; j++){
            if (arr[i] < arr[j]){
                x = arr[i];
                arr[i] = arr[j];
                arr[j] = x;
            }
        }
    }

  cout << "Hasil setelah diurutkan: " << endl;
  for (int i=1; i<=n; i++){
    cout << arr[i] << ' ';
  }

  cout << endl;

  // untuk mencari angka
  cout << "Masukkan angka yang ingin dicari: ";
  cin >> pilih;

  for (int i = 1; i <= n; i++) {
    if (ini[i] == pilih) {
      cout << "Angka " << pilih << " terdapat di dalam indeks ke " << i << endl;
      break; 
    }
  }

  return 0;
}
