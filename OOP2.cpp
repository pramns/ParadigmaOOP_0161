#include <iostream>
using namespace std;

class Barang { 
  public :
    string nama;
    int jumlah;
    string kategori;
    string tanggalpro;

    void Tampilkan(){
      cout << "-Nama = " << nama << endl;
      cout << "-jumlah = " << jumlah << endl;
      cout << "-Kategori = " << kategori << endl;
      cout << "-Tanggal Produksi = " << tanggalpro << endl;
    }
};

int main (){
  Barang elektronik;
  elektronik.nama = "Laptop";
  elektronik.jumlah = 5;
  elektronik.kategori = "Elektronik";
  elektronik.tanggalpro = "2025-02-14";
  

  Barang NonElektronik;
  NonElektronik.nama ="Meja";
  NonElektronik.jumlah = 10;
  NonElektronik.kategori = "NonElektronik";
  NonElektronik.tanggalpro = "2024-04-16";

  cout << "Barang 1 =" << endl;
  elektronik.Tampilkan();
  cout << endl;
  cout << "Barang 2 =" << endl;
  NonElektronik.Tampilkan();
}