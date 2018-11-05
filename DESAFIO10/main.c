#include <stdlib.h>
#include <stdio.h>

int main() {
	int n, conta;
	
	printf("Digite o numero de cliques do terceiro link:\n");
	scanf("%d", &n);
	
	conta = n+n;
	conta += conta;
	
	printf("O numero de cliques no primeiro link eh:\n%d", conta);
	return 0;
}
