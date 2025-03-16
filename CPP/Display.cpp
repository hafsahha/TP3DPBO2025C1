#pragma once
#include <iostream>
#include <string>
#include "Komponen.cpp"  // Mengimpor Komponen langsung

using namespace std;

class Display : public Komponen {
private:
    string tipe_display;  // Tipe display (misalnya LED, OLED, LCD)
    string resolusi;      // Resolusi layar (misalnya "1920x1080")
    float ukuran;         // Ukuran layar dalam inci
public:
    // Constructor default
    Display() : Komponen() {
        tipe_display = "";
        resolusi = "";
        ukuran = 0.0;
    }

    // Constructor dengan parameter
    Display(string merk, string nama, int harga, string tipe_display, string resolusi, float ukuran)
        : Komponen(merk, nama, harga) {  // Memanggil constructor dari Komponen
        this->tipe_display = tipe_display;
        this->resolusi = resolusi;
        this->ukuran = ukuran;
    }

    // Setter untuk tipe_display
    void setTipeDisplay(string tipe_display) {
        this->tipe_display = tipe_display;
    }

    // Setter untuk resolusi
    void setResolusi(string resolusi) {
        this->resolusi = resolusi;
    }

    // Setter untuk ukuran
    void setUkuran(float ukuran) {
        this->ukuran = ukuran;
    }

    // Getter untuk tipe_display
    string getTipeDisplay() {
        return tipe_display;
    }

    // Getter untuk resolusi
    string getResolusi() {
        return resolusi;
    }

    // Getter untuk ukuran
    float getUkuran() {
        return ukuran;
    }

    // Destructor
    ~Display() {
        // Destructor kosong, karena tidak ada alokasi memori dinamis
    }
};
