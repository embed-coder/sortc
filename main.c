// gcc -o sort main.c quicksort.c -I.
#include <stdio.h>
#include "sort.h"

int main(int agrc, char *argv[]) {
	int a[] = {4, 10, 7, 8, 9, 1, 5};
	int n = sizeof(a) / sizeof(a[0]);

    printf("Original array: \n");
    printarray(a, n);
	quickSort(a, 0, n - 1);

	printf("Sorted array: \n");
	printarray(a, n);

	return 0;
}