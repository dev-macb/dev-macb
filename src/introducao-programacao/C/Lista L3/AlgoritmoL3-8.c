// Declaração de Bibliotecas
#include<stdio.h>

// Função procurar
int procurar(char c, char vetor[])
{
	int i;
	for(i = 0; vetor[i] != '\0'; i++)
    {
		if(c == vetor[i]) { return(i); }	
	}
	return -1;	
}

// Função Principal
int main()
{
    // Declaração de Variáveis
	int casos, ret;
	char caractere, vetor[500];

	scanf("%d", &casos);
	getchar();

	while(casos--){
		scanf("%c ", &caractere);
		scanf("%[^\n]", vetor);
		getchar();
		
        ret = procurar(caractere, vetor);
		
        if(ret == -1)
        {
			printf("Caractere %c nao encontrado.\n", caractere);
		}
		else
        {
			printf("Caractere %c encontrado no indice %d da string.\n", caractere, ret);
		}	
	}
}
