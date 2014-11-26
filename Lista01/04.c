#include <stdio.h>
float soma(float a, float b){
	return (a+b);
}
int main(int argc, char **argv){
	float n1, n2;
	printf("Digite um numero:\n");
	scanf("%f", &n1);
	printf("Digite outro numero:\n");
	scanf("%f", &n2);
	printf("%f", soma(n1, n2));
	return 0;
}