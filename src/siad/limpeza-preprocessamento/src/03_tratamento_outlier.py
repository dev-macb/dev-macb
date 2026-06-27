# Importação de módulos
import numpy
import pandas


def calcular_outliers_iqr(dados, limiar=1.5):
    quartil_1 = numpy.percentile(dados, 25)
    quartil_3 = numpy.percentile(dados, 75)
    iqr = quartil_3 - quartil_1
    limite_superior = quartil_3 + (limiar * iqr)
    limite_inferior = quartil_1 - (limiar * iqr)

    outliers = [x for x in dados if x > limite_superior or x < limite_inferior]
    return outliers


def calcular_outliers_desvio_padrao(dados):
    media = numpy.mean(dados)
    desvio_padrao = numpy.std(dados)
    limite_superior = media + (3 * desvio_padrao)
    limite_inferior = media - (3 * desvio_padrao)

    outliers = [x for x in dados if x > limite_superior or x < limite_inferior]
    return outliers


# Carregar os dados do arquivo .csv para um DataFrame
tabela_corridas = pandas.read_csv('./data/corridas.csv')  


# Converter tabela para lista
lista_milhas = tabela_corridas['MILES'].values.tolist()  


# Impressão dos outliers
print('\nOutliers por IQR:\n', calcular_outliers_iqr(lista_milhas))
print('\nOutliers por desvio padrao:\n', calcular_outliers_desvio_padrao(lista_milhas))
