//
//  voto.c
//  Es201014
//
//  Created by Giacomo Barbieri on 27/10/14.
//  Copyright (c) 2014 Tweaknology. All rights reserved.
//

#include "voto.h"
#include <stdlib.h>

void addVoto(voti* lista_v, string codice, string nome_v, string cognome_v) { // aggiunge un voto alla lista
	voti nv = (voti)malloc(sizeof(vnode));
	copia(nv->info.codice, codice);
	copia(nv->info.nomev, nome_v);
	copia(nv->info.cognomev, cognome_v);
	nv->next = *lista_v;
	*lista_v = nv;
}
int numVoti(voti lista) { // controlla il numero di voti
	int i = 0;
	while(lista != NULL) { // fino a che il nodo non risulti nullo
		i++;
		lista = lista->next;
	}
	return i;
}
int nonValidi(voti lista_v, candidati lista_c) { //controlla i voti non validi
	int count = 0;
	int uguali = 1;
	while (lista_v != NULL) {
		while(lista_c != NULL || !uguali) {
			if(!(confronta(lista_v->info.codice, lista_c->info.cod))) {
				uguali = 0;
				count++;
			}
			lista_c = lista_c->next;
		}
		lista_v = lista_v->next;
	}
	return count;
}
int votiCandidato(voti lista_v, candidati lista_c, string nome_c, string cognome_c){ // restituisce i voti del candidato in input
	int count = 0;
	while (lista_v != NULL) {
		while(lista_c != NULL) {
			if((confronta(lista_c->info.nome, nome_c) && confronta(lista_c->info.cognome, cognome_c))) {
				count++;
			}
			lista_c = lista_c->next;
		}
		lista_v = lista_v->next;
	}
	return count;
}
void removeInvalid(voti* lista_v, candidati lista_c) { //rimuove i voti non validi facendo il check con i codici
	while(lista_v != NULL) {
		while(lista_c != NULL) {
			
		}
	}
}
//end