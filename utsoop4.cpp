#include <iostream>
#include <string>
#include <vector>

class Mahasiswa {
public:
    // Constructor
    Mahasiswa(const std::string& _nama, const std::string& _nomorInduk)
        : nama(_nama), nomorInduk(_nomorInduk) {}

    // Method untuk menambah mata kuliah
    void tambahMataKuliah(const std::string& mataKuliah, int nilai) {
        daftarMataKuliah.push_back(std::make_pair(mataKuliah, nilai));
    }

    // Method untuk menghapus mata kuliah
    void hapusMataKuliah(const std::string& mataKuliah) {
        for (auto it = daftarMataKuliah.begin(); it != daftarMataKuliah.end(); ++it) {
            if (it->first == mataKuliah) {
                daftarMataKuliah.erase(it);
                break;
            }
        }
    }

    // Method untuk menghitung nilai rata-rata
    double hitungRataRata() const {
        if (daftarMataKuliah.empty()) {
            return 0.0;
        }

        double totalNilai = 0;
        for (const auto& mataKuliah : daftarMataKuliah) {
            totalNilai += mataKuliah.second;
        }

        return totalNilai / daftarMataKuliah.size();
    }

    // Method untuk menampilkan catatan akademik
    void tampilkanCatatanAkademik() const {
        std::cout << "Catatan Akademik Mahasiswa" << std::endl;
        std::cout << "Nama: " << nama << std::endl;
        std::cout << "Nomor Induk: " << nomorInduk << std::endl;

        if (daftarMataKuliah.empty()) {
            std::cout << "Daftar Mata Kuliah kosong." << std::endl;
        } else {
            std::cout << "Daftar Mata Kuliah dan Nilai:" << std::endl;
            for (const auto& mataKuliah : daftarMataKuliah) {
                std::cout << mataKuliah.first << ": " << mataKuliah.second << std::endl;
            }
            std::cout << "Rata-rata Nilai: " << hitungRataRata() << std::endl;
        }
    }

    // Atribut tanpa private
    std::string nama;
    std::string nomorInduk;
    std::vector<std::pair<std::string, int>> daftarMataKuliah;
};

int main() {
    // Contoh penggunaan
    Mahasiswa mahasiswa("cupen", "202211010");

    mahasiswa.tambahMataKuliah("Matematika", 85);
    mahasiswa.tambahMataKuliah("Fisika", 78);
    mahasiswa.tambahMataKuliah("Kimia", 90);

    mahasiswa.tampilkanCatatanAkademik();

    mahasiswa.hapusMataKuliah("Fisika");

    std::cout << "\nSetelah menghapus mata kuliah Fisika:" << std::endl;
    mahasiswa.tampilkanCatatanAkademik();

    return 0;
}
