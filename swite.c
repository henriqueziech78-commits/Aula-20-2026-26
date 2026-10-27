#include <stdio.h>

int main() {
    int x;
    const char *canal;

    printf("Digite O numero do canal da TV: ");
    scanf("%d", &x);

    switch (x) { // A variável a ser avaliada
        case 22: // Se o valor for 1
            canal = "globo";
            break; // Interrompe a execução do switch
        case 33: // Se o valor for 2
            canal = "Sbt";
            break;
        case 55:
            canal = "band";
            break;
       
        default: // Equivalente ao "outrocaso", se nenhum caso corresponder
            canal = "Valor invalido";
            break;
    }

    return 0;
}
