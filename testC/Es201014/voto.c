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
	return count;
}
int votiCandidato(voti lista_v, candidati lista_c, string nome_c, string cognome_c){ // restituisce i voti del candidato in input
	int count = 0;
	return count;
}
void removeInvalid(voti* lista_v, candidati lista_c) { //rimuove i voti non validi facendo il check con i codici
	
}
//end