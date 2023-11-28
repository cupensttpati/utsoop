#include <iostream>
#include <string>

class Mobil {
public:
    // Constructor
    Mobil(const std::string& _nama, const std::string& _model, double _kecepatan = 0)
        : nama(_nama), model(_model), kecepatan(_kecepatan) {}

    // Method untuk mempercepat mobil
    void percepat(double tambahanKecepatan) {
        if (tambahanKecepatan > 0) {
            kecepatan += tambahanKecepatan;
            std::cout << "Mobil " << nama << " dipercepat menjadi " << kecepatan << " km/h." << std::endl;
        } else {
            std::cout << "Tambahan kecepatan harus lebih besar dari 0." << std::endl;
        }
    }

    // Method untuk memperlambat mobil
    void perlambat(double penguranganKecepatan) {
        if (penguranganKecepatan > 0) {
            kecepatan -= penguranganKecepatan;
            if (kecepatan < 0) {
                kecepatan = 0;
            }
            std::cout << "Mobil " << nama << " diperlambat menjadi " << kecepatan << " km/h." << std::endl;
        } else {
            std::cout << "Pengurangan kecepatan harus lebih besar dari 0." << std::endl;
        }
    }

    // Method untuk menampilkan informasi mobil
    void tampilkanInformasi() const {
        std::cout << "Informasi Mobil:" << std::endl;
        std::cout << "Nama: " << nama << std::endl;
        std::cout << "Model: " << model << std::endl;
        std::cout << "Kecepatan: " << kecepatan << " km/h" << std::endl;
    }

    // Atribut tanpa private
    std::string nama;
    std::string model;
    double kecepatan;
};

int main() {
    // Contoh penggunaan
    Mobil mobilBalap("Ferrari", "458 Italia");

    mobilBalap.tampilkanInformasi();

    mobilBalap.percepat(50);

    mobilBalap.perlambat(20);

    std::cout << "\nSetelah perlambatan tambahan:" << std::endl;
    mobilBalap.tampilkanInformasi();

    return 0;
}
