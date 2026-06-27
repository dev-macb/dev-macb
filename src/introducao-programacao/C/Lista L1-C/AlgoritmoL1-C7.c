// Declaração de Bibliotecas.
#include <stdio.h>

// Função Principal.
int main()
{
    // Declaração de Variáveis.
    unsigned int matricula, presenca;
    double p1, p2, p3, p4, p5, p6, p7, p8, l1, l2, l3, l4, l5, t, nf, mp, ml;

    while(1)
    {
        // Entrada
        scanf("%u %lf %lf %lf %lf %lf %lf %lf %lf %lf %lf %lf %lf %lf %lf %u", &matricula, &p1, &p2, &p3, &p4, &p5, &p6, &p7, &p8, &l1, &l2, &l3, &l4, &l5, &t, &presenca);
        if(p1, p2, p3, p4, p5, p6, p7, p8, l1, l2, l3, l4, l5, t, presenca == -1)
        {
            break;
        }
        else
        {
            mp = (p1 + p2 + p3 + p4 + p5 + p6 + p7 + p8) / 8;  // Média das provas
            ml = (l1 + l2 + l3 + l4 + l5) / 5;  // Média das listas
            nf = (mp * 0.7) + (ml * 0.15) + (t * 0.15);  // Nota Final
            
            if(presenca >= 96)
            {
                if(nf >= 6)
                {
                    printf("Matricula:  %u, Nota Final:  %.2lf, Situacao Final:  APROVADO\n", matricula, nf);
                }
                else
                {
                    printf("Matricula:  %u, Nota Final:  %.2lf, Situacao Final:  REPROVADO POR NOTA\n", matricula, nf);
                }
            }
            else
            {
                if(nf >= 6)
                {
                    printf("Matricula:  %u, Nota Final:  %.2lf, Situacao Final:  REPROVADO POR FREQUENCIA\n", matricula, nf);
                }
                else
                {
                    printf("Matricula:  %u, Nota Final:  %.2lf, Situacao Final:  REPROVADO POR NOTA E POR FREQUENCIA\n", matricula, nf);
                }   
            } 
        }
    }
    return 0;
}