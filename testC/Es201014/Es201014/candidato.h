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

typedef struct {
	string cod, nome, cognome;
} candidato;
typedef struct elem {
	candidato info;
	struct elem* next;
} node;
typedef node* candidati;
void addCandidato(candidati*, string, string);

#endif /* defined(__Es201014__candidato__) */
