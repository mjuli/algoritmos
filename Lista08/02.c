#include <stdio.h>

int MDC(int a, int b){
	int maior, menor;
	if (a> b){
		maior = a;
		menor = b;
	}
	else{
		maior = b;
		menor = a;
	}
	if (menor == 0)
   		return maior;
	else
   		return MDC(menor, maior % menor);
}

int main(int argc, char **argv){
	printf("O mdc de 20 e 15 eh: %d\n", MDC(15, 20));
	printf("O mdc de 12 e 20 eh: %d\n", MDC(12, 20));
	printf("O mdc de 252 e 105 eh: %d\n", MDC(252, 105));
	return 0;
}