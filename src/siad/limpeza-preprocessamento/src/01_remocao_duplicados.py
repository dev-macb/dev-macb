# Importação de módulos
import pandas


# Carregar os dados do arquivo .csv para um DataFrame
tabela_corridas = pandas.read_csv('./data/corridas.csv')  


# Remover linhas duplicadas
dados_sem_duplicatas = tabela_corridas.drop_duplicates()  


# Impressão das tabelas
print('\nDados brutos:\n', tabela_corridas)
print('\nDados sem duplicatas:\n', dados_sem_duplicatas)
