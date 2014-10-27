//
//  main.c
//  Es201014
//
//  Created by Giacomo Barbieri on 27/10/14.
//  Copyright (c) 2014 Tweaknology. All rights reserved.
//

#include <stdio.h>
#include "ElezioniAmericane.c"

int main(int argc, const char * argv[]) {
	printf("---TEST---\n");
	candidato one = ("abc", "Barack", "Obama");
	candidato two = ("123", "Mitt", "Romney");
	votazione uno = ("abc", "Roberto", "De Virgilio");
	votazione due = ("abc", "Andrea", "Rossi");
	votazione tre = ("123", "Mario", "Verdi");
	votazione quattro = ("aaa", "Mario", "Neri");
    return 0;
}
