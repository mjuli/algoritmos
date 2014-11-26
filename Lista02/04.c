#include <stdio.h>
int main(int argc, char **argv){
	int num, i;
	int soma = 0;
	printf("Digite um numero: ");
	scanf("%d", &num);
	if (num >0){
		for (i =1; i<=num; i++){
			printf("%d\n", i);
			soma += i;
		}
		printf("%d\n", soma);
	}
	else
		printf("O numero eh negativo\n");
	return 0;
}