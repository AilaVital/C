


# Linguagem em C


## Um pouco sobre História   
A linguagem C é uma linguagem de programação de nível intermediário, estruturada e procedural, criada por Dennis Ritchie na AT&T Bell Labs. É conhecida por sua eficiência, flexibilidade e capacidade de controlar detalhes de hardware, sendo amplamente utilizada para o desenvolvimento de sistemas operacionais e em áreas que exigem alto desempenho. 


<div align="center">
   
<img src="https://i.pinimg.com/736x/66/07/a8/6607a8f75cf52a183e9c56693793d9ee.jpg" width="500" height="700">

Dennis Ritchie

</div align="center">

Essa linguagem foi criada  em 1972 para ser usada no desenvolvimento do sistema operacional Unix, que era escrito em linguagem Assembly, A equipe do Unix precisava de uma linguagem que oferecesse o controle de baixo nível do Assembly, mas com a facilidade e a produtividade de uma linguagem de alto nível. A intenção era ter uma linguagem mais fácil e eficiente para escrever o código do sistema operacional, tornando-o mais portável e menos propenso a erros. A linguagem C foi desenvolvida para preencher essa lacuna, combinando a capacidade de manipular diretamente a memória e o hardware com a estrutura e a legibilidade de uma linguagem de alto nível. 

## Entendendo a Linguagem
Como C é uma linguagem estruturada, ela possui um padrão em seus codigos padrão esse conhecido como rotinas, rotinas são basicamente uma sequencia de passos a ser seguidos (algoritmo). Dentro de uma rotina podemos ainda adicionar subrotinas para aprimorar o nosso código.

## Sintaxe básica
Para começar qualquer código em linguagem c, você segue a seguinte estrutura:
```c
#include <stdio.h>
int main(){
/* seu código*/
return 0 
}

```
onde:

**#include:** serve para adicionar/incluir a biblioteca <stdio.h>.

**<stdio.h>:** É uma biblioteca para permitir que o código rode dados de entrada e saída.

**int main():** Função base do algoritmo.

**/*** ***/:** Comentários.

**return 0:** indica que o programa foi executado com sucesso e sem erros.

OBS: Em versões mais antigas da linguagem a ausência do return poderia levar a um bug no algoritmo. Em versões mais atuais, a ausência não interfere muito, pois o algoritmo ja interpreta como return = 0, poŕem faz parte das boas práticas de programação colocarmos o return 0 na estrutura do nosso código.

## *Estrutura de dados do javaScript*

Para programarmos em c é necessário apredermos sobre as propriedades que esta linguagem possui. Entre eles podemos citar:
- dado de saída;
- tipos de variáveis;
- Especificadores
- Dado de entrada
- Operadores
- Estrutura condicional;
- Estruturas de Repetição;
- Matrizes e Vetores.

A qual abordaremos cada um detalhadamente...

## Dado de Saída 
Basicamente os dados de saída servem para imprimir/mostrar algo no console(interface que permite a interação com um programa). Para você imprimir algo no console você deve utilizar o comando printf("Texto qualquer").

Exemplo:

```c
#include <stdio.h>

int main(){
printf("Hello Word! \n");
printf("Me livrei da maldição");
return 0;
}
```
OBS 1: \n serve para quebrar o texto, para seguir para próxima linha.

OBS 2: Erros comuns que ocorrem é você se esquecer do ponto e vírgula (;). 

**Dica:** Deu erro no seu código? não se preocupe, verifique se não se esqueceu de nenhum ponto e vírgula (;).

## Variáveis

Variaveis como o próprio nome já sugere é um valor atribuido a algo, ficou confuso? sim? Então vamos imaginar a seguinte situação: Uma estante

<img src="https://i.pinimg.com/564x/fe/8c/c3/fe8cc38a002579a0932c0bf541293c9c.jpg" width="510">

Essa estante é a memória do computador e cada quadradinho que a compõe é considerado uma variável. Variáveis tem diversas funções e finalidades e pode representar as mais variadas coisas...

Em C existe 4 tipos de variaveis inteiro, caracter, pontos flutuantes e ponto flutuante com precisão dupla.

### Inteiro - Int

Usamos variáveis do tipo inteiro quando queremos trabalhar com números.

### caracter - char

Usamos para trabalhar com uma letra ou uma sequência de letras, podendo ser uma palavra, frase ou até mesmo um texto(curto).

### Ponto flutuante - float

Apesar do nome soar um pouco estranho, ponto flutuante não é nada mais que números decimais.

### Ponto flutuante precisão dupla - double

Usamos double em algoritmos mais robusto quando por exemplo, utilizamos raiz quadradas, exponenciação ou até mesmo logaritmos



   




