# AutoRoomLight

[Sekilas Tentang](#sekilas-tentang) | [Alat dan Bahan](#alat-dan-bahan) | [Sketsa Rangkaian](#sketsa-rangkaian) | [Cara Pemakaian](#cara-pemakaian) 
:---:|:---:|:---:|:---:

# Sekilas Tentang
[`^ kembali ke atas ^`](#)

**AutoRoomLight** merupakan sebuah sistem pencahayaan ruangan cerdas yang pembuatannya didasari oleh efisiensi energi, khususnya energi listrik. Dengan **AutoRoomLight**, manusia tidak lagi perlu untuk repot-repot menyalakan/mematikan lampu secara manual. Dengan biaya pembuatan yang murah dan perancangan yang mudah, Anda pun dapat membuat sendiri sistem ini dengan mengikuti langkah-langkah pada dokumentasi ini ataupun melalui video di bawah ini.

<figure class="video_container">
  <iframe src="https://www.youtube.com/embed/enMumwvLAug" frameborder="0" allowfullscreen="true"> </iframe>
</figure>

<figure class="video_container">
  <iframe src="https://www.youtube.com/embed/enMumwvLAug" frameborder="0" allowfullscreen="true"> </iframe>
</figure>

# Alat dan Bahan
[`^ kembali ke atas ^`](#)

1. Arduino UNO dan kabel USBnya
2. Breadboard
3. Sensor PIR (HC-SR501)
4. 5V Relay 1 channel
5. Kabel _jumper_ **male-to-male**
6. Kabel _jumper_ **male-to-female**
7. Lampu bohlam/TL
8. Fitting Lampu (Apabila menggunakan lampu bohlam)
9. Kabel Listrik dan Steker

# Sketsa Rangkaian
[`^ kembali ke atas ^`](#)

Sketsa berikut dapat digunakan sebagai acuan untuk menyusun rangkaian sistem. 
![](https://github.com/ddhira123/AutoRoomLight/blob/master/PSTR%20lampu%20oto_bb.png)

Perlu diperhatikan:

- untuk menghubungkan lampu/fitting dengan relay dan steker, digunakan **kabel listrik**,
- untuk menghubungkan daya (5V dan GND) dari Arduino ke Breadboard, digunakan **kabel jumper male-to-male**
- untuk menghubungkan daya (VCC dan GND) dari Relay dan sensor PIR ke Breadboard dan menghubungkan IN dan OUT dari Relay dan sensor PIR ke Arduino, digunakan **kabel jumper male-to-male**

# Cara Pemakaian
[`^ kembali ke atas ^`](#)

Setelah rangkaian disusun berdasarkan [Sketsa Rangkaian](#sketsa-rangkaian), selanjutnya adalah instalasi [kode program](https://github.com/ddhira123/AutoRoomLight/blob/master/src.cpp). Untuk instalasi kode program, salin kode program ke Arduino IDE pada PC/Laptop Anda ataupun Anda bisa melakukan instalasi kode program dengan perangkat Android seperti dijelaskan [disini](https://circuitdigest.com/tutorial/program-arduino-on-android-phone). Panduan penggunaan Arduino IDE bisa dilihat [disini.](https://learn.sparkfun.com/tutorials/sik-experiment-guide-for-arduino---v32/introduction-sik-arduino-uno). Anda dapat mengatur waktu tunggu hingga lampu dipadamkan sejak terakhir kali dideteksinya aktivitas manusia oleh sensor pada baris berikut pada kode program:

```
int maxIdle = 20000;
```

Secara default, program tersebut menerapkan waktu tunggu selama **20 detik**.

Selanjutnya, lakukan pemasangan pada ruangan tempat sistem ini akan digunakan. Langkah-langkahnya adalah sebagai berikut:

1. Tentukan letak Lampu akan dipasang
2. Tentukan letak sensor akan dipasang. Pastikan sensor dipasang pada tempat-tempat pusat aktivitas manusia dalam ruangan tersebut.
3. Lakukan kalibrasi terhadap _delay time_ dan area jangkauan pada sensor PIR, sesuaikan dengan kebutuhan Anda.
4. Hubungkan Arduino dengan sumber listrik DC (5V) dan lampu dengan listrik (colokkan steker pada stop kontak).
5. Tunggu sekitar 20-60 detik hingga sensor PIR siap bekerja.

Perlu diperhatikan:

- Sensor PIR sangat peka terhadap suhu udara luar, maupun dari alat pengatur suhu udara (*air conditioner*), maka pastikan sensor tidak terkena panas matahari ataupun dari benda-benda yang memancarkan panas yang cukup besar lainnya (kompor, *microwave oven*, dlsb).
- Peletakkan sensor PIR yang tidak tepat dapat menimbulkan hasil pendeteksian yang tidak optimal.
- Sesuaikan letak ketinggian sensor PIR dengan pengaturan kalibrasi sensitivitasnya agar pendeteksian dapat berlangsung optimal dan meminimumkan kesalahan deteksi (deteksi objek selain manusia misalnya hewan).

