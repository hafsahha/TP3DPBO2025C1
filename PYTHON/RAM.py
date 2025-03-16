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


class RAM(Komponen):
    def __init__(self, merk='', nama='', harga=0, kapasitas=0, tipe='', kecepatan=0.0):
        super().__init__(merk, nama, harga)  # Memanggil constructor dari Komponen
        self.kapasitas = kapasitas  # Kapasitas RAM dalam GB
        self.tipe = tipe  # Tipe RAM (misalnya DDR4, DDR3)
        self.kecepatan = kecepatan  # Kecepatan RAM dalam MHz

    # Setter untuk kapasitas
    def set_kapasitas(self, kapasitas):
        self.kapasitas = kapasitas

    # Setter untuk tipe
    def set_tipe(self, tipe):
        self.tipe = tipe

    # Setter untuk kecepatan
    def set_kecepatan(self, kecepatan):
        self.kecepatan = kecepatan

    # Getter untuk kapasitas
    def get_kapasitas(self):
        return self.kapasitas

    # Getter untuk tipe
    def get_tipe(self):
        return self.tipe

    # Getter untuk kecepatan
    def get_kecepatan(self):
        return self.kecepatan

