// Declaração de Bibliotecas
#include <stdio.h>

// Função Principal
int main()
{
    // Declaração de Variáveis
    int i, j, n, letras, vogais, consoantes;
    char texto[100];
  
    // Entrada
    scanf("%d", &n);
  
    for(i = 0; i < n; i++)
    {
        j = 0; 
        letras = 0; 
        vogais = 0; 
        consoantes = 0;
        scanf(" %[^\n]s", &texto);
        while(texto[j] != '\0')
        {
            if(texto[j] == ('a' || 'e' || 'i' || 'o' || 'u'))
            {
                vogais++;
                letras++;
            }
            if(texto[j] == ('A' || 'E' || 'I' || 'O' || 'U'))
            {
                vogais++;
                letras++;
            }
            if(texto[j] == ('b' || 'c' || 'd' || 'f' || 'g' || 'h' || 'j' || 'k' || 'l' || 'm' || 'n' || 'p' || 'q' || 'r' || 's' || 't' || 'v' || 'w' || 'x' || 'y' || 'z'))
            {
                consoantes++;
                letras++;
            }
            if(texto[j] == ('B' || 'C' || 'D' || 'F' || 'G' || 'H' || 'J' || 'K' || 'L' || 'M' || 'N' || 'P' || 'Q' || 'R' || 'S' || 'T' || 'V' || 'W' || 'X' || 'Y' || 'Z'))
            {
                consoantes++;
                letras++;
            }
            j++;
        }
        // Saída
        printf("Letras = %d\n", letras);
        printf("Vogais = %d\n", vogais);
        printf("Consoantes = %d\n", consoantes);
    }
    return 0;
}
