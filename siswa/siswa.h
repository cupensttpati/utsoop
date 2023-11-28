#include <iostream>
#include <string>

using namespace std;

class Siswa {
public:
    // Properti nama (string) dan nilai (integer)
    string nama;
    int nilai;

    // Konstruktor untuk inisialisasi objek Siswa
    Siswa(string nama, int nilai) {
        Siswa::nama = nama;
        Siswa::nilai = nilai;
    }

    // Fungsi untuk menampilkan informasi siswa
    void tampilkanInfo() {
        cout << "Nama: " << nama << endl;
        cout << "Nilai: " << nilai << endl;
    }

    // Setter untuk mengatur nilai properti nama
    void setNama(string newNama) {
        nama = newNama;
    }

    // Getter untuk mendapatkan nilai properti nama
    string getNama() {
        return nama;
    }

    // Setter untuk mengatur nilai properti nilai
    void setNilai(int newNilai) {
        nilai = newNilai;
    }

    // Getter untuk mendapatkan nilai properti nilai
    int getNilai() {
        return nilai;
    }

    // Destruktor untuk membersihkan sumber daya jika diperlukan
    ~Siswa() {
        cout << "Objek Siswa dengan nama " << nama << " telah dihapus." << endl;
    }
};
