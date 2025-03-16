from PerangkatElektronik import PerangkatElektronik

class Komputer(PerangkatElektronik):
    def __init__(self, merk='', nama='', tahun=0, ram_list=None, storage=None, cpu=None, display=None, psu=None):
        super().__init__(merk, nama, tahun)  # Memanggil constructor dari PerangkatElektronik
        if ram_list is None:
            ram_list = []
        self.ram_list = ram_list  # Daftar RAM
        self.storage = storage  # Komponen storage
        self.cpu = cpu  # Komponen CPU
        self.display = display  # Komponen Display
        self.psu = psu  # Komponen PSU

    # Setter & Getter untuk RAM list
    def set_ram_list(self, ram_list):
        self.ram_list = ram_list

    def get_ram_list(self):
        return self.ram_list

    # Setter & Getter untuk Storage
    def set_storage(self, storage):
        self.storage = storage

    def get_storage(self):
        return self.storage

    # Setter & Getter untuk CPU
    def set_cpu(self, cpu):
        self.cpu = cpu

    def get_cpu(self):
        return self.cpu

    # Setter & Getter untuk Display
    def set_display(self, display):
        self.display = display

    def get_display(self):
        return self.display

    # Setter & Getter untuk PSU
    def set_psu(self, psu):
        self.psu = psu

    def get_psu(self):
        return self.psu

    # Menambahkan RAM ke daftar RAM
    def add_ram(self, ram):
        self.ram_list.append(ram)

    # Getter untuk nama
    def get_nama(self):
        return self.nama
