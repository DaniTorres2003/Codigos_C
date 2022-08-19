#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main (){

// Habilitando a l�ngua portuguesa
setlocale (LC_ALL, "Portuguese");

// Vari�veis
int opc;
float x, y, z, r;
const float pi = 3.14;

VOLTA:;

system ("cls");

// Tela de in�cio
printf ("\nC�LCULO DA �REA DE FIGURAS GEOM�TRICAS\n");
printf ("======================================\n");
printf ("\nSelecione a op��o desejada:\n");
printf ("\n(1) Quadrado\n(2) Ret�ngulo\n(3) Tri�ngulo\n(4) C�rculo\n(0) Finalizar\n ");
opc = getch();
system ("cls");

// Tomada de decis�es
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
                printf ("O valor da �rea deste quadrado � %.2f\n\n", r);
                system ("pause");
            }
        }
        break;
    case '2': // Caso a escolha tenha sido Ret�ngulo
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
            printf ("O valor da �rea deste ret�ngulo � %.2f\n\n", r);
            system ("pause");
        }
        break;
    case '3': // Caso a escolha tenha sido Tri�ngulo
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
            printf ("O valor da �rea deste tri�ngulo � %.2f\n\n", r);
            system ("pause");
        }
        break;
    case '4': // Caso a escolha tenha sido C�rculo
        printf ("Digite o raio: ");
        scanf ("%f", &z);
        system ("cls");

        if (z == 0) {
            printf ("Valor deve ser diferente de zero!\n\n");
            system ("pause");
        } else {
            r = pi *(z * z);
            printf ("O valor da �rea deste quadrado � %.2f\n\n", r);
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
