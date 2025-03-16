# Tugas Praktikum 3 - DPBO

## Janji
_Saya, **Hafsah Hamidah** dengan NIM **2311474**, mengerjakan **Tugas Praktikum 3** dalam mata kuliah **DPBO** dengan sebaik-baiknya demi keberkahan-Nya.  
Saya berjanji tidak melakukan kecurangan sebagaimana yang telah dispesifikasikan. **Aamiin.**_
## Diagram

![tp3](https://github.com/user-attachments/assets/c18d57ec-3500-46c7-8a2c-50a618661889)

## Penjelasan Diagram
Berikut penjelasan diagram kelas berdasarkan diagram yang telah dibuat:

### **1. Kelas Utama: Komponen**
- **Komponen** adalah kelas utama yang memiliki atribut dasar yang berlaku untuk semua komponen perangkat elektronik. Atribut yang dimiliki oleh kelas ini adalah:
  - `merk`: Nama merk dari komponen (misalnya merk baterai, merk CPU, dll).
  - `nama`: Nama komponen (misalnya "Baterai", "CPU", "RAM", dll).
  - Selain itu, setiap kelas yang mewarisi **Komponen** juga memiliki setter dan getter untuk atribut ini.

### **2. Kelas Turunan dari Komponen: Baterai, RAM, Storage, CPU, Display, PSU, Sensor**
- **Baterai**: Kelas ini mewarisi kelas **Komponen** dan menambahkan atribut khusus yang relevan dengan baterai perangkat. Misalnya, atribut `kapasitas` yang menyimpan kapasitas baterai dalam mAh.
- **RAM**: Kelas ini juga mewarisi **Komponen** dan menambahkan atribut seperti `ukuran` yang menunjukkan besar RAM (misalnya 4GB, 8GB).
- **Storage**: Kelas ini mewarisi **Komponen** dan memiliki atribut `kapasitas` untuk menunjukkan kapasitas penyimpanan (misalnya 256GB, 1TB).
- **CPU**: Kelas **CPU** mewarisi **Komponen** dan dapat memiliki atribut seperti `kecepatan` (misalnya 3.5 GHz).
- **Display**: Kelas **Display** mewarisi **Komponen** dan bisa memiliki atribut seperti `resolusi` (misalnya 1920x1080).
- **PSU**: Kelas **PSU** mewarisi **Komponen** dan memiliki atribut `daya` untuk menunjukkan daya output PSU (misalnya 500W).
- **Sensor**: Kelas **Sensor** mewarisi **Komponen** dan memiliki atribut khusus yang relevan dengan sensor yang ada di perangkat, misalnya `jenis_sensor` (misalnya sensor suhu, sensor cahaya).

### **3. Kelas Perangkat Elektronik: Smartphone, Laptop, Komputer**
- **Perangkat Elektronik** adalah kelas abstrak yang memiliki atribut umum untuk semua jenis perangkat elektronik:
  - `merk`: Merk perangkat elektronik (misalnya Samsung, Lenovo, dll).
  - `nama`: Nama perangkat elektronik (misalnya "Smartphone", "Laptop", "Komputer").
  - Selain itu, kelas ini memiliki **setter** dan **getter** untuk atribut tersebut.
  
  Kelas **Perangkat Elektronik** digunakan sebagai dasar untuk kelas-kelas **Smartphone**, **Laptop**, dan **Komputer**. Kelas ini juga mewarisi komponen-komponen yang ada, tetapi **komponen** tidak di-*extend* melainkan di-*compose* ke dalam kelas perangkat elektronik ini.

### **4. Hubungan Antar Kelas: Composition & Inheritance**
- **Inheritance (Pewarisan)**:
  - **Komponen** menjadi kelas dasar yang diwarisi oleh kelas-kelas komponen lainnya seperti **Baterai**, **RAM**, **Storage**, **CPU**, **Display**, **PSU**, dan **Sensor**. Ini adalah contoh **Hierarchical Inheritance**, di mana **Komponen** sebagai superclass diturunkan oleh banyak kelas (Baterai, RAM, dll).
  - **Perangkat Elektronik** menjadi superclass bagi **Smartphone**, **Laptop**, dan **Komputer**, yang mewarisi sifat umum dari perangkat elektronik.
  
- **Composition (Komposisi)**:
  - Kelas **Smartphone**, **Laptop**, dan **Komputer** *memiliki* objek-objek dari kelas **Baterai**, **RAM**, **Storage**, **CPU**, **Display**, dan lain-lain. Ini adalah contoh **composition** di mana perangkat elektronik memiliki komponen-komponen yang saling berhubungan, tetapi tidak diwarisi dari komponen tersebut.
  - Misalnya, **Smartphone** memiliki objek **Baterai**, **RAM**, **Storage**, **CPU**, **Display**, dan **Sensor**, tetapi **Smartphone** tidak mewarisi kelas **Baterai**, melainkan mengkomposisinya.

### **5. Penjelasan Setiap Kelas Perangkat (Smartphone, Laptop, Komputer)**
- **Smartphone**:
  - Merupakan turunan dari **Perangkat Elektronik**.
  - Memiliki komponen seperti **Baterai**, **RAM**, **Storage**, **CPU**, **Display**, dan **Sensor**.
  - Atribut yang membedakan **Smartphone** dari perangkat lain adalah **sensor**, yang khas ada di smartphone.
  
- **Laptop**:
  - Merupakan turunan dari **Perangkat Elektronik**.
  - Memiliki komponen seperti **Baterai**, **RAM**, **Storage**, **CPU**, **Display**, dan **PSU**.
  - Atribut yang membedakan **Laptop** adalah **PSU** yang merupakan power supply unit untuk laptop, berbeda dengan **Smartphone** yang menggunakan baterai untuk sumber energi.
  
- **Komputer**:
  - Merupakan turunan dari **Perangkat Elektronik**.
  - Memiliki komponen seperti **RAM**, **Storage**, **CPU**, **Display**, dan **PSU**.
  - Atribut yang membedakan **Komputer** dari **Smartphone** dan **Laptop** adalah **PSU** yang menyediakan sumber daya utama di komputer, serta jenis casing (misalnya "Tower", "Mini-PC") yang membedakan komputer dengan perangkat lainnya.

### **6. Kesimpulan**
- **Hierarchical Inheritance** diterapkan antara **Komponen** dan berbagai kelas turunannya.
- **Multiple Inheritance** diterapkan pada **Smartphone**, **Laptop**, dan **Komputer**, yang mewarisi dua kelas induk (yaitu **Perangkat Elektronik** dan **Komponen**).
- **Hybrid Inheritance** terjadi karena **Smartphone**, **Laptop**, dan **Komputer** menggabungkan pewarisan dari **Perangkat Elektronik** dan **Komponen**, serta mengkomposisi objek-objek komponen.

  
- **Composition**: 
  - **Smartphone**, **Laptop**, dan **Komputer** memiliki komponen-komponen seperti **Baterai**, **RAM**, **Storage**, **CPU**, dan komponen lainnya.
  
