// Declaração de Bibliotecas.
#include <stdio.h>

// Função Principal.
int main()
{
    // Declaração de Variáveis.
    double nota1, nota2, nota3, media;
    
    // Entrada.
    scanf("%lf %lf %lf", &nota1, &nota2, &nota3);

    // Média Aritimética das notas.
    media = (nota1 + nota2 + nota3) / 3;

    // Verifica se a média é igual ou superior a 6.
    if(media >= 6)
    {
        // Saída - Aprovado.
        printf("MEDIA = %.2lf\n", media);
        printf("APROVADO\n");
    }
    else
    {
        // Saída - Reprovado.
        printf("MEDIA = %.2lf\n", media);
        printf("REPROVADO\n");       
    }

    return 0;
}b