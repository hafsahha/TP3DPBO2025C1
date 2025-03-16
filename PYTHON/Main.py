# Importing all the necessary classes
from Baterai import Baterai
from RAM import RAM
from Storage import Storage
from CPU import CPU
from Display import Display
from Sensor import Sensor
from PerangkatElektronik import PerangkatElektronik
from Smartphone import Smartphone
from Laptop import Laptop
from Komputer import Komputer

def main():
    # Membuat objek komponen yang diperlukan untuk masing-masing perangkat
    cpu = CPU("Intel", "Core i7", 5000, 8, 3.5)  # CPU dengan merk, nama, harga, jumlah core, kecepatan clock
    ram1 = RAM("Corsair", "Vengeance", 150, 16, "DDR4", 3200)  # RAM pertama
    ram2 = RAM("Corsair", "Vengeance", 150, 8, "DDR4", 3200)   # RAM kedua
    storage = Storage("Samsung", "Evo SSD", 100, 512, "SSD", 500)  # Storage
    display = Display("Samsung", "LED Monitor", 300, "LED", "1920x1080", 15.6)  # Display
    psu = PSU("Corsair", "RM750x", 100, "750W", "80 Plus Gold", "Modular")  # PSU
    baterai = Baterai("Samsung", "Galaxy Battery", 50, 4000, "10 hours")  # Baterai
    sensor = Sensor("Bosch", "Gyroscope", 20, "Gyroscope", "360 degrees", 99.5)  # Sensor

    # Membuat objek Komputer dengan semua komponen yang telah dibuat
    ramList = [ram1, ram2]  # List of RAM for Komputer
    komputer = Komputer("Lenovo", "ThinkPad X1", 2023, ramList, storage, cpu, display, psu)

    # Membuat objek Smartphone
    smartphone = Smartphone("Apple", "iPhone 13", 2021, "5G", baterai, ram1, storage, cpu, display, sensor)

    # Membuat objek Laptop
    laptop = Laptop("Dell", "XPS 13", 2022, "Mechanical", baterai, ram1, storage, cpu, display)

    # Menampilkan informasi Komputer
    print("\nInformasi Komputer:")
    print(f"Nama      : {komputer.get_nama()}")
    print(f"Merk      : {komputer.get_merk()}")
    print(f"Tahun     : {komputer.get_tahun()}")
    print(f"CPU       : {komputer.get_cpu().get_merk()} {komputer.get_cpu().get_nama()} {komputer.get_cpu().get_jumlah_core()} cores {komputer.get_cpu().get_kecepatan_clock()} GHz")
    
    # Menampilkan informasi RAM pada Komputer
    print("\nRAM (Komputer):")
    for i, ram in enumerate(komputer.get_ram_list()):
        print(f"RAM {i+1} - Kapasitas: {ram.get_kapasitas()} GB, Tipe: {ram.get_tipe()}, Kecepatan: {ram.get_kecepatan()} MHz")
    
    # Menampilkan informasi Storage pada Komputer
    print(f"\nStorage (Komputer):")
    print(f"Merk         : {komputer.get_storage().get_merk()}")
    print(f"Nama         : {komputer.get_storage().get_nama()}")
    print(f"Kapasitas    : {komputer.get_storage().get_kapasitas()} GB")
    print(f"Kecepatan    : {komputer.get_storage().get_kecepatan_tf()} MB/s")

    # Menampilkan informasi PSU pada Komputer
    print(f"\nPSU (Komputer):")
    print(f"Merk         : {komputer.get_psu().get_merk()}")
    print(f"Nama         : {komputer.get_psu().get_nama()}")
    print(f"Kapasitas    : {komputer.get_psu().get_kapasitas()}")
    print(f"Efisiensi    : {komputer.get_psu().get_efisiensi()}")
    print(f"Jenis Kabel  : {komputer.get_psu().get_jenis_kabel()}")

    # Menampilkan informasi Smartphone
    print("\nInformasi Smartphone:")
    print(f"Nama      : {smartphone.get_nama()}")
    print(f"Merk      : {smartphone.get_merk()}")
    print(f"Tahun     : {smartphone.get_tahun()}")
    print(f"Jenis Koneksi : {smartphone.get_jenis_koneksi()}")

    # Menampilkan informasi Baterai pada Smartphone
    print("\nBaterai (Smartphone):")
    print(f"Kapasitas : {smartphone.get_baterai().get_kapasitas()} mAh, Waktu Bertahan: {smartphone.get_baterai().get_waktu_bertahan()}")

    # Menampilkan informasi Sensor pada Smartphone
    print("\nSensor (Smartphone):")
    print(f"Tipe Sensor   : {smartphone.get_sensor().get_tipe_sensor()}")
    print(f"Rentang       : {smartphone.get_sensor().get_rentang()}")
    print(f"Akurasi       : {smartphone.get_sensor().get_akurasi()}%")

    # Menampilkan informasi Laptop
    print("\nInformasi Laptop:")
    print(f"Nama      : {laptop.get_nama()}")
    print(f"Merk      : {laptop.get_merk()}")
    print(f"Tahun     : {laptop.get_tahun()}")
    print(f"Tipe Keyboard : {laptop.get_tipe_keyboard()}")

    # Menampilkan informasi Baterai pada Laptop
    print("\nBaterai (Laptop):")
    print(f"Kapasitas : {laptop.get_baterai().get_kapasitas()} mAh, Waktu Bertahan: {laptop.get_baterai().get_waktu_bertahan()}")

if __name__ == "__main__":
    main()
