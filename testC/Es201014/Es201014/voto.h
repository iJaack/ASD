//
//  votazione.h
//  Es201014
//
//  Created by Giacomo Barbieri on 27/10/14.
//  Copyright (c) 2014 Tweaknology. All rights reserved.
//

#ifndef __Es201014__votazione__
#define __Es201014__votazione__

#include <stdio.h>
#include "stringhe.h"
#include "candidato.h"

typedef struct {
	string codice;
	string nomev;
	string cognomev;
} voto;
typedef struct elem2 {
	voto info;
	struct elem2* next;
} vnode;
typedef vnode* voti;
void addVoto(voti*, string, string, string); //aggiunge un voto all'insieme
int numVoti(voti); // controlla il numero di voti
int nonValidi(voti, candidati); //controlla i voti non validi
int votiCandidato(voti, candidati, string, string);
void removeInvalid(voti*, candidati); //rimuove i voti non validi facendo il check con i codici (si usa il puntatore perché è un void)

#endif /* defined(__Es201014__votazione__) */
