#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
    printf("|=============================================|\n");
    printf("|nama file:          Tugas 2 fundamental      |\n");
    printf("|Programer: Rozel Tasri Orama                 |\n");
    printf("|Nim:24343023                                 |\n");
    printf("|                                             |\n");
    printf("|=============================================|\n");    
    int bilangan, sisaBagi;

    // input bilangan
    printf("Menentukan bilangan bulat ganjil atau genap\n");
    printf("Masukan bilangan bulat: ");
    scanf("%d", &bilangan);

    // proses menghitung sisa bagi dengan operator sisabagi, jika sisa bagi == 1 maka bilangan ganjil
    // jika sisa bagi == 0 maka bilangan genap
    sisaBagi = bilangan % 2;

    // proses pengecekan dengan pengambilan keputusan if/else, dan output hasilnya
    if (sisaBagi == 1) { // pada pengecekan variabel apakah yang harus di periksa untuk menentukan bilangan
        printf("Bilangan %d merupakan bilangan ganjil.", bilangan);
    } else {
        // lanjutkan output jika bilangan genap
        printf("Bilangan %d merupakan bilangan genap.", bilangan);
    }

    return 0;
}
