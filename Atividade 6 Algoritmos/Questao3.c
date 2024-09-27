#include <stdio.h>
#include <string.h>

int main () {

	int i, j, n = 0, aux = 0;
	char string[100];
	
	printf ("Digite o conteudo da string: ");
	scanf ("%s", string);
	
	n = strlen(string);
	
	for (i = 0, j = n-1; i != j; i++, j--) {
		
			aux = string[i];
			string[i] = string[j];
			string[j] = aux;
	
	}
	
	printf ("String invertida: %s", string);
	
	return 0;
}
