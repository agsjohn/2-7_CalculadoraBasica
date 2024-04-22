#include <locale.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

main() {
  setlocale(LC_ALL, "Portuguese");
  int opcao, num1, num2, cal, cont = 0;
  float div, num3, num4;
  do{
    if(cont == 0){
      cont++;
    }
    else{
      printf("\n\n");
    }
    printf("  //-Calculadora-// \n1- Soma \n2- Subtração \n3- Multiplicação \n4- Divisão \n\nEscolha "
           "uma das opções: ");
    scanf("%i", &opcao);
    getchar();
    while (opcao < 0 || opcao > 4) {
      printf("Código inválido, digite novamente: ");
      scanf("%i", &opcao);
      getchar();
    }
    switch (opcao) {
    case 1:
      printf("Digite o primeiro valor: ");
      scanf("%i", &num1);
      getchar();
      printf("Digite o segundo valor: ");
      scanf("%i", &num2);
      getchar();
      cal = num1 + num2;
      printf("\nO resultado foi: %i", cal);
      break;
    case 2:
      printf("Digite o primeiro valor: ");
      scanf("%i", &num1);
      getchar();
      printf("Digite o segundo valor: ");
      scanf("%i", &num2);
      getchar();
      cal = num1 - num2;
      printf("\nO resultado foi: %i", cal);
      break;
    case 3:
      printf("Digite o primeiro valor: ");
      scanf("%i", &num1);
      getchar();
      printf("Digite o segundo valor: ");
      scanf("%i", &num2);
      getchar();
      cal = num1 * num2;
      printf("\nO resultado foi: %i", cal);
      break;
    case 4:
      printf("Digite o primeiro valor: ");
      scanf("%i", &num3);
      getchar();
      printf("Digite o segundo valor: ");
      scanf("%i", &num4);
      getchar();
      while (num4 == 0) {
        printf("Não se pode dividir por zero, digite outro número: ");
        scanf("%i", &num4);
      }
      div = num3 / num4;
      printf("\nO resultado foi: %f", div);
      break;
    }
  }while(opcao != 0);
  printf("\n");
  printf("Finalidando programa");
  getchar();
}