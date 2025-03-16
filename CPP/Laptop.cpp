#pragma once
#include "Komponen.cpp"
#include "Baterai.cpp"
#include "RAM.cpp"
#include "Storage.cpp"
#include "CPU.cpp"
#include "Display.cpp"
#include "PerangkatElektronik.cpp"

class Laptop : public PerangkatElektronik {
private:
    string tipe_keyboard;
    Baterai baterai;
    RAM ram;
    Storage storage;
    CPU cpu;
    Display display;
    
public:
    // Constructor
    Laptop(string merk, string nama, int tahun, string tipe_keyboard, Baterai b, RAM r, Storage s, CPU c, Display d) {
        this->setMerk(merk);
        this->setNama(nama);
        this->setTahun(tahun);
        this->tipe_keyboard = tipe_keyboard;
        this->baterai = b;
        this->ram = r;
        this->storage = s;
        this->cpu = c;
        this->display = d;
    }

    // Getter & Setter
    void setTipeKeyboard(string tipe_keyboard) {
        this->tipe_keyboard = tipe_keyboard;
    }

    string getTipeKeyboard() {
        return tipe_keyboard;
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

    // Destructor
    ~Laptop() {
        // Optional: add any clean up code if needed
    }
};
