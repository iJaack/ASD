#include "valore_massimo.h"

int valore_massimo(int **A, int r, int c) {
	int max=0;
	r=sizeof(*A);
	c=sizeof(**A);
	int i, j;
	for(i=0; i<r; i++) {
		for(j=0; j<c; j++) {
			if(max<A[j][i]) {
				max = A[i][j];
			}
		}
	}
	return max;
}
