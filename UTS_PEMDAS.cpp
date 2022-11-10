#include <iostream>
#include <string>
using namespace std;

int main() {
  int menu;
  cout << "----MENU----" << endl;
  cout << "1. Anak dengan permen" << endl;
  cout << "2. Direktur bank Hahahihi" << endl;
  cout << "3. Warung Ibu Saleh" << endl;
  cout << "Silakan pilih menu (1/2/3) : "; cin >> menu;
  cout << endl;
  
  if (menu == 1){
  int i, j, n, selisih, temp1, permen[10];
  string temp2, anak[10];
  n =3;
  for (i=1; i<=n; i++){
    cout << "Masukkan nama anak : "; cin >> anak[i]; 
    cout << "Masukkan jumlah permen : "; cin >> permen[i];
  }
  for (i=1; i<=n; i++){
    for (i=1; i<=n; i++){
      if (permen[i] < permen[i+1]){
        temp1 = permen[i];
        permen[i] = permen[i+1];
        permen[i+1] = temp1;
        temp2 = anak[i];
        anak[i] = anak[i+1];
        anak[i+1] = temp2;
      }
    }
  }
  if (permen[1] == permen[2] && permen[2] == permen[3]){
    cout << "Jumlah permen " << anak[1] << ", " << anak[2] << ", " << anak[3] << "sama" << endl;
  } else if (permen[1] == permen[2]){
    selisih = permen[1] - permen[3];
    cout << "Permen terbanyak dimiliki oleh " << anak[1] << ", " << anak[2] << endl;
    cout << "Selisih permen " << anak[1] << " dan permen " << anak[2] << " terhadap permen " << anak[3] << " adalah " << selisih << " buah" << endl; 
  } else {
     cout << "Permen terbanyak dimiliki oleh " << anak[1] << endl;
    selisih = permen[1] - permen[2];
    cout << "Selisih permen " << anak[1] << " terhadap permen " << anak[2] << " adalah " << selisih << " buah" << endl;
    selisih = permen[1] - permen[3];
    cout << "Selisih permen " << anak[1] << " terhadap permen " << anak[3] << " adalah " << selisih << " buah" << endl;
  }
    return 0;
} else if (menu == 2){
    int i, n;
    string pin, pin1;
    pin = "123456";
    for (i=1; i<=3; i++){
      cout << "Input pin ATM untuk melanjutkan : "; cin >> pin1;
      if (pin1 == pin){
        cout << "Pin anda sudah benar" << endl;
        return 0;
      } else {
        cout << "Pin yang anda masukkan salah" << endl;
      }
    }
    cout << "KARTU ANDA TELAH DIBLOKIR, SILAKAN HUBUNGI BANK TERDEKAT";
   return 0;
} else if (menu == 3){
   int i, n, jam; 
   float total, harga[100], harga1[100];
    total = 0;
    cout << "Jam belanja (penulisan jam dan menit jangan dipisah apapun, misal 14:20 menjadi 1420) : "; cin >> jam;
    cout << "Masukkan jumlah barang : "; cin >> n;
    for (i=1; i<=n; i++) {
      cout << "Harga barang " << i << " : Rp. "; cin >> harga[i];
      if (jam >= 1300 && jam <= 1400) {
        harga1[i] = harga[i] - (harga[i] * 0.2);
      } else {
        harga1[i] = harga[i];
      }
      total = total + harga1[i];
      cout << "Harga barang setelah diskon : Rp. " << harga1[i] << endl;
    }
    cout << "Total harga semua barang : Rp. " << total << endl;
    return 0;
} else {
    cout << "Input Error" << endl;
    return 0;
}
  
}