from PerangkatElektronik import PerangkatElektronik

class Laptop(PerangkatElektronik):
    def __init__(self, merk='', nama='', tahun=0, tipe_keyboard='', baterai=None, ram=None, storage=None, cpu=None, display=None):
        super().__init__(merk, nama, tahun)  # Memanggil constructor dari PerangkatElektronik
        self.tipe_keyboard = tipe_keyboard
        self.baterai = baterai  # Komponen baterai
        self.ram = ram  # Komponen RAM
        self.storage = storage  # Komponen Storage
        self.cpu = cpu  # Komponen CPU
        self.display = display  # Komponen Display

    # Setter & Getter untuk atribut tambahan
    def set_tipe_keyboard(self, tipe_keyboard):
        self.tipe_keyboard = tipe_keyboard

    def get_tipe_keyboard(self):
        return self.tipe_keyboard

    def get_baterai(self):
        return self.baterai

    def get_ram(self):
        return self.ram

    def get_storage(self):
        return self.storage

    def get_cpu(self):
        return self.cpu

    def get_display(self):
        return self.display
