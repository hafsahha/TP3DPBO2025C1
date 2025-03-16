#pragma once
#include <iostream>
#include <string>
#include <vector>
#include "PerangkatElektronik.cpp"   // Include PerangkatElektronik class
#include "RAM.cpp"
#include "Storage.cpp"
#include "CPU.cpp"
#include "Display.cpp"
#include "PSU.cpp"

using namespace std;

class Komputer : public PerangkatElektronik {  // Komputer extends PerangkatElektronik
private:
    vector<RAM> ramList;
    Storage storage;
    CPU cpu;
    Display display;
    PSU psu;

public:
    Komputer(string merk, string nama, int tahun, vector<RAM> ramList, Storage s, CPU c, Display d, PSU p)
        : PerangkatElektronik(merk, nama, tahun) {  // Call constructor of PerangkatElektronik
        this->ramList = ramList;
        this->storage = s;
        this->cpu = c;
        this->display = d;
        this->psu = p;
    }

    void setRamList(vector<RAM> ramList) {
        this->ramList = ramList;
    }

    vector<RAM> getRamList() {
        return ramList;
    }

    void setStorage(Storage s) {
        this->storage = s;
    }

    Storage getStorage() {
        return storage;
    }

    void setCPU(CPU c) {
        this->cpu = c;
    }

    CPU getCPU() {
        return cpu;
    }

    void setDisplay(Display d) {
        this->display = d;
    }

    Display getDisplay() {
        return display;
    }

    void setPSU(PSU p) {
        this->psu = p;
    }

    PSU getPSU() {
        return psu;
    }

    void addRam(RAM ram) {
        this->ramList.push_back(ram);
    }

    string getNama() {
        return this->nama;
    }

    ~Komputer() {
        // Destructor logic (if needed)
    }
};
