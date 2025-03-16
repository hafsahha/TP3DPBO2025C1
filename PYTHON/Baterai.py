from Komponen import  Komponen

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