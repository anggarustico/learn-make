# LEARN MAKEFILE

Learn makefile in
[Learn Makefile](https://makefiletutorial.com)
atau
[Penggunaan GNU Make dalam Kegiatan Pemrograman C](http://okaprinarjaya.github.io/penggunaan-gnu-make-dalam-kegiatan-pemrograman-c/)
atau [GNU make](https://www.gnu.org/software/make/manual/make.html)

## Apa itu make?

Suatu source code dari suatu sistem, khususnya suatu uav, membutuhkan suatu alat untuk menggabungkan semua source code yang telah disusun sehingga menjadi satu kesatuan yang siap dijalankan

Apa yang disebutkan di atas merupakan proses Build. Dalam proses build, terdapat proses compile dan linking. GNU Make merupakan salah satu tool yang membantu proses build tersebut.

## Persiapan untuk tutorial

Kalau bisa melakukan tutorial ini menggunakan OS **Linux** dan telah terinstall paket-paket pengembangan yang lengkap. Umum dikenal dengan nama **devel-packages**
Untuk tutorialnya dapat dicari di internet dengan kata kunci **linux debian how to install complete full development packages**

Lakukan perintah-perintah berikut di dalam terminal untuk mengecek apakah sudah siap sedia atau belum
`cc --version`
`gcc --version`
`make --version`

## Flow kerja GNU Make

Cara kerja make latihan1 adalah sebagai berikut

1. Apakah sudah ada latihan1?
2. Jika tidak ada, apakah ada file yang namanya latihan1?
3. Ya, ada, latihan1.c. Apakah GNU make dapat mengcompile .c?
4. Ya, bisa. GNU make langsung menjalankan perintah cc latihan.c -0 latihan1
5. GNU make mengompile latihan1.c menggunakan compiler cc.

## Makefile

Apa itu Makefile? Bagaimana struktur dari Makefile?

Makefile merupakan sebuah database referensi atau informasi mengenai apa saja yang harus dilakukan dalam proses build

Struktur Makefile sendiri terdiri dari
1. Variable
2. Rules

### 1. Variable
Variable merupakan sebuah variable biasa yang dapat dipake dalam Rules
Cara melakukan deklarasi variable dalam Makefile yaitu sebagai berikut
```
CC = gcc
SRC_DIR = src
VAR_SUKA_SUKA_SAYA = value suka suka saya
```
Cara mengakses variable
```
$(CC)
$(SRC_DIR)
$(VAR_SUKA_SUKA_SAYA)
```

### 2. Rules
Sebuah Rule memiliki pola standar yang terdiri dari tiga struktur
1. TARGET
2. PREREQUISITES
3. RECEIPES

#### 1. Target
Target adalah apa yang kita ingin hasilnya dari proses build. Biasanya file berekstensi .o atau file executable

#### 2. Prerequisites
Prereq merupakan file apa saja yang dibutuhkan untuk melakukan proses build. biasanya file berekstensi .c atau .h kalau sedang dalam bahasa c atau cpp.

#### 3. Receipes
Receipes merupakan langkah proses apa saja yang harus dilakukan secara berurutan untuk melakukan proses build

## Bagaimana GNU make berkerja dengan Makefile

    


