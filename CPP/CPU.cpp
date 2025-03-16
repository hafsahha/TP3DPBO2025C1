#pragma once
#include <iostream>
#include <string>
#include "Komponen.cpp"  // Mengimpor Komponen langsung

using namespace std;

class CPU : public Komponen {
private:
    int jumlah_core;        // Jumlah core pada CPU
    float kecepatan_clock;  // Kecepatan clock CPU dalam GHz
public:
    // Constructor default
    CPU() : Komponen() {
        jumlah_core = 0;
        kecepatan_clock = 0.0;
    }

    // Constructor dengan parameter
    CPU(string merk, string nama, int harga, int jumlah_core, float kecepatan_clock)
        : Komponen(merk, nama, harga) {  // Memanggil constructor dari Komponen
        this->jumlah_core = jumlah_core;
        this->kecepatan_clock = kecepatan_clock;
    }

    // Setter untuk jumlah_core
    void setJumlahCore(int jumlah_core) {
        this->jumlah_core = jumlah_core;
    }

    // Setter untuk kecepatan_clock
    void setKecepatanClock(float kecepatan_clock) {
        this->kecepatan_clock = kecepatan_clock;
    }

    // Getter untuk jumlah_core
    int getJumlahCore() {
        return jumlah_core;
    }

    // Getter untuk kecepatan_clock
    float getKecepatanClock() {
        return kecepatan_clock;
    }

    // Destructor
    ~CPU() {
        // Destructor kosong, karena tidak ada alokasi memori dinamis
    }
};
