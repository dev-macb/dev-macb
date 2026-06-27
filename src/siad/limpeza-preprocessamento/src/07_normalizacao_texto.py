# Importação de módulos
import re
import nltk
import pandas
from nltk.corpus import stopwords
from nltk.stem import PorterStemmer


def normalizar_string(texto):
    # Remove pontuação e caracteres especiais e converte o texto para minúsculas
    texto_alfabetico = re.sub('[^a-zA-Z]', ' ', texto)
    texto_minusculas = texto_alfabetico.lower()

    # Divide o texto em uma lista de palavras, carrega as stopwords em português e remove as stopwords
    palavras = nltk.word_tokenize(texto_minusculas)
    stopwords_pt = set(stopwords.words('portuguese'))
    palavras_sem_stopwords = [word for word in palavras if word not in stopwords_pt]

    # Aplica stemming às palavras e reconstrói o texto com as palavras processadas
    stemmer = PorterStemmer()
    palavras_stemmed = [stemmer.stem(word) for word in palavras_sem_stopwords]
    texto_final = ' '.join(palavras_stemmed)

    return texto_final


# Carregar os dados do arquivo .csv para um DataFrame
tabela_parada_corridas = pandas.read_csv('./data/corridas.csv', usecols=['STOP']) 


# Converter tabela para lista
lista_milhas = tabela_parada_corridas['STOP'].values.tolist()  


# Impressão das paradas com a normalização do texto
for x in lista_milhas:
    print(normalizar_string(x))
