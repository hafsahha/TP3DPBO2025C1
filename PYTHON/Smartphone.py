from PerangkatElektronik import PerangkatElektronik

class Smartphone(PerangkatElektronik):
    def __init__(self, merk='', nama='', tahun=0, jenis_koneksi='', baterai=None, ram=None, storage=None, cpu=None, display=None, sensor=None):
        super().__init__(merk, nama, tahun)  # Memanggil constructor dari PerangkatElektronik
        self.jenis_koneksi = jenis_koneksi
        self.baterai = baterai  # Komponen baterai
        self.ram = ram  # Komponen RAM
        self.storage = storage  # Komponen storage
        self.cpu = cpu  # Komponen CPU
        self.display = display  # Komponen Display
        self.sensor = sensor  # Komponen Sensor

    # Setter & Getter untuk atribut tambahan
    def set_jenis_koneksi(self, jenis_koneksi):
        self.jenis_koneksi = jenis_koneksi

    def get_jenis_koneksi(self):
        return self.jenis_koneksi

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

    def get_sensor(self):
        return self.sensor

