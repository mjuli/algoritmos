#include <stdio.h>
int main(int argc, char **argv){
	int x[1000];
	int i, ind1, ind2, diferenca, d;
	printf("Digite 10 numeros: ");
	for (i = 0; i < 1000; i++){
		scanf("%d", &x[i]);
	}
	diferenca = 0;
	for (i = 0; i < 999; i++){
		if (x[i] > x[i+1])
			d = x[i] - x[i +1];
		else
			d = x[i+1] - x[i];
		if (d > diferenca){
			diferenca = d;
			ind1 = i;
			ind2 = i+1;
		}
	}
	printf("Maior diferença: %d\n", diferenca);
	printf("Indice 1: %d\n", ind1);
	printf("Indice 2: %d\n", ind2);
	return 0;
}