#include <stdio.h>

int main() {
    float nilai_tugas, nilai_uts, nilai_uas, nilai_akhir;  // deklarasi variabel
    printf("nama:Rozel Tasri Orama\n");
    printf ("Nim : 24343023\n");
    printf ("tanggal : 4,10,2024\n");
    // Mengambil input dari pengguna
    printf("Masukkan nilai Tugas: ");  // input nilai tugas
    scanf("%f", &nilai_tugas);
    printf("Masukkan nilai UTS: ");   // input nilai uts
    scanf("%f", &nilai_uts);
    printf("Masukkan nilai UAS: ");  // input nilai uts
    scanf("%f", &nilai_uas);
    
    // Menghitung nilai akhir
    nilai_akhir = (0.3 * nilai_tugas) + (0.3 * nilai_uts) + (0.4 * nilai_uas); 
    
    // Menampilkan nilai akhir
    printf("Nilai Akhir: %.2f\n", nilai_akhir);
    
    // Menentukan kelulusan
    if (nilai_akhir >= 60) {
        printf("Status: Lulus\n");
    } else {
        printf("Status: Tidak Lulus\n");
    }

    return 0;
}
