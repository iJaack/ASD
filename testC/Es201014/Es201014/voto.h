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

typedef struct { // definisce la struttura collegata 'voto'
	string codice;
	string nomev;
	string cognomev;
} voto;
typedef struct elem2 { // definisce il nodo lista 'voto'
	voto info;
	struct elem2* next;
} vnode;
typedef vnode* voti; // definisc l'appoggio puntatore per la lista, per i metoti void
void addVoto(voti*, string, string, string); //aggiunge un voto all'insieme
int numVoti(voti); // controlla il numero di voti
int nonValidi(voti, candidati); //controlla i voti non validi
int votiCandidato(voti, candidati, string, string); // restituisce i voti del candidato in input
void removeInvalid(voti*, candidati); //rimuove i voti non validi facendo il check con i codici (si usa il puntatore perché è un void)

#endif /* defined(__Es201014__votazione__) */
