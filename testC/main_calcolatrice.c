//
//  main_calcolatrice.c
//  testC
//
//  Created by Giacomo Barbieri on 18/10/14.
//  Copyright (c) 2014 Giacomo Barbieri. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
	int a, b, somma, sottrazione, prodotto, divisione;
	char op;
	printf("Enter your operation:");
	scanf("%d%c%d", &a, &op, &b);
	switch (op) {
		case '+': {
			somma=a+b;
			printf("%d%c%d=%d\n", a, op, b, somma);
		} break;
		case '-': {
			sottrazione=a-b;
			printf("%d%c%d=%d\n", a, op, b, sottrazione);
		} break;
		case '*': {
			prodotto=a*b;
			printf("%d%c%d=%d\n", a, op, b, prodotto);
		} break;
		case '/': {
			divisione=a/b;
			printf("%d%c%d=%d\n", a, op, b, divisione);
		} break;
		default: printf("Hai immesso un operatore non valido");
	}
	return 0;
}
