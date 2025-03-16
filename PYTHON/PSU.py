from Komponen import  Komponen

class PSU(Komponen):
    def __init__(self, merk='', nama='', harga=0, kapasitas='', efisiensi='', jenis_kabel=''):
        super().__init__(merk, nama, harga)  # Memanggil constructor dari Komponen
        self.kapasitas = kapasitas  # Kapasitas PSU (misalnya 500W, 650W)
        self.efisiensi = efisiensi  # Efisiensi PSU (misalnya "80+", "90+")
        self.jenis_kabel = jenis_kabel  # Jenis kabel PSU (misalnya "Modular", "Non-Modular")

    # Setter untuk kapasitas
    def set_kapasitas(self, kapasitas):
        self.kapasitas = kapasitas

    # Setter untuk efisiensi
    def set_efisiensi(self, efisiensi):
        self.efisiensi = efisiensi

    # Setter untuk jenis_kabel
    def set_jenis_kabel(self, jenis_kabel):
        self.jenis_kabel = jenis_kabel

    # Getter untuk kapasitas
    def get_kapasitas(self):
        return self.kapasitas

    # Getter untuk efisiensi
    def get_efisiensi(self):
        return self.efisiensi

    # Getter untuk jenis_kabel
    def get_jenis_kabel(self):
        return self.jenis_kabel
