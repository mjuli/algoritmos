#include <stdio.h>
void votos_zona(int *a){
	if (a[0] == a[1])
		printf("%d - 2 votos\n", a[0]);	
	else{
		printf("%d - 1 voto\n", a[0]);
		printf("%d - 1 voto\n", a[1]);
	}
}
void votos_geral(int *a){
	int i, j, qtd;
	for(i = 0; i < 10; i++){
		qtd = 1;
		if (a[i] > 0){
			for(j = (i+1); j < 10; j++){
				if(a[i] == a[j]){
					qtd += 1;
					a[j] = 0;
				}
			}
		printf("%d - %d votos\n", a[i], qtd);
		}
	}
}
int main(int argc, char **argv){
	int votos[30];
	int i = 0;
	int pref1[2], pref2[2], pref3[2], pref4[2], pref69[2];
	int ver1[2], ver2[2], ver3[2], ver4[2], ver69[2];
	int pref_total[10], ver_total[10];
	int a=0, b=0, c=0, d=0, e=0, f=0;
	while (i < 30){
		printf("Zona eleitoral: ");
		scanf("%d", &votos[i]);
		i++;
		printf("Prefeito: ");
		scanf("%d", &votos[i]);
		i++;
		printf("Vereador: ");
		scanf("%d", &votos[i]);
		i++;
	}
	for (i = 0; i <  30; i++){
		if (i%3 == 0){
			if(votos[i] == 1){
				pref1[a] = votos[i+1];
				ver1[a] = votos[i+2];
				a++;
				pref_total[f] = votos[i+1];
				ver_total[f] = votos[i+2];
				f++;
			}
			if(votos[i] == 2){
				pref2[b] = votos[i+1];
				ver2[b] = votos[i+2];
				b++;	
				pref_total[f] = votos[i+1];
				ver_total[f] = votos[i+2];
				f++;
			}
			if(votos[i] == 3){
				pref3[c] = votos[i+1];
				ver3[c] = votos[i+2];
				c++;
				pref_total[f] = votos[i+1];
				ver_total[f] = votos[i+2];
				f++;
			}
			if(votos[i] == 4){
				pref4[d] = votos[i+1];
				ver4[d] = votos[i+2];
				d++;
				pref_total[f] = votos[i+1];
				ver_total[f] = votos[i+2];
				f++;
			}
			if(votos[i] == 69){
				pref69[e] = votos[i+1];
				ver69[e] = votos[i+2];
				e++;
				pref_total[f] = votos[i+1];
				ver_total[f] = votos[i+2];
				f++;
			}
		}
	}
	printf("Zona 01:\n");
	printf("Prefeito:\n");
	votos_zona(pref1);
	printf("Vereador:\n");
	votos_zona(ver1);
	printf("Zona 02:\n");
	printf("Prefeito:\n");
	votos_zona(pref2);
	printf("Vereador:\n");
	votos_zona(ver2);
	printf("Zona 03:\n");
	printf("Prefeito:\n");
	votos_zona(pref3);
	printf("Vereador:\n");
	votos_zona(ver3);
	printf("Zona 04:\n");
	printf("Prefeito:\n");
	votos_zona(pref4);
	printf("Vereador:\n");
	votos_zona(ver4);
	printf("Zona 69:\n");
	printf("Prefeito:\n");
	votos_zona(pref69);
	printf("Vereador:\n");
	votos_zona(ver69);
	printf("Geral\n");
	printf("Prefeito:\n");
	votos_geral(pref_total);
	printf("Vereador:\n");
	votos_geral(ver_total);	
	return 0;
}
