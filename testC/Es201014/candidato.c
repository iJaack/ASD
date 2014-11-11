//
//  candidato.c
//  Es201014
//
//  Created by Giacomo Barbieri on 27/10/14.
//  Copyright (c) 2014 Tweaknology. All rights reserved.
//

#include "candidato.h"
#include <stdio.h>
#include <stdlib.h>

void addcandidato(candidati* lista, string codice, string nome, string cognome) {
	candidati nc = (candidati)malloc(sizeof(node));
	copia(nc->info.cod, codice);
	copia(nc->info.nome, nome);
	copia(nc->info.cognome, cognome);
	nc->next = *lista;
	*lista = nc;
}
//end