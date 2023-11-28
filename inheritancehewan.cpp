#include <iostream>
#include <string>

using namespace std;

class Hewan {
public:
    // Property
    string jenis;
    string namaHewan;
    string caraBerkembangBiak;
    string caraBerjalan;

    // Konstruktor
    Hewan(string jenis, string namaHewan, string caraBerkembangBiak, string caraBerjalan)
        : jenis(jenis), namaHewan(namaHewan), caraBerkembangBiak(caraBerkembangBiak), caraBerjalan(caraBerjalan) {}

    void tampilkanInfo()
    {
        cout << "Jenis: " << jenis << endl;
        cout << "Nama Hewan: " << namaHewan << endl;
        cout << "Cara Melahirkan " << caraBerkembangBiak << endl;
        cout << "Cara Berjalan : " << caraBerjalan << endl;
    }
};

class Anjing : public Hewan {
public:
    string berbulu;

    Anjing(string jenis,  string namaHewan, string caraBerkembangBiak,string caraBerjalan, const string& berbulu)
        : Hewan(jenis, namaHewan, caraBerkembangBiak, caraBerjalan), berbulu(berbulu) {}

    void tampilkanInformasi() {
        Hewan::tampilkanInfo();
        cout << "Apakah Berbulu?: " << berbulu << endl<< endl;
    }
};
class Kucing : public Hewan {
public:
    string habitat;

    Kucing(string jenis,  string namaHewan, string caraBerkembangBiak,string caraBerjalan, const string& habitat)
        : Hewan(jenis, namaHewan, caraBerkembangBiak, caraBerjalan), habitat(habitat){}

    void tampilkanInformasi() {
        Hewan::tampilkanInfo();
        cout << "manakah habitat kocheng?: " << habitat << endl<< endl;
    }
    
};
class Monyet : public Hewan {
public:
    string jenisMakanan;

    Monyet(string jenis,  string namaHewan, string caraBerkembangBiak,string caraBerjalan, const string& jenisMakanan)
        : Hewan(jenis, namaHewan, caraBerkembangBiak, caraBerjalan), jenisMakanan(jenisMakanan){}

    void tampilkanInformasi() {
        Hewan::tampilkanInfo();
        cout << "Monyet termasuk hewan pemakan apa?: " << jenisMakanan << endl<< endl;
    }
    
};
class Babi : public Hewan {
public:
    string sexuality;

    Babi(string jenis, string namaHewan, string caraBerkembangBiak, string caraBerjalan, const string& sex)
        : Hewan(jenis, namaHewan, caraBerkembangBiak, caraBerjalan), sexuality(sex) {}

    void tampilkanInformasi() {
        Hewan::tampilkanInfo();
        cout << "apakah babi hewan yang lurus?: " << sexuality << endl << endl;
    }






    
};

int main()
{
    Anjing Anjing1("Mamalia", "Anjing", "vivipar","empat kaki","ya");
    Anjing1.tampilkanInformasi();
    Kucing kucing1("Mamalia", "Kucing", "vivipar","empat kaki","darat");
    kucing1.tampilkanInformasi();
    Monyet monyet1("Mamalia", "Monyet", "vivipar","dua kaki","Herbivora");
    monyet1.tampilkanInformasi();
    Babi babi1("Mamalia", "Babi", "vivipar","empat kaki","belok");
    babi1.tampilkanInformasi();
    return 0;
}