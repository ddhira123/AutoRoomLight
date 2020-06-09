# AutoRoomLight

[Sekilas Tentang](#sekilas-tentang) | [Alat dan Bahan](#alat-dan-bahan) | [Sketsa Rangkaian](#sketsa-rangkaian) | [Cara Pemakaian](#cara-pemakaian) 
:---:|:---:|:---:|:---:

# Sekilas Tentang
[`^ kembali ke atas ^`](#)

**AutoRoomLight** merupakan sebuah sistem pencahayaan ruangan cerdas yang pembuatannya didasari oleh efisiensi energi, khususnya energi listrik. Dengan **AutoRoomLight**, manusia tidak lagi perlu untuk repot-repot menyalakan/mematikan lampu secara manual. Dengan biaya pembuatan yang murah dan perancangan yang mudah, Anda pun dapat membuat sendiri sistem ini dengan mengikuti langkah-langkah pada dokumentasi ini ataupun melalui video berikut.

<iframe width="560" height="315" src="https://www.youtube.com/embed/p6YnOU1SQNY" frameborder="0" allow="accelerometer; autoplay; encrypted-media; gyroscope; picture-in-picture" allowfullscreen></iframe>

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

Perlu diperhatikan:

- untuk menghubungkan lampu/fitting dengan relay dan steker, digunakan **kabel listrik**,
- untuk menghubungkan daya (5V dan GND) dari Arduino ke Breadboard, digunakan **kabel jumper male-to-male**
- untuk menghubungkan daya (VCC dan GND) dari Relay dan sensor PIR ke Breadboard dan menghubungkan IN dan OUT dari Relay dan sensor PIR ke Arduino, digunakan **kabel jumper male-to-male**

