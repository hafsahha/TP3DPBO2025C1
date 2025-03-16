from Komponen import  Komponen

class Storage(Komponen):
    def __init__(self, merk='', nama='', harga=0, kapasitas=0, tipe_storage='', kecepatan_tf=0.0):
        super().__init__(merk, nama, harga)  # Memanggil constructor dari Komponen
        self.kapasitas = kapasitas  # Kapasitas storage dalam GB
        self.tipe_storage = tipe_storage  # Tipe storage (misalnya SSD, HDD)
        self.kecepatan_tf = kecepatan_tf  # Kecepatan transfer dalam MB/s

    # Setter untuk kapasitas
    def set_kapasitas(self, kapasitas):
        self.kapasitas = kapasitas

    # Setter untuk tipe_storage
    def set_tipe_storage(self, tipe_storage):
        self.tipe_storage = tipe_storage

    # Setter untuk kecepatan_tf
    def set_kecepatan_tf(self, kecepatan_tf):
        self.kecepatan_tf = kecepatan_tf

    # Getter untuk kapasitas
    def get_kapasitas(self):
        return self.kapasitas

    # Getter untuk tipe_storage
    def get_tipe_storage(self):
        return self.tipe_storage

    # Getter untuk kecepatan_tf
    def get_kecepatan_tf(self):
        return self.kecepatan_tf

