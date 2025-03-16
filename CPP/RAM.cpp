#pragma once
#include <iostream>
#include <string>
#include "Komponen.cpp"  

using namespace std;

class RAM : public Komponen {
private:
    int kapasitas;         // Kapasitas RAM dalam GB
    string tipe;           // Tipe RAM (misalnya DDR4, DDR3)
    float kecepatan;       // Kecepatan RAM dalam MHz
public:
    // Constructor default
    RAM() : Komponen() {
        kapasitas = 0;
        tipe = "";
        kecepatan = 0.0;
    }

    // Constructor dengan parameter
    RAM(string merk, string nama, int harga, int kapasitas, string tipe, float kecepatan)
        : Komponen(merk, nama, harga) {  // Memanggil constructor dari Komponen
        this->kapasitas = kapasitas;
        this->tipe = tipe;
        this->kecepatan = kecepatan;
    }

    // Setter untuk kapasitas
    void setKapasitas(int kapasitas) {
        this->kapasitas = kapasitas;
    }

    // Setter untuk tipe
    void setTipe(string tipe) {
        this->tipe = tipe;
    }

    // Setter untuk kecepatan
    void setKecepatan(float kecepatan) {
        this->kecepatan = kecepatan;
    }

    // Getter untuk kapasitas
    int getKapasitas() {
        return kapasitas;
    }

    // Getter untuk tipe
    string getTipe() {
        return tipe;
    }

    // Getter untuk kecepatan
    float getKecepatan() {
        return kecepatan;
    }

    // Destructor
    ~RAM() {
        // Destructor kosong jika ada pembersihan objek dinamis bisa ditambahkan disini
    }
};
