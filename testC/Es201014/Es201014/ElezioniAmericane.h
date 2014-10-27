//
//  ElezioniAmericane.h
//  Es201014
//
//  Created by Giacomo Barbieri on 27/10/14.
//  Copyright (c) 2014 Tweaknology. All rights reserved.
//

#ifndef __Es201014__ElezioniAmericane__
#define __Es201014__ElezioniAmericane__

#include <stdio.h>

typedef char string[15];
typedef struct {
	string cod, nome, cognome;
} candidato;
typedef struct {
	string ver_cod, nome_vot, cognome_vot;
} votazione;

#endif /* defined(__Es201014__ElezioniAmericane__) */
