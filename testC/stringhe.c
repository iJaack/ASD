//
//  stringhe.c
//  testC
//
//  Created by Giacomo Barbieri on 07/11/14.
//  Copyright (c) 2014 Giacomo Barbieri. All rights reserved.
//

#include "stringhe.h"

/* legge una stringa da input == a scanf("%s\n",str) */
void leggiStringa(stringa str) {
	int i=0;
	char c;
	while ((c=getchar())!='\n') { str[i]=c; i++; }
	str[i] = '\0';
}

/* scrive una stringa da input == a printf("%s\n",str) */
void scriviStringa(stringa str) {
	int i=0;
	while (str[i]!='\0') { putchar(str[i]); i++; }
	putchar('\n');
}

/* calcola la lunghezza di un stringa */
int lung(stringa str) {
	int i=0;
	while (str[i]!='\0')
		i++;
		return i;
}

/* concatena la stringa 2 alla stringa 1 */
void assegna(stringa s1, stringa s2) {
	int i;
	for (i=0; i<lung(s2); i++) s1[i] = s2[i];
	s1[i]='\0';
}

/* come assegna con la differenza che pone il risultato in stringa 3 */
void concatena(stringa s1, stringa s2, stringa s3) {
	int i=0, j=0;
	for (j=0; j<lung(s1); i++, j++) s3[i]=s1[j];
	for (j=0; j<lung(s2); i++, j++) s3[i]=s2[j];
	s3[i]='\0';
}

/* restituisce l'i-esimo elemento di una stringa */
char elemento(stringa str, int n) {
	return str[n-1];
}
