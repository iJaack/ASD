//
//  main.c
//  testC
//
//  Created by Giacomo Barbieri on 07/11/14.
//  Copyright (c) 2014 Giacomo Barbieri. All rights reserved.
//

#include "valore_massimo.h"

int main() {
	int a[2][2] = {{0, 1}, {4, 3}};
	int max=valore_massimo(a, 2, 2);
	printf("%d", max);
}