#pragma once
#include <iostream>
#include <string>
#include "Komponen.cpp"

using namespace std;

class Baterai : public Komponen {
private:
    int kapasitas;            // Kapasitas baterai dalam mAh
    string waktu_bertahan;    // Waktu bertahan baterai
public:
    // Constructor default
    Baterai() : Komponen() {
        kapasitas = 0;
        waktu_bertahan = "";
    }

    // Constructor dengan parameter
    Baterai(string merk, string nama, int harga, int kapasitas, string waktu_bertahan)
        : Komponen(merk, nama, harga) {  // Memanggil constructor dari Komponen
        this->kapasitas = kapasitas;
        this->waktu_bertahan = waktu_bertahan;
    }

    // Setter untuk kapasitas
    void setKapasitas(int kapasitas) {
        this->kapasitas = kapasitas;
    }

    // Setter untuk waktu_bertahan
    void setWaktuBertahan(string waktu_bertahan) {
        this->waktu_bertahan = waktu_bertahan;
    }

    // Getter untuk kapasitas
    int getKapasitas() {
        return kapasitas;
    }

    // Getter untuk waktu_bertahan
    string getWaktuBertahan() {
        return waktu_bertahan;
    }

    // Destructor
    ~Baterai() {
        // Destructor kosong jika ada pembersihan objek dinamis bisa ditambahkan disini
    }
};
