#include <stdio.h>
#include <string.h>
#include <ctype.h>
void palavras(char frase[]){
	int p = 0;
	int i, size;
	size = strlen(frase);
	for(i = 0; i < size; i++){
		if (isspace(frase[i]))
			p++;
	}
	p++;
	printf("O texto possui %d palavra(s)\n", p);
}
int main(int argc, char **argv){
	char frase[500];
	printf("Digite uma frase: \n");
	gets(frase);
	palavras(frase);
	return 0;
}