#include <iostream>
using namespace std;

class Barang{
public :
    string nama;
    int jumlah;
    string kategori;
    string tanggalProduksi;

    void printData(){
        cout << "Nama Barang " << nama << endl;
        cout << "Jumlah " << jumlah << endl;
        cout << "Kategori " << kategori << endl;
        cout << "Tanggal Produksi " << tanggalProduksi << endl;
    }
};// batas class

int main(){
    Barang elektronik;
    elektronik.nama = "TV";
    elektronik.jumlah = 2;
    elektronik.kategori = "elektronik";
    elektronik.tanggalProduksi = "2026-20-04";

    Barang nonElektronik;
    nonElektronik.nama = "Kursi";
    nonElektronik.jumlah = 4;
    nonElektronik.kategori = "nonElektronik";
    nonElektronik.tanggalProduksi = ""

}