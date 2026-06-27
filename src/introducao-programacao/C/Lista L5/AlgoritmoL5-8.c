//Declaração de Bibliotecas
#include <stdio.h>
 
// Declaração de Estruturas
struct ficha_aluno
{
    int matricula;
    int dia;
    int mes;
    int ano;
    char nome[201];
};

// Função Principal
int main()
{
    // Declaração de Variáveis
    int i, j, n = 0;
    struct ficha_aluno aluno[30];

    // Entrada 
    while(n < 1 || n > 30) { scanf("%d",&n); }
    for ( i = 0; i <n; i++)
    {
          scanf("%d", &aluno[i].matricula);
          scanf("%d", &aluno[i].dia);
          scanf("%d", &aluno[i].mes);
          scanf("%d", &aluno[i].ano);
          scanf(" %[^\n]s", &aluno[i].nome);
    }
 
    for (i = 0; i < n; i++)
    {
        for (j = i; j < n; j++)
        {
            if (aluno[i].ano < aluno[j].ano)
            {
                aluno[n+1] = aluno[i];
                aluno[i]   = aluno[j];
                aluno[j]   = aluno[n+1];
            }
        }
    }

    for(i = 0; i < n; i++)
    {
        for(j = i; j < n; j++)
        {
            if(aluno[i].ano == aluno[j].ano)
            {
                if(aluno[i].mes < aluno[j].mes)
                {
                     aluno[n+1] = aluno[i];
                     aluno[i]   = aluno[j];
                     aluno[j]   = aluno[n+1];
                }
            }
        }
    }
 
    for ( i = 0; i < n; i++)
    {
        for ( j = i; j < n; j++)
        {
            if (aluno[i].ano == aluno[j].ano)
            {
                if (aluno[i].mes == aluno[j].mes)
                {
                    if (aluno[i].dia < aluno[j].dia)
                    {
                        aluno[n+1] = aluno[i];
                        aluno[i]   = aluno[j];
                        aluno[j]   = aluno[n+1];
                    } 
                }
            }  
        }  
    }
    
    for( i = 0; i < n; i++)
    {
        printf("Matric.: %d Nome: %s Data Nasc: %d/%d/%d\n", aluno[i].matricula, aluno[i].nome, aluno[i].dia, aluno[i].mes, aluno[i].ano);
    }
    return 0;
}