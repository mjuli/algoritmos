#include <stdio.h>
int mdc(int a, int b){
	int mdc = 0;
	int i;
	for(i = 1; i <= a; i++){
		if (a%i == 0 && b%i == 0)
			mdc = i;
	}
	return mdc;
}
int main(int argc, char **argv){
	int n1, n2;
	printf("Digite o primeiro numero: ");
	scanf("%d", &n1);
	printf("Digite o segundo numero: ");
	scanf("%d", &n2);
	printf("MDC: %d\n", mdc(n1, n2));
	return 0;
}