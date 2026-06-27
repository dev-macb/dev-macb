// Declaração de Bibliotecas.
#include <stdio.h>

// Função Principal.
int main()
{
    // Declaração de Variáveis.
    int matricula, num_dependentes;
    double salario_minimo, salario_funcionario, taxa_imposto, imposto_bruto, imposto_liquido, imposto_normal;

    //Entrada
    scanf("%d %lf %d %lf %lf", &matricula, &salario_minimo, &num_dependentes, &salario_funcionario, &taxa_imposto);

    // Imposto Bruto
    if(salario_funcionario > salario_minimo * 12) { imposto_bruto = salario_funcionario * 0.2; }
    else if(salario_funcionario < salario_minimo * 5) { imposto_bruto = 0; }
    else { imposto_bruto = salario_funcionario * 0.08; }

    // Imposto Líquido
    imposto_liquido = imposto_bruto - (300 * num_dependentes);

    // Imposto Normal
    imposto_normal = imposto_liquido - (salario_funcionario * (taxa_imposto / 100));
    
    if(imposto_normal>0)
    {
        printf("MATRICULA = %d\nIMPOSTO BRUTO = %.2lf\nIMPOSTO LIQUIDO = %.2lf\nRESULTADO = %.2lf\nIMPOSTO A PAGAR\n", matricula, imposto_bruto, imposto_liquido, imposto_normal);
    }
    else if(imposto_normal<0)
    {
        printf("MATRICULA = %d\nIMPOSTO BRUTO = %.2lf\nIMPOSTO LIQUIDO = %.2lf\nRESULTADO = %.2lf\nIMPOSTO A RECEBER\n", matricula, imposto_bruto, imposto_liquido, imposto_normal);
    }
    else
    {
        printf("MATRICULA = %d\nIMPOSTO BRUTO = %.2lf\nIMPOSTO LIQUIDO = %.2lf\nRESULTADO = %.2lf\nIMPOSTO QUITADO\n", matricula, imposto_bruto, imposto_liquido, imposto_normal);
    }
    return 0;
}