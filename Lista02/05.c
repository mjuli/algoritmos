#include <stdio.h>
int main(int argc, char **argv){
	int num, i;
	int primo = 0;
	printf("Digite um numero: ");
	scanf("%d", &num);
	if (num > 2){
		for (i = 2; i < num; i++){
			if (num % i == 0)
				primo += 1;
		}
	}
	if (primo == 0)
		printf ("O numero eh primo\n");
	else
		printf ("O numero nao eh primo\n");
	return 0;
}