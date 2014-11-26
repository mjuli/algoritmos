#include <stdio.h>
int main(int argc, char **argv){
	float n1, n2, media;
	printf("Digite a primeira nota:\n");
	scanf("%f", &n1);
	printf("Digite a segunda nota:\n");
	scanf("%f", &n2);
	media = ((n1 * 2) + (n2 * 3)) / 5;
	if (media >= 6)
		printf("APROVADO\n");
	else if (media < 2)
		printf("REPROVADO\n");
	else
		printf("RECUPERAÇAO\n");
	return 0;
}