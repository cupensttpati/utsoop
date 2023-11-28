#include <iostream>
#include <string>

class RekeningBank {
public:
    // Constructor
    RekeningBank(const std::string& _nama, const std::string& _nomorRekening, double _saldo = 0)
        : nama(_nama), nomorRekening(_nomorRekening), saldo(_saldo) {}

    // Method untuk menambah saldo
    void tambahSaldo(double jumlah) {
        if (jumlah > 0) {
            saldo += jumlah;
            std::cout << "Saldo berhasil ditambahkan. Saldo saat ini: " << saldo << std::endl;
        } else {
            std::cout << "Jumlah harus lebih besar dari 0 untuk menambahkan saldo." << std::endl;
        }
    }

    // Method untuk mengurangi saldo
    void kurangiSaldo(double jumlah) {
        if (0 < jumlah && jumlah <= saldo) {
            saldo -= jumlah;
            std::cout << "Penarikan berhasil. Saldo saat ini: " << saldo << std::endl;
        } else {
            std::cout << "Jumlah penarikan tidak valid atau melebihi saldo." << std::endl;
        }
    }

    // Method untuk menampilkan informasi rekening
    void tampilkanInformasi() const {
        std::cout << "Informasi Rekening:" << std::endl;
        std::cout << "Nama: " << nama << std::endl;
        std::cout << "Nomor Rekening: " << nomorRekening << std::endl;
        std::cout << "Saldo: " << saldo << std::endl;
    }

    // Atribut tanpa private
    std::string nama;
    std::string nomorRekening;
    double saldo;
};

int main() {
    // Contoh penggunaan
    RekeningBank rekening("cakimin", "123456789");

    rekening.tampilkanInformasi();

    rekening.tambahSaldo(1000);

    rekening.kurangiSaldo(500);

    rekening.tampilkanInformasi();

    return 0;
}
