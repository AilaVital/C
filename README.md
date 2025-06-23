


# Caderno virtual - JavaScript
Boas vindas! Este é seu caderno virtual. Aqui você irá aprender os conceitos basicos da linguagem de javascript. 


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
- Comando de saída;
- Tipos de variáveis;
- Especificadores
- Comando de entrada
- Diretivas de Pré-processador
- Operadores
- Estrutura condicional;
- Estruturas de Repetição;
- Matrizes e Vetores.

A qual abordaremos cada um detalhadamente...

## Comando de Saída 
Basicamente os Comandos de saída servem para imprimir/mostrar algo no console(interface que permite a interação com um programa). Para você imprimir algo no console você deve utilizar o comando printf("Texto qualquer").

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

## Especificadores de formatação

Os especificadores como o próprio nome já sugere, serve para especificar o tipo de uma váriavel em um comando de entrada ou saída.

| Dígito    |               Descrição              |  variável| 
|-----------|--------------------------------------|----------|
| %d  ou  %i| Números inteiros em base decimal                   | int   |
|     %x    | Números inteiros em base hexadecimal               | int   |
|     %f    | Números em ponto flutuante (com casas decimais)    | float |
|     %e    | Números em notação científica (com casas decimais) | float |
|     %c    | Caracteres alfanuméricos(letra)                    | char  |
|     %s    | Sequência de caracteres alfanuméricos(texto)       | char  |
|    %lf    | Números reais em computadores (bytes)              | double|

 Exemplo de aplicação de **variáveis** & **Especificadores** em comando de saída

 ```c
#include <stdio.h>

int main(){

int ano = 1972;
char maldicao[500] = "Hello linguagem C";

printf("%s \n",maldicao);
printf("No ano de %d foi criada a linguagem C!\n",ano);
return 0;
}
```
Veja que eu dividi o código em 4 partes a primeira inclui a biblioteca de entrada e saída, em seguida criei minha função base, na 3° etapa declarei minhas variaveis e por fim, etapa 4 utilizei comandos de saída com meus especificadores para determinar o lugar em que eu queria colocar as minhas variáveis e sinalizei qual variavel ia ocupar aquela posição do especificador.


