#pragma once
#include <iostream>
#include <string>

using namespace std;

class Komponen {
private:
    string merk;  // Atribut untuk merk komponen
    string nama;  // Atribut untuk nama komponen
    int harga;    // Atribut untuk harga komponen

public:
    // Constructor default
    Komponen() {
        // Inisialisasi default
        merk = "";
        nama = "";
        harga = 0;
    }

    // Constructor dengan parameter
    Komponen(string merk, string nama, int harga) {
        this->merk = merk;
        this->nama = nama;
        this->harga = harga;
    }

    // Setter untuk merk
    void setMerk(string merk) {
        this->merk = merk;
    }

    // Setter untuk nama
    void setNama(string nama) {
        this->nama = nama;
    }

    // Setter untuk harga
    void setHarga(int harga) {
        this->harga = harga;
    }

    // Getter untuk merk
    string getMerk() {
        return merk;
    }

    // Getter untuk nama
    string getNama() {
        return nama;
    }

    // Getter untuk harga
    int getHarga() {
        return harga;
    }

    // Destructor
    ~Komponen() {
        
    }
};
