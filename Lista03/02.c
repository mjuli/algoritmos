#include <stdio.h>
float m(float *x, int n){
	int i;
	int soma = 0;
	float media;
	for(i = 0; i < n; i++){
		soma += x[i];
	}
	media = soma/n;
	return media;
}
int main(int argc, char **argv){
	float media;
	int qtd, i;
	int m1 = 0;
	int m2 = 0;
	int qtd_menor = 0;
	int qtd_maior = 0;
	printf("Digite a quantidade de numeros: ");
	scanf("%d", &qtd);
	float x[qtd];
	printf("Digite %d numeros:\n", qtd);
	for (i = 0; i < qtd; i++){
		scanf("%f", &x[i]);
	}
	media = m(x, qtd);
	for (i = 0; i < qtd; i++){
		if (x[i] >= media)
			qtd_maior += 1;
		else
			qtd_menor += 1;
	}
	float maiores[qtd_maior];
	float menores[qtd_menor];
	for (i = 0; i < qtd; i++){
		if (x[i] >= media){
			maiores[m1] = x[i];
			m1++;
		}
		else{
			menores[m2] = x[i];
			m2++;
		}
	}
	printf("A media eh: %.1f\n", media);
	printf("%d numeros sao maiores ou igual a media\n", qtd_maior);
	for (i = 0; i < qtd_maior; i++){
		printf("%.1f\n", maiores[i]);
	}
	printf("%d numeros sao menores que a media\n", qtd_menor);
	for (i = 0; i < qtd_menor; i++){
		printf("%.1f\n", menores[i]);
	}
	return 0;
}