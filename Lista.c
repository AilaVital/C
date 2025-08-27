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

#include <stdio.h>
int main(){
/*int matriz [4][5] = {
{7 , 8, 9, 4},
{5, 10, 1, 0},
{4, 10, 10, 10},
{10, 1, 6, 0},
{2, 8, 4, 0},
};
printf("Imprimindo a matriz: \n");
for (int i = 0; i < 5; i++){
  for (int j = 0; j < 4; j++){
  printf(" %d", matriz[i][j]);
  }
  printf("\n");
}*/
  /*int a,b,c,d;
  printf("Digite o valor de A: ");
  scanf("%d", &a);
  printf("Digite o valor de B: ");
  scanf("%d", &b);
  printf("Digite o valor de C: ");
  scanf("%d", &c);
  printf("Digite o valor de D: ");
  scanf("%d", &d);
  int matriz [2][2] = {
  {a, b},
  {c, d},
  };
  printf("Imprimindo a matriz: \n");
  for (int i = 0; i < 2; i++){
    for (int j = 0; j < 2; j++){
      printf(" %d", matriz[i][j]);
    }
    printf("\n");
  }*/
  /*int num[9];
  for (int i = 0; i < 9; i++){
    printf("Digite o valor %d: ", i+1);
    scanf("%d", &num[i]);
  }
  int matriz [3][3] = {
  {num[0], num[1], num[2]},
  {num[3],num[4],num[5]},
  {num[6],num[7],num[8]},
  };
  for (int i = 0; i < 3; i++){
    for (int j = 0; j < 3; j++){
      printf(" %d", matriz[i][j]);
}
printf("\n");
}
  printf("Os números da diagonal principal são: %d, %d, %d", matriz[0][0], matriz[1][1], matriz[2][2]);
*/
   /*int num[6];
  for (int i = 0; i < 6; i++){
    printf("Digite o valor %d: ", i+1);
    scanf("%d", &num[i]);
  }
  int matriz [2][3] = {
  {num[0], num[1], num[2]},
  {num[3],num[4],num[5]},
  };
  for (int i = 0; i < 2; i++){
    for (int j = 0; j < 3; j++){
      printf(" %d", matriz[i][j]);
}
printf("\n");
}
  int soma = num[0] + num[1] + num[2] + num[3] + num[4] +num[5];
  printf("A soma dos elementos da matriz é: %d", soma);
}*/
   /*int num[9];
  for (int i = 0; i < 9; i++){
    printf("Digite o valor %d: ", i+1);
    scanf("%d", &num[i]);
  }
  int matriz [3][3] = {
  {num[0], num[1], num[2]},
  {num[3],num[4],num[5]},
  {num[6],num[7],num[8]},
  };
  for (int i = 0; i < 3; i++){
    for (int j = 0; j < 3; j++){
      printf(" %d", matriz[i][j]);
}
printf("\n");
}
  if (num[0]>num[1] && num[0]>num[2] && num[0]>num[3] && num[0]>num[4] && num[0]>num[5] && num[0]>num[6] && num[0]>num[7] && num[0]>num[8]){
    printf("O maior número é: %d", num[0]);
  }
  else if (num[1]>num[0] && num[1]>num[2] && num[1]>num[3] && num[1]>num[4] && num[1]>num[5] && num[1]>num[6]  && num[1]>num[7] && num[1]>num[8]){
    printf("O maior número é: %d", num[1]);
  }
    else if (num[2]>num[0] && num[2]>num[1] && num[2]>num[3] && num[2]>num[4] && num[2]>num[5] && num[2]>num[6] && num[2]>num[7] && num[2]>num[8] ){
      printf("O maior número é: %d", num[2]);
    }
      else if (num[3]>num[0] && num[3]>num[1] && num[3]>num[2] && num[3]>num[4] && num[3]>num[5] && num[3]>num[6] && num[3]>num[7] && num[3]>num[8]){
        printf("O maior número é: %d", num[3]);
      }
  else if(num[4]>num[0] && num[4]>num[1] && num[4]>num[2] && num[4]>num[3] && num[4]>num[5] && num[4]>num[6] && num[4]>num[7] && num[4]>num[8]){
    printf("O maior número é: %d", num[4]);
  }
  else if (num[5]>num[0] && num[5]>num[1] && num[5]>num[2] && num[5]>num[3] && num[5]>num[4] && num[5]>num[6] && num[5]>num[7] && num[5]>num[8]){
    printf("O maior número é: %d", num[5]);
  }
  else if (num[6]>num[0] && num[6]>num[1] && num[6]>num[2] && num[6]>num[3] && num[6]>num[4] && num[6]>num[5] && num[6]>num[7] && num[6]>num[8]){
    printf("O maior número é: %d", num[6]);
  }
  else if(num [7]>num[0] && num[7]>num[1] && num[7]>num[2] && num[7]>num[3] && num[7]>num[4] && num[7]>num[5] && num[7]>num[6] && num[7]>num[8]){
    printf("O maior número é: %d", num[7]);
  }
  else if (num[8]>num[0] && num[8]>num[1] && num[8]>num[2] && num[8]>num[3] && num[8]>num[4] && num[8]>num[5] && num[8]>num[6] && num[8]>num[7]){
    printf("O maior número é: %d", num[8]);
  }*/
}
