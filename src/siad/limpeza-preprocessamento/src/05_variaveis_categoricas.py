# Importação de módulos
import pandas


# Carregar os dados do arquivo .csv para um DataFrame
tabela_corridas = pandas.read_csv('./data/corridas.csv') 


# Média das milhas percorridas
media_milhas = int(tabela_corridas['MILES'].mean())


# Maior valor de milha percorrida
milhas_maximas = int(tabela_corridas['MILES'].max())


# Menor valor de milha percorrida
milhas_minimas = int(tabela_corridas['MILES'].min())


# Supondo que você tenha um DataFrame chamado 'dados' com uma coluna categórica chamada 'categoria'
dados_codificados = pandas.get_dummies(tabela_corridas, columns=['CATEGORY'])

colunas_categoria = [coluna for coluna in dados_codificados.columns if coluna.startswith('CATEGORY_')]
contador_categorias = dados_codificados[colunas_categoria].sum()


print('Média das milhas percorridas:', media_milhas)
print('Maior milha percorrida:', media_milhas)
print('Menor milha percorrida:', media_milhas)
print('Milhas Percorridas Máximas:')
print(contador_categorias)
