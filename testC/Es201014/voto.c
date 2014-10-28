//
//  voto.c
//  Es201014
//
//  Created by Giacomo Barbieri on 27/10/14.
//  Copyright (c) 2014 Tweaknology. All rights reserved.
//

#include "voto.h"

void addVoto(voti* lista, string codice, string nomev, string cognomev) { // aggiunge una votazione alla lista
	
}
int numVoti(voti lista) { // controlla il numero di voti
	int i = 0;
	while(lista->next != '\0') {
		lista = lista->next;
		i++;
	}
	return i;
}
int nonValidi(voti lista_v, candidati lista_c) { //controlla i voti non validi
	int count = 0;
	int uguali = 1;
	while (lista_v->next != '\0') {
		while(lista_c->next != '\0' || !uguali) {
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
	while (lista_v->next != '\0') {
		while(lista_c->next != '\0') {
			if(confronta(lista_c->info.nome, nome_c) && confronta(lista_c->info.cognome, cognome_c)) {
				count++;
			}
			lista_c = lista_c->next;
		}
		lista_v = lista_v->next;
	}

	return count;
}
void removeInvalid(voti* lista_v, candidati lista_c) { //rimuove i voti non validi facendo il check con i codici
	
}
//end