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
	//Isi kode anda disini
}

/**
 * @name inverse
 * @brief fungsi untuk menghitung inverse sebuah matriks 3 x 3
 * @param double input matriks 3 x 3
 * @return double inverse matriks 3 x 3 
 */

void inverse(double mat[3][3], double invmat[3][3]) {
	//Isi kode anda disini
}

int main(void) {

	// Input matriks A
	printf("Masukkan matriks A:\n");

	// Input array B
	printf("Masukkan array B:\n");


	// Hitung determinan matriks A
	detA = determinant(A);
	printf("Determinan A mendekati nol. Matriks A dianggap singular.\n");

	// Hitung inverse matriks A
	inverse(A, invA);

	// Mencetak X 
	printf("Solusi persamaan linier adalah: \n");
	printf("X[%d] = %.4lf\n", ..., ...;


	return 0;
}