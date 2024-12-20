#include <stdio.h>

// Fungsi rekursif untuk Menara Hanoi
void hanoi(int n, char asal, char tujuan, char bantu) {
    if (n == 1) {
        printf("Pindahkan cakram 1 dari tiang %c ke tiang %c\n", asal, tujuan);
        return;
    }

    hanoi(n - 1, asal, bantu, tujuan);
    printf("Pindahkan cakram %d dari tiang %c ke tiang %c\n", n, asal, tujuan);
    hanoi(n - 1, bantu, tujuan, asal);
}

int main() {
    int cakram;

  
    printf("|Programer: Rozel Tasri Orama                    |\n");
    printf("|Nim      : 24343023                             |\n");
    printf("|                                                |\n");
   

    // Meminta input jumlah cakram dari pengguna
    printf("Masukkan jumlah cakram: ");
    scanf("%d", &cakram);

    // Panggil fungsi rekursif untuk Menara Hanoi
    printf("Langkah-langkah untuk memindahkan %d cakram:\n", cakram);
    hanoi(cakram, 'A', 'C', 'B'); // 'A' adalah tiang asal, 'C' adalah tiang tujuan, 'B' adalah tiang bantu

    return 0;
}