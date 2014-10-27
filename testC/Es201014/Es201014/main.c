//
//  main.c
//  Es201014
//
//  Created by Giacomo Barbieri on 27/10/14.
//  Copyright (c) 2014 Tweaknology. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
	printf("---TEST---\n");
	struct candidato one = ("abc", "Barack", "Obama");
	struct candidato two = ("123", "Mitt", "Romney");
	struct votazione uno = ("abc", "Roberto", "De Virgilio");
	struct votazione due = ("abc", "Andrea", "Rossi");
	struct votazione tre = ("123", "Mario", "Verdi");
	struct votazione quattro = ("aaa", "Mario", "Neri");
    return 0;
}
