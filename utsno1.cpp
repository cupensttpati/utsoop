#include <iostream>

class PersegiPanjang {
public:
    double panjang;
    double lebar;

public:
    // Setter untuk panjang
    void setPanjang(double p) {
        panjang = p;
    }

    // Getter untuk panjang
    double getPanjang() const {
        return panjang;
    }

    // Setter untuk lebar
    void setLebar(double l) {
        lebar = l;
    }

    // Getter untuk lebar
    double getLebar() const {
        return lebar;
    }

    // Menghitung luas persegi panjang
    double hitungLuas() const {
        return panjang * lebar;
    }

    // Menghitung keliling persegi panjang
    double hitungKeliling() const {
        return 2 * (panjang + lebar);
    }
};

int main() {
    using namespace std; // Menggunakan namespace std

    // Membuat objek dari kelas PersegiPanjang
    PersegiPanjang persegi;

    // Menggunakan setter untuk mengatur panjang dan lebar
    persegi.setPanjang(5.0);
    persegi.setLebar(3.0);

    // Menggunakan getter untuk mendapatkan panjang dan lebar
    cout << "Panjang: " << persegi.getPanjang() << endl;
    cout << "Lebar: " << persegi.getLebar() << endl;

    // Menghitung dan menampilkan luas dan keliling
    cout << "Luas: " << persegi.hitungLuas() << endl;
    cout << "Keliling: " << persegi.hitungKeliling() << endl;

    return 0;
}
