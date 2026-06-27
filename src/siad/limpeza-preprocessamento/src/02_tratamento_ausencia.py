# Importação de módulos
import pandas


# Carregar os dados do arquivo .csv para um DataFrame
tabela_corridas = pandas.read_csv('./data/corridas.csv')  

    
tabela_sem_ausentes = tabela_corridas.dropna()    # Remove todas as linhas com valores ausentes
tabela_preenchidos = tabela_corridas.fillna('X')  # Preenchendo valores ausentes com um valor específico


# Impressão das tabelas
print('\nDados brutos:\n', tabela_corridas)
print('\nDados sem ausentes:\n', tabela_sem_ausentes)
print('\nDados com sem ausentes preenchidos:\n', tabela_preenchidos)
