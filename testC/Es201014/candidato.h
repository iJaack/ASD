//
//  candidato.h
//  Es201014
//
//  Created by Giacomo Barbieri on 27/10/14.
//  Copyright (c) 2014 Tweaknology. All rights reserved.
//

#ifndef __Es201014__candidato__
#define __Es201014__candidato__

#include <stdio.h>
#include "stringhe.h"

typedef struct { // definisce la struttura candidato
	string cod, nome, cognome;
} candidato;
typedef struct elem { // definisce il nodo lista
	candidato info;
	struct elem* next;
} node;
typedef node* candidati; // definisce il puntatore alla lista (per i metodi void)
void addCandidato(candidati*, string, string); // aggiunge un candidato all'insieme

#endif /* defined(__Es201014__candidato__) */