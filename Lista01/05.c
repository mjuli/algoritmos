#include <stdio.h>
float menor(float a, float b){
	float menor;
	if (a < b)
		menor = a;
	else
		menor = b;
	return menor;
}
int main(int argc, char **argv){
	float n1, n2;
	printf("Digite um numero:\n");
	scanf("%f", &n1);
	printf("Digite outro numero:\n");
	scanf("%f", &n2);
	printf("%.2f\n", menor(n1, n2));
	return 0;
}