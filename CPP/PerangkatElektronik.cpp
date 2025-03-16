#pragma once
#include <iostream>
#include <string>

using namespace std;

class PerangkatElektronik {
protected:
    string merk;
    string nama;
    int tahun;

public:
    PerangkatElektronik() {}

    PerangkatElektronik(string merk, string nama, int tahun) {
        this->merk = merk;
        this->nama = nama;
        this->tahun = tahun;
    }

    void setMerk(string merk) {
        this->merk = merk;
    }

    string getMerk() {
        return merk;
    }

    void setNama(string nama) {
        this->nama = nama;
    }

    string getNama() {
        return nama;
    }

    void setTahun(int tahun) {
        this->tahun = tahun;
    }

    int getTahun() {
        return tahun;
    }

    virtual ~PerangkatElektronik() {}
};
