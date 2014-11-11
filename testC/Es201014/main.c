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
	candidati* lista_c = NULL;
	voti* lista_v = NULL;
	addcandidato(lista_c, "abc", "Barack", "Obama");
	addcandidato(lista_c, "123", "Mitt", "Romney");
	addvoto(lista_v, "abc", "Roberto", "De Virgilio");
	addvoto(lista_v,"abc", "Andrea", "Rossi");
	addvoto(lista_v,"123", "Mario", "Verdi");
	addvoto(lista_v, "aaa", "Mario", "Neri");
	printf("----END-OF-TEST----\n");
    return 0;
}
//end main