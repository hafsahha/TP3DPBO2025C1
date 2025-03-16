from Komponen import  Komponen

class Sensor(Komponen):
    def __init__(self, merk='', nama='', harga=0, tipe_sensor='', rentang='', akurasi=0.0):
        super().__init__(merk, nama, harga)  # Memanggil constructor dari Komponen
        self.tipe_sensor = tipe_sensor  # Tipe sensor (misalnya "Proximity", "Gyroscope")
        self.rentang = rentang  # Rentang sensor (misalnya "0-100 cm", "0-360 degree")
        self.akurasi = akurasi  # Akurasi sensor (misalnya 0.98, 0.99)

    # Setter untuk tipe_sensor
    def set_tipe_sensor(self, tipe_sensor):
        self.tipe_sensor = tipe_sensor

    # Setter untuk rentang
    def set_rentang(self, rentang):
        self.rentang = rentang

    # Setter untuk akurasi
    def set_akurasi(self, akurasi):
        self.akurasi = akurasi

    # Getter untuk tipe_sensor
    def get_tipe_sensor(self):
        return self.tipe_sensor

    # Getter untuk rentang
    def get_rentang(self):
        return self.rentang

    # Getter untuk akurasi
    def get_akurasi(self):
        return self.akurasi
