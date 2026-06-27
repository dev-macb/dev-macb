# Importação de módulos
import pandas
from sklearn.preprocessing import StandardScaler, MinMaxScaler


# Carregar os dados do arquivo .csv para um DataFrame
tabela_corridas = pandas.read_csv('./data/corridas.csv')  


# Selecionar apenas as colunas numéricas que serão padronizadas e normalizadas
colunas_numericas = ['MILES']  


# Realizar a padronização
scaler = StandardScaler()
tabela_corridas[colunas_numericas] = scaler.fit_transform(tabela_corridas[colunas_numericas])


# Realizar a normalização
min_max_scaler = MinMaxScaler()
tabela_corridas[colunas_numericas] = min_max_scaler.fit_transform(tabela_corridas[colunas_numericas])


# Impressão da tabela após a padronização e normalização
print('\nDados após a padronização e normalização\n', tabela_corridas)  
