#pragma once
#include <iostream>
#include <string>
#include "Komponen.cpp"  // Mengimpor Komponen langsung

using namespace std;

class Sensor : public Komponen {
private:
    string tipe_sensor;  // Tipe sensor (misalnya "Proximity", "Gyroscope")
    string rentang;      // Rentang sensor (misalnya "0-100 cm", "0-360 degree")
    float akurasi;       // Akurasi sensor (misalnya 0.98, 0.99)
public:
    // Constructor default
    Sensor() : Komponen() {
        tipe_sensor = "";
        rentang = "";
        akurasi = 0.0;
    }

    // Constructor dengan parameter
    Sensor(string merk, string nama, int harga, string tipe_sensor, string rentang, float akurasi)
        : Komponen(merk, nama, harga) {  // Memanggil constructor dari Komponen
        this->tipe_sensor = tipe_sensor;
        this->rentang = rentang;
        this->akurasi = akurasi;
    }

    // Setter untuk tipe_sensor
    void setTipeSensor(string tipe_sensor) {
        this->tipe_sensor = tipe_sensor;
    }

    // Setter untuk rentang
    void setRentang(string rentang) {
        this->rentang = rentang;
    }

    // Setter untuk akurasi
    void setAkurasi(float akurasi) {
        this->akurasi = akurasi;
    }

    // Getter untuk tipe_sensor
    string getTipeSensor() {
        return tipe_sensor;
    }

    // Getter untuk rentang
    string getRentang() {
        return rentang;
    }

    // Getter untuk akurasi
    float getAkurasi() {
        return akurasi;
    }

    // Destructor
    ~Sensor() {
        // Destructor kosong, karena tidak ada alokasi memori dinamis
    }
};
