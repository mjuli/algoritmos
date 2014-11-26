#include <stdio.h>
#include <string.h>
int main(int argc, char **argv){
	int i, j, size;
	char frase[500];
	char str1[11] = "ZENIT";
	char str2[11] = "POLAR";
	char str3[11] = "zenit";
	char str4[11] = "polar";
	printf("Digite uma frase: \n");
	gets(frase);
	size = strlen(frase);
	for (i = 0; i < size; i++){
		for (j = 0; j < 10; j++){
			if (frase[i] == str1[j]){
				frase[i] = str2[j];
			}
			else if (frase[i] == str2[j]){
				frase[i] = str1[j];
			}
			else if(frase[i] == str3[j]){
				frase[i] = str4[j];
			}
			else if(frase[i] == str4[j]){
				frase[i] = str3[j];
			}
		}
	}
	printf("Criptografado: %s\n", frase);
	return 0;
}