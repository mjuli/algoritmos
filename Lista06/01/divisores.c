#include <stdio.h>
#include "divisores.h"
int gera_divisores(unsigned long int num, FILE * arq_divisores){
	int i;
	for(i = 1; i <= num; i++){
		if(num % i == 0){
			fprintf(arq_divisores, "%d \n", i);
		}
	}
	return 0;
}