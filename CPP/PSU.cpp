#pragma once
#include <iostream>
#include <string>
#include "Komponen.cpp"  // Mengimpor Komponen langsung

using namespace std;

class PSU : public Komponen {
private:
    string kapasitas;    // Kapasitas PSU (misalnya 500W, 650W)
    string efisiensi;    // Efisiensi PSU (misalnya "80+", "90+")
    string jenis_kabel;  // Jenis kabel PSU (misalnya "Modular", "Non-Modular")
public:
    // Constructor default
    PSU() : Komponen() {
        kapasitas = "";
        efisiensi = "";
        jenis_kabel = "";
    }

    // Constructor dengan parameter
    PSU(string merk, string nama, int harga, string kapasitas, string efisiensi, string jenis_kabel)
        : Komponen(merk, nama, harga) {  // Memanggil constructor dari Komponen
        this->kapasitas = kapasitas;
        this->efisiensi = efisiensi;
        this->jenis_kabel = jenis_kabel;
    }

    // Setter untuk kapasitas
    void setKapasitas(string kapasitas) {
        this->kapasitas = kapasitas;
    }

    // Setter untuk efisiensi
    void setEfisiensi(string efisiensi) {
        this->efisiensi = efisiensi;
    }

    // Setter untuk jenis_kabel
    void setJenisKabel(string jenis_kabel) {
        this->jenis_kabel = jenis_kabel;
    }

    // Getter untuk kapasitas
    string getKapasitas() {
        return kapasitas;
    }

    // Getter untuk efisiensi
    string getEfisiensi() {
        return efisiensi;
    }

    // Getter untuk jenis_kabel
    string getJenisKabel() {
        return jenis_kabel;
    }

    // Destructor
    ~PSU() {
        // Destructor kosong, karena tidak ada alokasi memori dinamis
    }
};
