#include <stdio.h>
float media(float a, float b){
	return (((a*2)+(b*3))/5);
}
int main(int argc, char **argv){
	float n1, n2;
	printf("Digite a primeira nota:\n");
	scanf("%f", &n1);
	printf("Digite a segunda nota:\n");
	scanf("%f", &n2);
	printf("A media eh %.1f\n", media(n1, n2));
	return 0;
}