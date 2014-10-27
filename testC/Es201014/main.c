//
//  main.c
//  Es201014
//
//  Created by Giacomo Barbieri on 27/10/14.
//  Copyright (c) 2014 Tweaknology. All rights reserved.
//

#include <stdio.h>
#include "candidato.h"
#include "voto.h"

int main(int argc, const char * argv[]) {
	printf("------TEST-------\n");
	candidato one = ("abc", "Barack", "Obama");
	candidato two = ("123", "Mitt", "Romney");
	voto uno = ("abc", "Roberto", "De Virgilio");
	voto due = ("abc", "Andrea", "Rossi");
	voto tre = ("123", "Mario", "Verdi");
	voto quattro = ("aaa", "Mario", "Neri");
	printf("---END-OF-TEST---");
    return 0;
}
//end main