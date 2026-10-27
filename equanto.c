#include <stdio.h>

int main() {
    int x, soma = 0;

  printf ("//jogo de advinhançao de números\n");
  printf("// acerte o número para sair e receber seu premio\n");

    printf("Digite um numero: ");
    scanf("%d", &x);

    //numero a ser adivinhado

    while (x != 26) {
        soma = soma + x;
        printf("Digite outro numero: ");
        scanf("%d", &x);
    }
     
    printf("voce acertou ira receber 100 reais = %d\n", soma);

    return 0;
}
