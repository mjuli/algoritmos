#include <stdio.h>

int fat(int num){
	if (num == 0)
		return 1;
	else
		return num * fat(num-1);	
}

int fib(int num){
	if (num < 2)
		return num;
	else
		return fib(num-1)+fib(num-2);	
}

int maior(int a[], int qtd){
	int m;
	if (qtd == 1)
		m = a[0];
	else{
		m = maior(a, qtd-1);
		if (a[qtd-1]> m)
			m = a[qtd-1];	
	}
	return m;
}

int soma(int a[], int qtd){
	if (qtd == 1)
		return a[0];
	else
		return a[qtd-1] + soma(a, qtd-1);
}

int busca(int a[], int num, int qtd){
	if (num == a[qtd - 1])
		return qtd-1;
	else
		return busca(a, num, qtd-1);	
}

int main(int argc, char **argv){
	int array[] = {1, 2, 3, 4, 5};
	int num = 4;
	int qtd = 5;
	printf("O fatorial de 4 eh: %d\n", fat(num));
	printf("O quarto elemento da sequencia fibonacci eh : %d\n", fib(num));
	printf("O maior elemento do array = {1, 2, 3, 4, 5} eh: %d\n", maior(array, qtd));
	printf("A soma do array anterior eh: %d\n", soma(array, qtd));
	printf("O numero 4 esta no indice: %d\n", busca(array, num, qtd));
	return 0;
}