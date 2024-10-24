#include <iostream>
using namespace std;

struct zodiac {
    int hari, bln, thn;
};

// Menggunakan referensi untuk parameter
void inputTanggal(zodiac &tanggal) {
    cout << "Masukkan Tanggal lahir: ";
    cin >> tanggal.hari;
    cout << "Masukkan Bulan lahir: ";
    cin >> tanggal.bln;
    cout << "Masukkan Tahun lahir: ";
    cin >> tanggal.thn;

    cout << "Tanggal yang dimasukkan: " << tanggal.hari << "-" << tanggal.bln << "-" << tanggal.thn << endl;
}

void tampilZodiak(zodiac tgl) {
    string zodiak;
    if ((tgl.bln == 1 && tgl.hari >= 20) || (tgl.bln == 2 && tgl.hari <= 18)) {
        zodiak = "Aquarius"; // Aquarius
    } else if ((tgl.bln == 2 && tgl.hari >= 19) || (tgl.bln == 3 && tgl.hari <= 20)) {
        zodiak = "Pisces"; // Pisces
    } else if ((tgl.bln == 3 && tgl.hari >= 21) || (tgl.bln == 4 && tgl.hari <= 19)) {
        zodiak = "Aries"; // Aries
    } else if ((tgl.bln == 4 && tgl.hari >= 20) || (tgl.bln == 5 && tgl.hari <= 20)) {
        zodiak = "Taurus"; // Taurus
    } else if ((tgl.bln == 5 && tgl.hari >= 21) || (tgl.bln == 6 && tgl.hari <= 20)) {
        zodiak = "Gemini"; // Gemini
    } else if ((tgl.bln == 6 && tgl.hari >= 21) || (tgl.bln == 7 && tgl.hari <= 22)) {
        zodiak = "Cancer"; // Cancer
    } else if ((tgl.bln == 7 && tgl.hari >= 23) || (tgl.bln == 8 && tgl.hari <= 22)) {
        zodiak = "Leo"; // Leo
    } else if ((tgl.bln == 8 && tgl.hari >= 23) || (tgl.bln == 9 && tgl.hari <= 22)) {
        zodiak = "Virgo"; // Virgo
    } else if ((tgl.bln == 9 && tgl.hari >= 23) || (tgl.bln == 10 && tgl.hari <= 22)) {
        zodiak = "Libra"; // Libra
    } else if ((tgl.bln == 10 && tgl.hari >= 23) || (tgl.bln == 11 && tgl.hari <= 21)) {
        zodiak = "Scorpio"; // Scorpio
    } else if ((tgl.bln == 11 && tgl.hari >= 22) || (tgl.bln == 12 && tgl.hari <= 21)) {
        zodiak = "Sagittarius"; // Sagittarius
    } else {
        zodiak = "Capricorn"; // Capricorn
    }
    cout << "Tanggal lahir anda [tgl-bln-thn]: " << tgl.hari << "-" << tgl.bln << "-" << tgl.thn << endl;
    cout << "Zodiak Anda adalah: " << zodiak << endl;
}

int main() {
    zodiac tgl;

    inputTanggal(tgl);  // Input tanggal dari pengguna
    tampilZodiak(tgl);   // Tampilkan zodiak

    return 0;
}
