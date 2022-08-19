#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main (){

// Habilitando a língua portuguesa
setlocale (LC_ALL, "Portuguese");

// Variáveis
int opc;
float x, y, z, r;
const float pi = 3.14;

VOLTA:;

system ("cls");

// Tela de início
printf ("\nCÁLCULO DA ÁREA DE FIGURAS GEOMÉTRICAS\n");
printf ("======================================\n");
printf ("\nSelecione a opção desejada:\n");
printf ("\n(1) Quadrado\n(2) Retângulo\n(3) Triângulo\n(4) Círculo\n(0) Finalizar\n ");
opc = getch();
system ("cls");

// Tomada de decisões
switch (opc) {
    case '1': // Caso a escolha tenha sido Quadrado
        printf ("Digite o comprimento: ");
        scanf ("%f", &x);
        printf ("\nDigite a largura: ");
        scanf ("%f", &y);
        system ("cls");

        if (x == 0 || y == 0) {
            printf ("Valores devem ser diferentes de zero!\n\n");
            system ("pause");
        } else {
            if (x != y) {
                printf ("Valores devem ser iguais!\n\n");
                system ("pause");
            } else {
                r = x * y;
                printf ("O valor da área deste quadrado é %.2f\n\n", r);
                system ("pause");
            }
        }
        break;
    case '2': // Caso a escolha tenha sido Retângulo
        printf ("Digite o comprimento: ");
        scanf ("%f", &x);
        printf ("\nDigite a largura: ");
        scanf ("%f", &y);
        system ("cls");

        if (x == 0 || y == 0) {
           printf ("Valores devem ser diferentes de zero!\n\n");
           system ("pause");
        } else {
            r = x * y;
            printf ("O valor da área deste retângulo é %.2f\n\n", r);
            system ("pause");
        }
        break;
    case '3': // Caso a escolha tenha sido Triângulo
        printf ("Digite a base: ");
        scanf ("%f", &x);
        printf ("\nDigite a altura: ");
        scanf ("%f", &y);
        system ("cls");

        if (x == 0 || y == 0) {
           printf ("Valores devem ser diferentes de zero!\n\n");
           system ("pause");
        } else {
            r = (x * y)/ 2;
            printf ("O valor da área deste triângulo é %.2f\n\n", r);
            system ("pause");
        }
        break;
    case '4': // Caso a escolha tenha sido Círculo
        printf ("Digite o raio: ");
        scanf ("%f", &z);
        system ("cls");

        if (z == 0) {
            printf ("Valor deve ser diferente de zero!\n\n");
            system ("pause");
        } else {
            r = pi *(z * z);
            printf ("O valor da área deste quadrado é %.2f\n\n", r);
            system ("pause");
        }
        break;
    case '0': // Caso a escolha tenha sido Finalizar
        goto FIM; // Encerra o programa
    default:
        break;
}

goto VOLTA; // Faz o programa ficar em loop

FIM:;

return 0;
}
