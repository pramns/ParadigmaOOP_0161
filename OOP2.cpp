#include <iostream>
using namespace std;

class Barang { 
  public :
    string nama;
    int jumlah;
    string kategori;
    string tanggalpro;

    void Tampilkan(){
      cout << "Nama = " << nama << endl;
      cout << "jumlah = " << jumlah << endl;
      cout << "Kategori = " << kategori << endl;
      cout << "Tanggal Produksi = " << tanggalpro << endl;
    }
};

