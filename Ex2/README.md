Exercício:

Crie uma lista linear que consiga armazenar um conjunto de 100 nomes
quaisquer, os quais serão salvos de forma aleatória. Feito a estrutura crie as seguintes ações:
*Uma função que consiga identificar replicações na lista, ou seja, nomes iguais. Remova
todas as réplicas sem mover os ”ponteiro“.
*Como você gerenciaria os espaços em branco para novas inserções? Qual seria o custo
dessas novas inserções?

Lógica:
Primeiramente o programa recebe como entrada um arquivo .txt contendo uma lista de nomes
Cada nome é adicionado em um vetor lista linear de 100 posições, onde a primeira e a última posição são manipuladas por dois ponteiros.
Todos nomes são comparados entre si dentro desse processo de adicionar os nomes no vetorLista, se existem nomes iguais eles recebem pos=-1(dado aos nomes iguais),
se não pos=1(dado aos nomes únicos).
Desse jeito o método de remoção verifica e depois manda para o fundo do vetor os nomes iguais que possuem pos=-1, 
e por fim o ponteiro de ultimo muda sua posição o último nome único(com pos=1), assim eliminando os nomes iguais.

esse programa pode ser compilado no dev c++
