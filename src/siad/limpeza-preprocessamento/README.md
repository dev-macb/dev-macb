# Limpeza e Pré-Processamento

## Objetivo

Este repositório contém o código usado para limpar e pré-processar dados para o curso de Sistemas Inteligentes de Apoio à Decisão da UFG. O código é escrito em Python e usa as bibliotecas Pandas e NumPy para manipular os dados.

A limpeza e o pré-processamento de dados são etapas essenciais em qualquer projeto de aprendizado de máquina. Os dados coletados do mundo real geralmente são sujos e inconsistentes, e é necessário limpá-los e pré-processá-los para que possam ser usados por modelos de aprendizado de máquina.


## Requisitos

```bash
pip install pandas numpy sklearn nltk
>>> import nltk
>>> nltk.download('punkt')
>>> nltk.download('stopwords')
```


## Funcionalidades

- Remoção de Dados Duplicados: Identificar e remover registros repetidos em um conjunto de dados, garantindo que cada observação seja única.

- Tratamento de valores ausentes: Lidar com valores ausentes é crucial para evitar viés e problemas na análise. Existem várias abordagens para tratar valores ausentes, como removê-los, preencher com valores médios ou estimados, ou usar técnicas mais avançadas, como imputação de dados.

- Tratamento de outliers: Outliers são valores que se desviam significativamente do padrão dos demais dados. Eles podem ser erros ou representar informações importantes. Dependendo do caso, é possível removê-los, substituí-los ou ajustar seu impacto nos dados.

- Padronização e normalização: Essas técnicas são usadas para escalar os dados e garantir que eles estejam na mesma faixa de valores. A padronização transforma os dados para ter média zero e desvio padrão um, enquanto a normalização ajusta os dados para uma escala específica, geralmente entre 0 e 1.

- Codificação de variáveis categóricas: Dados categóricos, como cores ou categorias, geralmente precisam ser convertidos em formato numérico para serem utilizados em algoritmos de análise. Isso pode ser feito através de técnicas como codificação one-hot, onde cada categoria é representada por uma variável binária.

- Redução de dimensionalidade: Em conjuntos de dados com muitas variáveis, a redução de dimensionalidade pode ser útil para eliminar características redundantes ou irrelevantes. Técnicas como Análise de Componentes Principais (PCA) podem ser aplicadas para extrair as principais informações dos dados, reduzindo sua dimensionalidade.

- Normalização de texto: Ao trabalhar com dados de texto, é comum aplicar técnicas de normalização, como remoção de pontuação, conversão para letras minúsculas, remoção de stopwords (palavras comuns sem relevância) e aplicação de stemming (redução de palavras à sua raiz).
