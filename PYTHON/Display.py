from Komponen import  Komponen

class Display(Komponen):
    def __init__(self, merk='', nama='', harga=0, tipe_display='', resolusi='', ukuran=0.0):
        super().__init__(merk, nama, harga)  # Memanggil constructor dari Komponen
        self.tipe_display = tipe_display  # Tipe display (misalnya LED, OLED, LCD)
        self.resolusi = resolusi  # Resolusi layar (misalnya "1920x1080")
        self.ukuran = ukuran  # Ukuran layar dalam inci

    # Setter untuk tipe_display
    def set_tipe_display(self, tipe_display):
        self.tipe_display = tipe_display

    # Setter untuk resolusi
    def set_resolusi(self, resolusi):
        self.resolusi = resolusi

    # Setter untuk ukuran
    def set_ukuran(self, ukuran):
        self.ukuran = ukuran

    # Getter untuk tipe_display
    def get_tipe_display(self):
        return self.tipe_display

    # Getter untuk resolusi
    def get_resolusi(self):
        return self.resolusi

    # Getter untuk ukuran
    def get_ukuran(self):
        return self.ukuran

