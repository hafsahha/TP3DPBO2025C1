#pragma once
#include <iostream>
#include <string>
#include "Komponen.cpp"  // Mengimpor Komponen langsung

using namespace std;

class Storage : public Komponen {
private:
    int kapasitas;         // Kapasitas penyimpanan dalam GB
    string tipe_storage;   // Tipe penyimpanan (misalnya HDD, SSD)
    float kecepatan_tf;    // Kecepatan transfer data dalam MB/s
public:
    // Constructor default
    Storage() : Komponen() {
        kapasitas = 0;
        tipe_storage = "";
        kecepatan_tf = 0.0;
    }

    // Constructor dengan parameter
    Storage(string merk, string nama, int harga, int kapasitas, string tipe_storage, float kecepatan_tf)
        : Komponen(merk, nama, harga) {  // Memanggil constructor dari Komponen
        this->kapasitas = kapasitas;
        this->tipe_storage = tipe_storage;
        this->kecepatan_tf = kecepatan_tf;
    }

    // Setter untuk kapasitas
    void setKapasitas(int kapasitas) {
        this->kapasitas = kapasitas;
    }

    // Setter untuk tipe_storage
    void setTipeStorage(string tipe_storage) {
        this->tipe_storage = tipe_storage;
    }

    // Setter untuk kecepatan_tf
    void setKecepatanTF(float kecepatan_tf) {
        this->kecepatan_tf = kecepatan_tf;
    }

    // Getter untuk kapasitas
    int getKapasitas() {
        return kapasitas;
    }

    // Getter untuk tipe_storage
    string getTipeStorage() {
        return tipe_storage;
    }

    // Getter untuk kecepatan_tf
    float getKecepatanTF() {
        return kecepatan_tf;
    }

    // Destructor
    ~Storage() {
        // Destructor kosong jika ada pembersihan objek dinamis bisa ditambahkan disini
    }
};
