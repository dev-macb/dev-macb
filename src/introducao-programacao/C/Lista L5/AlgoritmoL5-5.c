//Declaração de Bibliotecas
#include <stdio.h>

// Declaração de Estruturas
struct inf_aluno
{
    char nome[501];
    int cod_curso;
    int credito;
};
 
struct inf_curso
{
    int codigo_curso;
    double valor_credito;
    char nome_curso[101];
};
 
// Função Principal
int main()
{
    // Declaração de Variáveis
    double mensalidade;
    struct inf_curso info_curso[30];
    struct inf_aluno info_aluno[999];
    int i, j, m = 0, n = 0, auxiliar;
    
    // Entrada
    scanf("%d",&n);
    for ( i = 0; i < n; i++)
    {
        scanf("%d", &info_curso[i].codigo_curso);
        scanf("%lf", &info_curso[i].valor_credito);
        scanf(" %[^\n]s", &info_curso[i].nome_curso);
    }
    while (m < 1 || m > 1000) { scanf("%d",&m); }
    for ( i = 0; i <m ; i++)
    {
        scanf(" %[^\n]s", &info_aluno[i].nome);
        scanf("%d", &info_aluno[i].cod_curso);
        scanf("%d", &info_aluno[i].credito);
    }
    
    for ( i = 0; i < m; i++)
    {   
        printf("Aluno(a): %s", info_aluno[i].nome);
        for (j = 0; j < n; j++)
        {
            if (info_aluno[i].cod_curso == info_curso[j].codigo_curso)
            {
                printf(" Curso: %s", info_curso[j].nome_curso);
                auxiliar = j;
            }
        }
        mensalidade = info_aluno[i].credito * info_curso[auxiliar].valor_credito;
        printf(" Num. Creditos: %d", info_aluno[i].credito);
        printf(" Valor Credito: %.2lf", info_curso[auxiliar].valor_credito);
        printf(" Mensalidade: %.2lf\n", mensalidade);
    }
    return 0;
}
