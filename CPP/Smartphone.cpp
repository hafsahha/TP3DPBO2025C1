#pragma once
#include "Komponen.cpp"
#include "Baterai.cpp"
#include "RAM.cpp"
#include "Storage.cpp"
#include "CPU.cpp"
#include "Display.cpp"
#include "Sensor.cpp"
#include "PerangkatElektronik.cpp"

class Smartphone : public PerangkatElektronik {
private:
    string jenis_koneksi;
    Baterai baterai;
    RAM ram;
    Storage storage;
    CPU cpu;
    Display display;
    Sensor sensor;
    
public:
    // Constructor
    Smartphone(string merk, string nama, int tahun, string jenis_koneksi, Baterai b, RAM r, Storage s, CPU c, Display d, Sensor sn) {
        this->setMerk(merk);
        this->setNama(nama);
        this->setTahun(tahun);
        this->jenis_koneksi = jenis_koneksi;
        this->baterai = b;
        this->ram = r;
        this->storage = s;
        this->cpu = c;
        this->display = d;
        this->sensor = sn;
    }

    // Getter & Setter
    void setJenisKoneksi(string jenis_koneksi) {
        this->jenis_koneksi = jenis_koneksi;
    }

    string getJenisKoneksi() {
        return jenis_koneksi;
    }

    Baterai getBaterai() {
        return baterai;
    }

    RAM getRAM() {
        return ram;
    }

    Storage getStorage() {
        return storage;
    }

    CPU getCPU() {
        return cpu;
    }

    Display getDisplay() {
        return display;
    }

    Sensor getSensor() {
        return sensor;
    }

    // Destructor
    ~Smartphone() {
        // Optional: add any clean up code if needed
    }
};
