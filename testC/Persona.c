//
//  Persona.c
//  testC
//
//  Created by Giacomo Barbieri on 21/10/14.
//  Copyright (c) 2014 Giacomo Barbieri. All rights reserved.
//

#include <stdio.h>
#ifndef Persona
#define Persona
typedef struct {
	char nome;
	char cognome;
	int età;
	int data_nascita[3];
} Persona;

