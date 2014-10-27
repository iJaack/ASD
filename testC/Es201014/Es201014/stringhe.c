//
//  stringhe.c
//  Es201014
//
//  Created by Giacomo Barbieri on 27/10/14.
//  Copyright (c) 2014 Tweaknology. All rights reserved.
//

#include <stdio.h>
#include "stringhe.h"

int lung(string a) {
	int i = 0;
	while(a[i]!= '\0') {
		i++;
	}
	return i;
}
int confronta(string a, string b) {
	int i, j;
	int temp = 1;
	if(lung(a) == lung(b)) {
		while(!temp) {
			if(a[i] != b[j]){
				temp = 0;
			}
			i++;
			j++;
		}
	}
	return temp;
}
void copia(string a, string b) { // copia  b in a
	int i = 0;
	while(b[i] != '\0') {
		a[i] = b[i];
		i++;
	}
	a[i] = '\0';
}