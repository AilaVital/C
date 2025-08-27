 //Questão 25 

#include <stdio.h>

int main() {
  float fahrenheit, celsius;
  printf("Qual valor em graus fahrenheit voocê deseja converter para graus Celsius?\n");
  scanf("%f", &fahrenheit);
  celsius = (fahrenheit - 32) * 5 / 9;
  printf("O valor em graus Celsius é: %.2f\n", celsius);
  return 0;
}


 
 //Questão 27

#include <stdio.h>

int main() {
 float preco = 0.0, inflacao = 0.0;
printf("Qual o preço do produto?\n");
  scanf("%f", &preco);
  if (preco<100){
    inflacao = ((preco * 0.1) + preco);
  printf("O preço do produto inflacionado é: %.2f\n", inflacao);
    }
  if(preco>=100){
    inflacao = ((preco * 0.2) + preco);
    printf("O preço do produto inflacionado é: %.2f\n", inflacao);
     
  }
} 

//Questão 28

#include <stdio.h>

int main() {
  float valor;
  float opcao1, opcao2, opcao3;
  int opcao;
  int parcelas;
  printf ("Qual o valor gasto no produto?\n");
  scanf("%f", &valor);
  printf("OPÇÂO 1: A vista com 10%% de desconto\n");
  printf("OPÇÂO 2: Em duas vezes (preço da etiqueta)\n");
  printf("OPÇÂO 3: De 3 até 10 vezes com 3%% de juros ao mês (somente para compras acima de R$ 100,00)\n");
  printf("Qual a opção de pagamento?\n");
  scanf("%d", &opcao);
  if (opcao == 1){
    opcao1 = valor - (valor * 0.1);
    printf("O valor a ser pago é: %.2f\n", opcao1);
  }
  if (opcao == 2){
    opcao2 = valor / 2;
    printf("O valor a ser pago será de duas parcelas de: %.2f\n", opcao2);
  }
  if (opcao == 3){
    printf("Quantas parcelas?\n");
    scanf("%d", &parcelas);
    if (parcelas >= 3 & parcelas <= 10){
    opcao3 = valor + (parcelas * 3);
    printf("O valor a ser pago é: %.2f\n", opcao3);
    }
   }   
  } 

 //Questão 34
 
#include <stdio.h>

int main() {
int idade,numero;
    char nome[50],endereco[150];
    printf("Qual seu nome? \n");
    scanf("%s", &nome );
    printf("Qual seu endereço? \n");
    scanf("%s", &endereco);
    printf("Qual sua idade? \n");
    scanf("%d", &idade);
    printf("Qual seu numero? \n");
    scanf("%d", &numero);
    printf("Seu nome é %s, você tem %d anos, mora na rua %s, seu numero é %d", nome,idade,endereco,numero);
    return 0;
  }

// Decrescente

#include <stdio.h>

int main() {
int a,b,c;
  printf("Digite o valor de A: \n");
  scanf("%d", &a);
  printf("Digite o valor de B: \n");
  scanf("%d", &b);
  printf("Digite o valor de C: \n");
  scanf("%d", &c);
  clear();
  if (a > b && a > c){
    printf("O primeiro número em ordem decrescente é: %d \n", a);
    if (b > c){
      printf("O segundo numero é %d \n", b);
      printf("O terceiro numero é %d \n", c);
    } else{
      printf("O segundo numero é %d \n", c);
      printf("O terceiro numero é %d \n", b);
    }
  }
  if (b > a && b > c) {
    printf("O primeiro número em ordem decrescente é: %d \n", b);
    if (a > c){
      printf("O segundo numero é %d \n", a);
      printf("O terceiro numero é %d \n", c);
    } else{
      printf("O segundo numero é %d \n", c);
      printf("O terceiro numero é %d \n", a);
    }
  }
  if (c > a && c > b){
    printf("O primeiro número em ordem decrescente é: %d \n", c);
    if (a > b) {
      printf("O segundo numero é %d \n", a);
      printf("O terceiro numero é %d \n", b);
    } else{
      printf("O segundo numero é %d \n", b);
      printf("O terceiro numero é %d \n", a);
    }
  }


