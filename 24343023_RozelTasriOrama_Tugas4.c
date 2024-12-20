#include <stdio.h>
#include <string.h>

#define MAX_BUKU 100    //jumlah buku maksimal
#define MAX_STRING 100  //jumlah maksimal karakter/huruf

struct Buku {
    size_t ID;
    char judul[MAX_STRING];
    char pengarang[MAX_STRING];
    int tahun;
};

//fungsi menambahkan buku
void tambahkanBuku(struct Buku *perpustakaan, int *jumlahBuku){
    if (*jumlahBuku < MAX_BUKU ) {

        printf("Masukkan ID buku     : ");
        getchar();
        scanf("%d", &perpustakaan[*jumlahBuku].ID);

        printf("Masukkan judul buku     : ");
        getchar();
        fgets(perpustakaan[*jumlahBuku].judul, MAX_STRING, stdin);
        perpustakaan[*jumlahBuku].judul[strcspn(perpustakaan[*jumlahBuku].judul, "\n")] = 0;

        printf("Masukkan pengarang buku : ");
        fgets(perpustakaan[*jumlahBuku].pengarang, MAX_STRING, stdin);
        perpustakaan[*jumlahBuku].pengarang[strcspn(perpustakaan[*jumlahBuku].pengarang, "\n")] = 0;

        printf("Masukkan tahun terbit   : ");
        scanf("%i", &perpustakaan[*jumlahBuku].tahun);

        (*jumlahBuku)++;
    } else printf("Buku sudah penuh");    
}

//fungsi menampilkan semua buku
void tampilkanBuku(struct Buku *perpustakaan, int jumlahBuku){
    for (int i = 0; i < jumlahBuku; i++) {
        printf("\nBuku Ke %i\n", i+1);
        printf("ID              : %d\n", perpustakaan[i].ID);
        printf("Judul           : %s\n", perpustakaan[i].judul);
        printf("Pengarang       : %s\n", perpustakaan[i].pengarang);
        printf("Tahun terbit    : %i\n", perpustakaan[i].tahun);
    }
}

// fungsi membandingkan buku
int findBook(struct Buku *perpustakaan, int jumlahBuku){
    int id_to_search;

    printf("Masukkan ID buku        : ");
    getchar();
    scanf("%d", &id_to_search);

    for (int i = 0; i < jumlahBuku; i++) {
        if (perpustakaan[i].ID == id_to_search) return i;
    }
    return -1;
}

//fungsi mencari buku dengan judul dan langsug menampilkan
void findBookAndDisplay(struct Buku *perpustakaan, int jumlahBuku){
    int find_at_index = findBook(perpustakaan, jumlahBuku);


    if (find_at_index == -1){
        printf("\nBuku tidak ditemukan\n");
        return;
    }
    printf("ID              : %d\n", perpustakaan[find_at_index].ID);
    printf("Judul           : %s\n", perpustakaan[find_at_index].judul);
    printf("Pengarang       : %s\n", perpustakaan[find_at_index].pengarang);
    printf("Tahun terbit    : %i\n", perpustakaan[find_at_index].tahun);
}

int main(){
    struct Buku perpustakaan[MAX_BUKU];
    int pilihan, jumlahBuku = 0;
    char ulang;

    //perulangan agar user dapat menjalankan program berkali kali
    do {
        printf("Menu\n");
        printf("1. Tambahkan buku\n");
        printf("2. Semua buku\n");
        printf("3. Cari buku\n");
        printf("Masukkan pilihan anda : ");
        scanf("%i", &pilihan);


        switch (pilihan) {
            case 1:
                tambahkanBuku(perpustakaan, &jumlahBuku);
                break;
            case 2:
                tampilkanBuku(perpustakaan, jumlahBuku);
                break;
            case 3:
                findBookAndDisplay(perpustakaan, jumlahBuku);
                break;
            default:
                break;
        }

        printf("Kembali ke menu? (Y / N) : ");
        scanf(" %c", &ulang);
    } while (ulang == 'y' || ulang == 'Y');   

    return 0;
}