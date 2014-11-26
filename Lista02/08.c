#include <stdio.h>
int tempo_total(float massa, int tempo){
	int resultado = 0;
	while (massa >= 1){
		resultado += tempo;
		massa = massa/2;
	}
	return resultado;
}
int main(int argc, char **argv){
	float massa;
	int tempo;
	printf("Digite a massa em gramas: ");
	scanf("%f", &massa);
	printf("Digite o tempo em segundos: ");
	scanf("%d", &tempo);
	printf("Tempo necessario: %d segundo(s)\n", tempo_total(massa, tempo));
	return 0;
}