#include <stdio.h>
#include <string.h>

//definisi tipe sturct secara global
struct tanggal
{
    int hari, bulan, tahun;
};

struct mahasiswa
{
    char nama[30];
    int  nim;
    struct tanggal tanggal_lahir;
};

// deklarasi vriabel data_mahasiswa secara global
struct mahasiswa data_mahasiswa;

main(){

 //   mengisi data kedalam variabel data_mahasiswa secara global
    strcpy(data_mahasiswa.nama, "Rozel tasri orama");
    data_mahasiswa.nim = 24343055;
    data_mahasiswa.tanggal_lahir.hari = 9;
    data_mahasiswa.tanggal_lahir.bulan = 04;
    data_mahasiswa.tanggal_lahir.tahun = 2006;

    // menampilkan data dalam struct data_mahasiswa
    printf("Nama Mahasiswa: %s\n", data_mahasiswa.nama);
    printf("Nomer Induk Mahasiswa: %d\n", data_mahasiswa.nim);
    printf("Tanggal Lahir: %d-%d-%d\n",data_mahasiswa.tanggal_lahir.hari,
    data_mahasiswa.tanggal_lahir.bulan,
    data_mahasiswa.tanggal_lahir.tahun);
    };
