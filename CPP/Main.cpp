#include <iostream>
#include <vector>
#include "Smartphone.cpp"
#include "Laptop.cpp"
#include "Komputer.cpp"
#include "RAM.cpp"
#include "Storage.cpp"
#include "CPU.cpp"
#include "Display.cpp"
#include "PSU.cpp"
#include "Baterai.cpp"
#include "Sensor.cpp"

using namespace std;

int main() {
    // Membuat objek komponen yang diperlukan untuk masing-masing perangkat
    CPU cpu("Intel", "Core i7", 5000, 8, 3.5);  // CPU dengan merk, nama, harga, jumlah core, kecepatan clock
    RAM ram1("Corsair", "Vengeance", 150, 16, "DDR4", 3200);  // RAM pertama
    RAM ram2("Corsair", "Vengeance", 150, 8, "DDR4", 3200);   // RAM kedua
    Storage storage("Samsung", "Evo SSD", 100, 512, "SSD", 500);  // Storage
    Display display("Samsung", "LED Monitor", 300, "LED", "1920x1080", 15.6);  // Display
    PSU psu("Corsair", "RM750x", 100, "750W", "80 Plus Gold", "Modular");  // PSU
    Baterai baterai("Samsung", "Galaxy Battery", 50, 4000, "10 hours");  // Baterai
    Sensor sensor("Bosch", "Gyroscope", 20, "Gyroscope", "360 degrees", 99.5f);  // Sensor

    // Membuat objek Komputer dengan semua komponen yang telah dibuat
    vector<RAM> ramList = {ram1, ram2};
    Komputer komputer("Lenovo", "ThinkPad X1", 2023, ramList, storage, cpu, display, psu);

    // Membuat objek Smartphone
    Smartphone smartphone("Apple", "iPhone 13", 2021, "5G", baterai, ram1, storage, cpu, display, sensor);

    // Membuat objek Laptop
    Laptop laptop("Dell", "XPS 13", 2022, "Mechanical", baterai, ram1, storage, cpu, display);

    // Menampilkan informasi Komputer
    cout << "\nInformasi Komputer:" << endl;
    cout << "Nama      : " << komputer.getNama() << endl;
    cout << "Merk      : " << komputer.getMerk() << endl;
    cout << "Tahun     : " << komputer.getTahun() << endl;

    // Menampilkan informasi CPU pada komputer
    cout << "\nCPU (Komputer):" << endl;
    cout << "Merk      : " << komputer.getCPU().getMerk() << endl;
    cout << "Nama      : " << komputer.getCPU().getNama() << endl;
    cout << "Jumlah Core : " << komputer.getCPU().getJumlahCore() << endl;
    cout << "Kecepatan Clock : " << komputer.getCPU().getKecepatanClock() << " GHz" << endl;

    // Menampilkan informasi RAM pada komputer
    cout << "\nRAM (Komputer):" << endl;
    for (int i = 0; i < komputer.getRamList().size(); ++i) {
        cout << "RAM " << i + 1 << " - " << "Kapasitas: " << komputer.getRamList()[i].getKapasitas()
             << " GB, Tipe: " << komputer.getRamList()[i].getTipe() << ", Kecepatan: " << komputer.getRamList()[i].getKecepatan() << " MHz" << endl;
    }

    // Menampilkan informasi Storage pada komputer
    cout << "\nStorage (Komputer):" << endl;
    cout << "Merk         : " << komputer.getStorage().getMerk() << endl;
    cout << "Nama         : " << komputer.getStorage().getNama() << endl;
    cout << "Kapasitas    : " << komputer.getStorage().getKapasitas() << " GB" << endl;
    cout << "Kecepatan    : " << komputer.getStorage().getKecepatanTF() << " MB/s" << endl;

    // Menampilkan informasi PSU pada komputer
    cout << "\nPSU (Komputer):" << endl;
    cout << "Merk         : " << komputer.getPSU().getMerk() << endl;
    cout << "Nama         : " << komputer.getPSU().getNama() << endl;
    cout << "Kapasitas    : " << komputer.getPSU().getKapasitas() << endl;
    cout << "Efisiensi    : " << komputer.getPSU().getEfisiensi() << endl;
    cout << "Jenis Kabel  : " << komputer.getPSU().getJenisKabel() << endl;

    // Menampilkan informasi Smartphone
    cout << "\nInformasi Smartphone:" << endl;
    cout << "Nama      : " << smartphone.getNama() << endl;
    cout << "Merk      : " << smartphone.getMerk() << endl;
    cout << "Tahun     : " << smartphone.getTahun() << endl;
    cout << "Jenis Koneksi : " << smartphone.getJenisKoneksi() << endl;

    // Menampilkan informasi baterai pada smartphone
    cout << "\nBaterai (Smartphone):" << endl;
    cout << "Kapasitas : " << smartphone.getBaterai().getKapasitas() << " mAh, Waktu Bertahan: " << smartphone.getBaterai().getWaktuBertahan() << endl;

    // Menampilkan informasi sensor pada smartphone
    cout << "\nSensor (Smartphone):" << endl;
    cout << "Tipe Sensor   : " << smartphone.getSensor().getTipeSensor() << endl;
    cout << "Rentang       : " << smartphone.getSensor().getRentang() << endl;
    cout << "Akurasi       : " << smartphone.getSensor().getAkurasi() << "%" << endl;

    // Menampilkan informasi Laptop
    cout << "\nInformasi Laptop:" << endl;
    cout << "Nama      : " << laptop.getNama() << endl;
    cout << "Merk      : " << laptop.getMerk() << endl;
    cout << "Tahun     : " << laptop.getTahun() << endl;
    cout << "Tipe Keyboard : " << laptop.getTipeKeyboard() << endl;

    // Menampilkan informasi baterai pada laptop
    cout << "\nBaterai (Laptop):" << endl;
    cout << "Kapasitas : " << laptop.getBaterai().getKapasitas() << " mAh, Waktu Bertahan: " << laptop.getBaterai().getWaktuBertahan() << endl;

    return 0;
}
