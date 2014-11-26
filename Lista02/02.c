#include <stdio.h>
int main(int argc, char **argv){
	int n1, n2, n3, m1, m2, m3;
	printf("Digite o primeiro valor:\n");
	scanf("%d", &n1);
	printf("Digite o segundo valor:\n");
	scanf("%d", &n2);
	printf("Digite o terceiro valor:\n");
	scanf("%d", &n3);
	if (n1>=n2 && n1>= n3){
		m3 = n1;
		if (n2>=n3){
			m2 = n2;
			m1 = n3;
		} 
		else{
			m2 = n3;
			m1 = n2;
		}
	}
	else if (n2>= n3){
		m3 = n2;
		if (n1>=n3){
			m2 = n1;
			m1 = n3;
		} 
		else{
			m2 = n3;
			m1 = n1;
		}
	}
	else{
		m3 = n3;
		if (n1>=n2){
			m2 = n1;
			m1 = n2;
		} 
		else{
			m2 = n2;
			m1 = n1;
		}
	}
	printf("%d\n%d\n%d\n", m1, m2, m3);
	return 0;
}