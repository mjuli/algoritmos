#include <stdio.h>
int main(int argc, char **argv){
	int dia, mes, ano, i;
	int m31[7] = {1, 3, 5, 7, 8, 10, 12};
	int m30[7] = {4, 6, 9, 11, 0, 0, 0};
	int validar = 0;
	printf("Digite o dia:\n");
	scanf("%d", &dia);
	printf("Digite o mes:\n");
	scanf("%d", &mes);
	printf("Digite o ano:\n");
	scanf("%d", &ano);
	if (mes >0 && mes<=12){
		for (i =0; i<7; i++){
			if(mes == m31[i]){
				if (dia>0 && dia<32)
					validar =0;
				else
					validar = 1;
			}
			else if(mes == m30[i]){
				if (dia>0 && dia<31)
					validar =0;
				else
					validar = 1;
			}
			else{
				if (dia>0 && dia<29)
					validar =0;
				else
					validar = 1;
			}
		}
	}
	else
		validar=1;
	if (validar == 0)
		printf("A data eh valida!\n");
	else
		printf("A data eh invalida!\n");
	return 0;
}