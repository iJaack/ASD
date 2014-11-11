//
//  stringhe.h
//  testC
//
//  Created by Giacomo Barbieri on 07/11/14.
//  Copyright (c) 2014 Giacomo Barbieri. All rights reserved.
//

#ifndef __testC__stringhe__
#define __testC__stringhe__

#include <stdio.h>

#define SMAX 20
typedef char stringa[SMAX];

void leggiStringa(stringa);
void scriviStringa(stringa);
int lung(stringa);
void assegna(stringa, stringa);
void concatena(stringa, stringa, stringa);
char elemento(stringa, int);

#endif /* defined(__testC__stringhe__) */
