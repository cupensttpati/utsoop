#include <iostream>
#include <cmath>

class Tabung {
private:
    double jariJari;
    double tinggi;

public:
    // Constructor
    Tabung(double r, double h) : jariJari(r), tinggi(h) {}

    // Getter
    double getJariJari() const {
        return jariJari;
    }

    double getTinggi() const {
        return tinggi;
    }

    // Setter
    void setJariJari(double r) {
        if (r > 0) {
            jariJari = r;
        } else {
            std::cout << "Jari-jari harus lebih besar dari 0" << std::endl;
        }
    }

    void setTinggi(double h) {
        if (h > 0) {
            tinggi = h;
        } else {
            std::cout << "Tinggi harus lebih besar dari 0" << std::endl;
        }
    }

    // Methods
    double hitungVolume() const {
        return M_PI * std::pow(jariJari, 2) * tinggi;
    }

    double hitungLuasPermukaan() const {
        return 2 * M_PI * jariJari * (jariJari + tinggi);
    }
};

int main() {
    // Contoh penggunaan
    Tabung tabung(3, 5);

    std::cout << "Jari-jari: " << tabung.getJariJari() << std::endl;
    std::cout << "Tinggi: " << tabung.getTinggi() << std::endl;
    std::cout << "Volume: " << tabung.hitungVolume() << std::endl;
    std::cout << "Luas Permukaan: " << tabung.hitungLuasPermukaan() << std::endl;

    // Mengubah jari-jari dan tinggi menggunakan setter
    tabung.setJariJari(4);
    tabung.setTinggi(7);

    std::cout << "\nSetelah diubah:" << std::endl;
    std::cout << "Jari-jari: " << tabung.getJariJari() << std::endl;
    std::cout << "Tinggi: " << tabung.getTinggi() << std::endl;
    std::cout << "Volume: " << tabung.hitungVolume() << std::endl;
    std::cout << "Luas Permukaan: " << tabung.hitungLuasPermukaan() << std::endl;

    return 0;
}
