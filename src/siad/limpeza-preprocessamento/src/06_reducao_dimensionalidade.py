# Importação de módulos
import pandas
import sklearn.decomposition


# Carregar os dados do arquivo .csv para um DataFrame
tabela_milhas_corridas = pandas.read_csv('./data/corridas.csv', usecols=['MILES']) 


# Supondo que você tenha um array ou DataFrame chamado 'dados' com várias colunas
pca = sklearn.decomposition.PCA(n_components=1)
dados_reduzidos = pca.fit_transform(tabela_milhas_corridas)
                                    
                                    
# Convertendo o resultado em DataFrame para visualização
tabela_dimensionalizada = pandas.DataFrame(dados_reduzidos, columns=['MILES'])


# Impressão das milhas com redução de dimensionalidade
print(tabela_milhas_corridas)
print(tabela_dimensionalizada)
