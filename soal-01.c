/*EL2208 Praktikum Pemecahan Masalah dengan C 2021/2022
*Modul            : 3 - Pointers and Functions
*Percobaan        : -
*Hari dan Tanggal : Rabu, 2 Maret 2022
*Nama (NIM)       : -
*Asisten (NIM)    : -
*Nama File        : soal-01.c
*Deskripsi        : -
*/

#include <stdio.h>
#include <math.h>
#include <stdlib.h>

/**
 * @name determinant 
 * @brief fungsi untuk menghitung determinan matriks 3 x 3
 * @param double input matriks 3 x 3
 * @return double determinan matriks
 */
double determinant(double mat[3][3]) {
    double detmat = 0;
    int i;
    for (i = 0; i < 3; i++) {
        detmat += (mat[0][i] * (mat[1][(i+1)%3] * mat[2][(i+2)%3] - mat[1][(i+2)%3] * mat[2][(i+1)%3]));
    }
    return detmat;
}

/**
 * @name inverse
 * @brief fungsi untuk menghitung inverse sebuah matriks 3 x 3
 * @param double input matriks 3 x 3
 * @return double inverse matriks 3 x 3 
 */

int inverse(double mat[3][3], double invmat[3][3]) {
    int i, j;
    // double **invmat;
    double detmat;
    // Hitung determinan matriks
    detmat = determinant(mat);
    if (fabs(detmat) < 0.000001) {
        // Matriks dianggap singular dan tidak memiliki determinan, exit function
    }
    else {
        // Melakukan perhitungan inverse mat
        for (i = 0; i < 3; i ++) {
            for (j = 0; j < 3; j ++) {
                invmat[i][j] = ((mat[(j+1)%3][(i+1)%3] * mat[(j+2)%3][(i+2)%3]) - (mat[(j+1)%3][(i+2)%3] * mat[(j+2)%3][(i+1)%3]))/ detmat;
            }
        }
    }
    return 0;
}

int main(void) {
    double A[3][3];
    double invA[3][3];
    double detA;
    double B[3];
    double X[3];
    
    int i, j, k;

    // Input matriks A
    printf("Masukkan matriks A:\n");
    for (i = 0; i < 3; i ++) {
        for (j = 0; j < 3; j ++) {
            scanf("%lf", &A[i][j]);
        }
    }

    // Input array B
    printf("Masukkan array B:\n");
    for (j = 0; j < 3; j ++) {
        scanf("%lf", &B[j]);
    }

    // Hitung determinan matriks A
    detA = determinant(A);
    if (fabs(detA) < 0.000001) {
        printf("Determinan A mendekati nol. Matriks A dianggap singular.\n");
    }
    else {
        // Hitung inverse matriks A
        inverse(A, invA);
        // Mengalikan inverse matriks A dengan B untuk mendapat X
        for (i = 0; i < 3; i ++) {
            X[i] = 0;
            for (j = 0; j < 3; j ++) {
                X[i] += invA[i][j] * B[j];
            }
        }
        // Mencetak X 
        printf("Solusi persamaan linier adalah: \n");
        for (i = 0; i < 3; i ++) {
            printf("X[%d] = %.4lf\n", i, X[i]);
        }
    }

    return 0;
}
