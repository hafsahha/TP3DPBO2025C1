from Komponen import  Komponen

class CPU(Komponen):
    def __init__(self, merk='', nama='', harga=0, jumlah_core=0, kecepatan_clock=0.0):
        super().__init__(merk, nama, harga)  # Memanggil constructor dari Komponen
        self.jumlah_core = jumlah_core  # Jumlah core pada CPU
        self.kecepatan_clock = kecepatan_clock  # Kecepatan clock CPU dalam GHz

    # Setter untuk jumlah_core
    def set_jumlah_core(self, jumlah_core):
        self.jumlah_core = jumlah_core

    # Setter untuk kecepatan_clock
    def set_kecepatan_clock(self, kecepatan_clock):
        self.kecepatan_clock = kecepatan_clock

    # Getter untuk jumlah_core
    def get_jumlah_core(self):
        return self.jumlah_core

    # Getter untuk kecepatan_clock
    def get_kecepatan_clock(self):
        return self.kecepatan_clock
