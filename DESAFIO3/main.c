#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main() {
	char frase[100];
	int tam;
	printf("Digite a frase a ser convertida com os espacos substituidos por '-':\n");
	gets(frase);
	tam = strlen(frase);

	
	for (int i=0; i<tam+1; i++){
		if(frase[i] == 'A' || frase[i] == 'B' || frase[i] == 'C'){
 			frase[i] = '2';
		}
		else 
			if(frase[i] == 'D' || frase[i] == 'E' || frase[i] == 'F'){
			 	frase[i] = '3';
		}
		else 
			if(frase[i] == 'G' || frase[i] == 'H' || frase[i] == 'I'){
			 	frase[i] = '4';
		}
		else 
			if(frase[i] == 'J' || frase[i] == 'K' || frase[i] == 'L'){
			 	frase[i] = '5';
		}
		else 
			if(frase[i] == 'M' || frase[i] == 'N' || frase[i] == 'O'){
			 	frase[i] = '6';
		}
		else 
			if(frase[i] == 'P' || frase[i] == 'Q' || frase[i] == 'R' || frase[i] == 'S'){
				frase[i] = '7';
		}
		else 
			if(frase[i] == 'T' || frase[i] == 'U' || frase[i] == 'V'){
			 	frase[i] = '8';
		}
		else 
			if(frase[i] == 'W' || frase[i] == 'X' || frase[i] == 'Y' || frase[i] == 'Z'){
			 	frase[i] = '9';
		}
		else 
			if(frase[i] == '-'){
			 	frase[i] = '-';
		}
		else 
			if(frase[i] == '1'){
     		   	frase[i] = '1';
		}
		else 
			if(frase[i] == '0'){
			  	frase[i] = '0';
			}
	}
	for (int i=0; i<tam+1; i++){
		printf("%c", frase[i]);
	}
	
	return 0;
}
