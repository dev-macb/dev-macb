# Importação de módulos
import pandas
import sqlite3


# Carregar os dados do arquivo .csv para um DataFrame
tabela_corridas = pandas.read_csv('./data/corridas.csv')  


# Configurar banco e transcrever dados do csv
conexao = sqlite3.connect('./data/bancodados.sqlite')
tabela_corridas.to_sql('corridas', conexao, index=False)
conexao.commit()
conexao.close()
