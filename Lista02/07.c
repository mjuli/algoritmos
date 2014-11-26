#include <stdio.h>
int potenciacao(int b, int p){
	int resultado = b;
	int i;
	if (p == 0)
		resultado = 1;
	else{
		for(i = 1; i < p; i++){
			resultado *= b; 
		}
	}
	return resultado;
}
int main(int argc, char **argv){
	int base, pot;
	printf("Digite o valor da base: ");
	scanf("%d", &base);
	printf("Digite o valor da potencia: ");
	scanf("%d", &pot);
	printf("%d elevado a %d = %d\n", base, pot, potenciacao(base, pot));
	return 0;
}