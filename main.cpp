#include <iostream>
#include "siswa/siswa.h"

int main() {
    // Membuat objek siswa1 dengan nama "John" dan nilai 90
    Siswa siswa1("sukijan", 90);

    // Memanggil fungsi tampilkanInfo() untuk menampilkan informasi siswa1
    cout << "Informasi Siswa 1:" << endl;
    siswa1.tampilkanInfo();

    // Membuat objek siswa2 dengan nama "Alice" dan nilai 85
    Siswa siswa2("ngatman", 85);

    // Memanggil fungsi tampilkanInfo() untuk menampilkan informasi siswa2
    cout << "\nInformasi Siswa 2:" << endl;
    siswa2.tampilkanInfo();

    return 0;
}