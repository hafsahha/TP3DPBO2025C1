class PerangkatElektronik:
    def __init__(self, merk='', nama='', tahun=0):
        self.merk = merk
        self.nama = nama
        self.tahun = tahun

    # Setter untuk merk
    def set_merk(self, merk):
        self.merk = merk

    # Getter untuk merk
    def get_merk(self):
        return self.merk

    # Setter untuk nama
    def set_nama(self, nama):
        self.nama = nama

    # Getter untuk nama
    def get_nama(self):
        return self.nama

    # Setter untuk tahun
    def set_tahun(self, tahun):
        self.tahun = tahun

    # Getter untuk tahun
    def get_tahun(self):
        return self.tahun

