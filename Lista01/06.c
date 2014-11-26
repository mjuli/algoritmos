#include <stdio.h>
float conversao(float a){
	return ((a - 32)/1.8);
}
int main(int argc, char **argv){
	float n1;
	printf("Digite a temperatura em °F:\n");
	scanf("%f", &n1);
	printf("°C: ");
	printf("%.2f\n", conversao(n1));
	return 0;
}