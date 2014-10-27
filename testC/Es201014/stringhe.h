//
//  stringhe.h
//  Es201014
//
//  Created by Giacomo Barbieri on 27/10/14.
//  Copyright (c) 2014 Tweaknology. All rights reserved.
//

#ifndef Es201014_stringhe_h
#define Es201014_stringhe_h

typedef char string[15]; //definisce una stringa come array di caratteri
int lung(string); // lunghezza di una stringa
void copia(string, string); // copia la seconda stringa nella prima
int confronta(string, string); // confronta le stringe e restituisce 1 se le stringe sono uguali, 0 se non lo sono

#endif /* defined(__Es201014__stringhe_h__) */