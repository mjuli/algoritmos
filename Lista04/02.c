#include <stdio.h>
#include <string.h>
#include <ctype.h>
void teste(char palavra[]){
	int size, a = 0, b, tam, d = 0, i;
	size = strlen(palavra);
	char palavra2[size];
	for(i = 0; i < size; i++){
		if (ispunct(palavra[i])==0){
			palavra2[a] = palavra[i];
			a++;
		}
	}
	b = strlen(palavra2);
	if (b%2==0)
		tam = b/2;
	else
		tam = (b-1)/2;
	b = b -1;
	for(i = 0; i < tam; i++){
		if (palavra2[i] == palavra2[b])
			b--;
		else
			d = 1;
	}
	if (d==0)
		printf("Palindromo\n");
	else
		printf("Nao eh uma palindromo\n");
}
int main(int argc, char **argv){
	char palavra[50];
	printf("Digite uma palavra:\n");
	scanf("%s", palavra);
	teste(palavra);
	return 0;
}