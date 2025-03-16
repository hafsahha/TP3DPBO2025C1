class Komponen:
    def __init__(self, merk, nama, harga):
        self.merk = merk
        self.nama = nama
        self.harga = harga

    def set_merk(self, merk):
        self.merk = merk

    def set_nama(self, nama):
        self.nama = nama

    def set_harga(self, harga):
        self.harga = harga

    def get_merk(self):
        return self.merk

    def get_nama(self):
        return self.nama

    def get_harga(self):
        return self.harga


class Baterai(Komponen):
    def __init__(self, merk='', nama='', harga=0, kapasitas=0, waktu_bertahan=''):
        super().__init__(merk, nama, harga)  # Memanggil constructor dari Komponen
        self.kapasitas = kapasitas  # Kapasitas baterai dalam mAh
        self.waktu_bertahan = waktu_bertahan  # Waktu bertahan baterai
    
    # Setter untuk kapasitas
    def set_kapasitas(self, kapasitas):
        self.kapasitas = kapasitas

    # Setter untuk waktu_bertahan
    def set_waktu_bertahan(self, waktu_bertahan):
        self.waktu_bertahan = waktu_bertahan

    # Getter untuk kapasitas
    def get_kapasitas(self):
        return self.kapasitas

    # Getter untuk waktu_bertahan
    def get_waktu_bertahan(self):
        return self.waktu_bertahan


# Contoh Penggunaan
if __name__ == "__main__":
    # Membuat objek Baterai
    baterai = Baterai(merk="Samsung", nama="Galaxy Battery", harga=50, kapasitas=4000, waktu_bertahan="10 hours")
    
    # Menampilkan informasi baterai
    print("Baterai Info:")
    print(f"Merk: {baterai.get_merk()}")
    print(f"Nama: {baterai.get_nama()}")
    print(f"Harga: {baterai.get_harga()} IDR")
    print(f"Kapasitas: {baterai.get_kapasitas()} mAh")
    print(f"Waktu Bertahan: {baterai.get_waktu_bertahan()}")
