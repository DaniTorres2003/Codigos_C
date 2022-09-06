#include <stdio.h>
#include <string.h>
#include <locale.h>
#include <stdlib.h>
#include <time.h>

void forca (int estado) {
    if (estado == 0) {
        printf (" ____________________");
        printf ("\n|                   |");
        printf ("\n|");
        printf ("\n|");
        printf ("\n|");
        printf ("\n|");
        printf ("\n|");
        printf ("\n|");
        printf ("\n|");
        printf ("\n|");
        printf ("\n_");
    } else if (estado == 1) {
        printf (" ____________________");
        printf ("\n|                  |");
        printf ("\n|                  O");
        printf ("\n|");
        printf ("\n|");
        printf ("\n|");
        printf ("\n|");
        printf ("\n|");
        printf ("\n|");
        printf ("\n|");
        printf ("\n_");
    } else if (estado == 2) {
        printf (" ____________________");
        printf ("\n|                  |");
        printf ("\n|                  O");
        printf ("\n|                  |");
        printf ("\n|");
        printf ("\n|");
        printf ("\n|");
        printf ("\n|");
        printf ("\n|");
        printf ("\n|");
        printf ("\n_");
    } else if (estado == 3) {
        printf (" ____________________");
        printf ("\n|                  |");
        printf ("\n|                  O");
        printf ("\n|                  |-");
        printf ("\n|");
        printf ("\n|");
        printf ("\n|");
        printf ("\n|");
        printf ("\n|");
        printf ("\n|");
        printf ("\n_");
    } else if (estado == 4) {
        printf (" ____________________");
        printf ("\n|                  |");
        printf ("\n|                  O");
        printf ("\n|                 -|-");
        printf ("\n|");
        printf ("\n|");
        printf ("\n|");
        printf ("\n|");
        printf ("\n|");
        printf ("\n|");
        printf ("\n_");
    } else if (estado == 5) {
        printf (" ____________________");
        printf ("\n|                  |");
        printf ("\n|                  O");
        printf ("\n|                 -|-");
        printf ("\n|                   \\");
        printf ("\n|");
        printf ("\n|");
        printf ("\n|");
        printf ("\n|");
        printf ("\n|");
        printf ("\n_");
    } else if (estado == 6) {
        printf (" ____________________");
        printf ("\n|                  |");
        printf ("\n|                  O");
        printf ("\n|                 -|-");
        printf ("\n|                 / \\");
        printf ("\n|");
        printf ("\n|");
        printf ("\n|");
        printf ("\n|");
        printf ("\n|              GAME OVER!");
        printf ("\n_");
    }
}

void menu (int m) {
    setlocale (LC_ALL, "Portuguese");

    if (m == 0) {
        printf ("JOGO DA FORCA v_1.0\n");
        printf ("==== == ===== =====\n\n");
        printf ("ESCOLHA A DIFICULDADE:\n");
        printf ("(1) FÁCIL\n(2) MÉDIO\n(3) DIFÍCIL\n(0) FINALIZAR\n");
    }
}

int main () {

    srand (time (NULL));

    char facil [3][5] = {"gato", "lago", "bola"};
    char medio [3][7] = {"baleia", "antena", "abajur"};
    char dificil [3][9] = {"bandeira", "anaconda", "respeito"};
    char tela [9];
    int i, opc, aux, erros, x; 
    char letra;

    do {
        system ("cls");

        menu (0);
        opc = getch ();
        switch (opc) {
            case '1':
                aux = rand () % 4;
                erros = 0;
                switch (aux) {
                    case 0:
                        strcpy (tela, facil [aux]);

                        for (i = 0; i < strlen (tela); i++) {
                            tela [i] = '_';
                        }

                        while (1) {
                            system ("cls");

                            forca (erros);
                            printf ("\n    ");
                            for (i = 0; i < strlen (tela); i++) {
                                printf ("%c ", tela [i]);
                            }

                            printf ("\n\nDigite uma letra:");
                            scanf (" %c", &letra);

                            x = 1;
                            for (i = 0; i < strlen (tela); i++) {
                                if (letra == facil [aux][i]) {
                                    tela [i] = letra;
                                    x = 0;
                                } 
                            }

                            if (x == 1) {
                                erros++;
                            }

                            if (erros == 6) {
                                system ("cls");
                                forca (erros);
                                printf ("\n    ");
                                for (i = 0; i < strlen (tela); i++) {
                                    printf ("%c ", tela [i]);
                                }
                                printf ("\n");
                                system ("pause");
                                break;
                            }

                            if (strcmp (tela, facil [aux]) == 0) {
                                system ("cls");
                                forca (erros);
                                printf ("\n    ");
                                for (i = 0; i < strlen (tela); i++) {
                                    printf ("%c ", tela [i]);
                                }
                                printf ("\n\n\tVOCÊ VENCEU!\n\tPARABÉNS!\n");
                                system ("pause");
                                break;
                            }
                        }
                        break;
                    case 1:
                        strcpy (tela, facil [aux]);

                        for (i = 0; i < strlen (tela); i++) {
                            tela [i] = '_';
                        }

                        while (1) {
                            system ("cls");

                            forca (erros);
                            printf ("\n    ");
                            for (i = 0; i < strlen (tela); i++) {
                                printf ("%c ", tela [i]);
                            }

                            printf ("\n\nDigite uma letra:");
                            scanf (" %c", &letra);

                            x = 1;
                            for (i = 0; i < strlen (tela); i++) {
                                if (letra == facil [aux][i]) {
                                    tela [i] = letra;
                                    x = 0;
                                } 
                            }

                            if (x == 1) {
                                erros++;
                            }

                            if (erros == 6) {
                                system ("cls");
                                forca (erros);
                                printf ("\n    ");
                                for (i = 0; i < strlen (tela); i++) {
                                    printf ("%c ", tela [i]);
                                }
                                printf ("\n");
                                system ("pause");
                                break;
                            }

                            if (strcmp (tela, facil [aux]) == 0) {
                                system ("cls");
                                forca (erros);
                                printf ("\n    ");
                                for (i = 0; i < strlen (tela); i++) {
                                    printf ("%c ", tela [i]);
                                }
                                printf ("\n\n\tVOCÊ VENCEU!\n\tPARABÉNS!\n");
                                system ("pause");
                                break;
                            }
                        }
                        break;
                    case 2:
                        strcpy (tela, facil [aux]);

                        for (i = 0; i < strlen (tela); i++) {
                            tela [i] = '_';
                        }

                        while (1) {
                            system ("cls");

                            forca (erros);
                            printf ("\n    ");
                            for (i = 0; i < strlen (tela); i++) {
                                printf ("%c ", tela [i]);
                            }

                            printf ("\n\nDigite uma letra:");
                            scanf (" %c", &letra);

                            x = 1;
                            for (i = 0; i < strlen (tela); i++) {
                                if (letra == facil [aux][i]) {
                                    tela [i] = letra;
                                    x = 0;
                                } 
                            }

                            if (x == 1) {
                                erros++;
                            }

                            if (erros == 6) {
                                system ("cls");
                                forca (erros);
                                printf ("\n    ");
                                for (i = 0; i < strlen (tela); i++) {
                                    printf ("%c ", tela [i]);
                                }
                                printf ("\n");
                                system ("pause");
                                break;
                            }

                            if (strcmp (tela, facil [aux]) == 0) {
                                system ("cls");
                                forca (erros);
                                printf ("\n    ");
                                for (i = 0; i < strlen (tela); i++) {
                                    printf ("%c ", tela [i]);
                                }
                                printf ("\n\n\tVOCÊ VENCEU!\n\tPARABÉNS!\n");
                                system ("pause");
                                break;
                            }
                        }
                        break;
                }
                break;
            case '2':
                aux = rand () % 4;
                erros = 0;
                switch (aux) {
                    case 0:
                        strcpy (tela, medio [aux]);

                        for (i = 0; i < strlen (tela); i++) {
                            tela [i] = '_';
                        }

                        while (1) {
                            system ("cls");

                            forca (erros);
                            printf ("\n    ");
                            for (i = 0; i < strlen (tela); i++) {
                                printf ("%c ", tela [i]);
                            }

                            printf ("\n\nDigite uma letra:");
                            scanf (" %c", &letra);

                            x = 1;
                            for (i = 0; i < strlen (tela); i++) {
                                if (letra == medio [aux][i]) {
                                    tela [i] = letra;
                                    x = 0;
                                } 
                            }

                            if (x == 1) {
                                erros++;
                            }

                            if (erros == 6) {
                                system ("cls");
                                forca (erros);
                                printf ("\n    ");
                                for (i = 0; i < strlen (tela); i++) {
                                    printf ("%c ", tela [i]);
                                }
                                printf ("\n");
                                system ("pause");
                                break;
                            }

                            if (strcmp (tela, medio [aux]) == 0) {
                                system ("cls");
                                forca (erros);
                                printf ("\n    ");
                                for (i = 0; i < strlen (tela); i++) {
                                    printf ("%c ", tela [i]);
                                }
                                printf ("\n\n\tVOCÊ VENCEU!\n\tPARABÉNS!\n");
                                system ("pause");
                                break;
                            }
                        }
                        break;
                    case 1:
                        strcpy (tela, medio [aux]);

                        for (i = 0; i < strlen (tela); i++) {
                            tela [i] = '_';
                        }

                        while (1) {
                            system ("cls");

                            forca (erros);
                            printf ("\n    ");
                            for (i = 0; i < strlen (tela); i++) {
                                printf ("%c ", tela [i]);
                            }

                            printf ("\n\nDigite uma letra:");
                            scanf (" %c", &letra);

                            x = 1;
                            for (i = 0; i < strlen (tela); i++) {
                                if (letra == medio [aux][i]) {
                                    tela [i] = letra;
                                    x = 0;
                                } 
                            }

                            if (x == 1) {
                                erros++;
                            }

                            if (erros == 6) {
                                system ("cls");
                                forca (erros);
                                printf ("\n    ");
                                for (i = 0; i < strlen (tela); i++) {
                                    printf ("%c ", tela [i]);
                                }
                                printf ("\n");
                                system ("pause");
                                break;
                            }

                            if (strcmp (tela, medio [aux]) == 0) {
                                system ("cls");
                                forca (erros);
                                printf ("\n    ");
                                for (i = 0; i < strlen (tela); i++) {
                                    printf ("%c ", tela [i]);
                                }
                                printf ("\n\n\tVOCÊ VENCEU!\n\tPARABÉNS!\n");
                                system ("pause");
                                break;
                            }
                        }
                        break;
                    case 2:
                        strcpy (tela, medio [aux]);

                        for (i = 0; i < strlen (tela); i++) {
                            tela [i] = '_';
                        }

                        while (1) {
                            system ("cls");

                            forca (erros);
                            printf ("\n    ");
                            for (i = 0; i < strlen (tela); i++) {
                                printf ("%c ", tela [i]);
                            }

                            printf ("\n\nDigite uma letra:");
                            scanf (" %c", &letra);

                            x = 1;
                            for (i = 0; i < strlen (tela); i++) {
                                if (letra == medio [aux][i]) {
                                    tela [i] = letra;
                                    x = 0;
                                } 
                            }

                            if (x == 1) {
                                erros++;
                            }

                            if (erros == 6) {
                                system ("cls");
                                forca (erros);
                                printf ("\n    ");
                                for (i = 0; i < strlen (tela); i++) {
                                    printf ("%c ", tela [i]);
                                }
                                printf ("\n");
                                system ("pause");
                                break;
                            }

                            if (strcmp (tela, medio [aux]) == 0) {
                                system ("cls");
                                forca (erros);
                                printf ("\n    ");
                                for (i = 0; i < strlen (tela); i++) {
                                    printf ("%c ", tela [i]);
                                }
                                printf ("\n\n\tVOCÊ VENCEU!\n\tPARABÉNS!\n");
                                system ("pause");
                                break;
                            }
                        }
                        break;
                }
                break;
            case '3':
                aux = rand () % 4;
                erros = 0;
                switch (aux) {
                    case 0:
                        strcpy (tela, dificil [aux]);

                        for (i = 0; i < strlen (tela); i++) {
                            tela [i] = '_';
                        }

                        while (1) {
                            system ("cls");

                            forca (erros);
                            printf ("\n    ");
                            for (i = 0; i < strlen (tela); i++) {
                                printf ("%c ", tela [i]);
                            }

                            printf ("\n\nDigite uma letra:");
                            scanf (" %c", &letra);

                            x = 1;
                            for (i = 0; i < strlen (tela); i++) {
                                if (letra == dificil [aux][i]) {
                                    tela [i] = letra;
                                    x = 0;
                                } 
                            }

                            if (x == 1) {
                                erros++;
                            }

                            if (erros == 6) {
                                system ("cls");
                                forca (erros);
                                printf ("\n    ");
                                for (i = 0; i < strlen (tela); i++) {
                                    printf ("%c ", tela [i]);
                                }
                                printf ("\n");
                                system ("pause");
                                break;
                            }

                            if (strcmp (tela, dificil [aux]) == 0) {
                                system ("cls");
                                forca (erros);
                                printf ("\n    ");
                                for (i = 0; i < strlen (tela); i++) {
                                    printf ("%c ", tela [i]);
                                }
                                printf ("\n\n\tVOCÊ VENCEU!\n\tPARABÉNS!\n");
                                system ("pause");
                                break;
                            }
                        }
                        break;
                    case 1:
                        strcpy (tela, dificil [aux]);

                        for (i = 0; i < strlen (tela); i++) {
                            tela [i] = '_';
                        }

                        while (1) {
                            system ("cls");

                            forca (erros);
                            printf ("\n    ");
                            for (i = 0; i < strlen (tela); i++) {
                                printf ("%c ", tela [i]);
                            }

                            printf ("\n\nDigite uma letra:");
                            scanf (" %c", &letra);

                            x = 1;
                            for (i = 0; i < strlen (tela); i++) {
                                if (letra == dificil [aux][i]) {
                                    tela [i] = letra;
                                    x = 0;
                                } 
                            }

                            if (x == 1) {
                                erros++;
                            }

                            if (erros == 6) {
                                system ("cls");
                                forca (erros);
                                printf ("\n    ");
                                for (i = 0; i < strlen (tela); i++) {
                                    printf ("%c ", tela [i]);
                                }
                                printf ("\n");
                                system ("pause");
                                break;
                            }

                            if (strcmp (tela, dificil [aux]) == 0) {
                                system ("cls");
                                forca (erros);
                                printf ("\n    ");
                                for (i = 0; i < strlen (tela); i++) {
                                    printf ("%c ", tela [i]);
                                }
                                printf ("\n\n\tVOCÊ VENCEU!\n\tPARABÉNS!\n");
                                system ("pause");
                                break;
                            }
                        }
                        break;
                    case 2:
                        strcpy (tela, dificil [aux]);

                        for (i = 0; i < strlen (tela); i++) {
                            tela [i] = '_';
                        }

                        while (1) {
                            system ("cls");

                            forca (erros);
                            printf ("\n    ");
                            for (i = 0; i < strlen (tela); i++) {
                                printf ("%c ", tela [i]);
                            }

                            printf ("\n\nDigite uma letra:");
                            scanf (" %c", &letra);

                            x = 1;
                            for (i = 0; i < strlen (tela); i++) {
                                if (letra == dificil [aux][i]) {
                                    tela [i] = letra;
                                    x = 0;
                                } 
                            }

                            if (x == 1) {
                                erros++;
                            }

                            if (erros == 6) {
                                system ("cls");
                                forca (erros);
                                printf ("\n    ");
                                for (i = 0; i < strlen (tela); i++) {
                                    printf ("%c ", tela [i]);
                                }
                                printf ("\n");
                                system ("pause");
                                break;
                            }

                            if (strcmp (tela, dificil [aux]) == 0) {
                                system ("cls");
                                forca (erros);
                                printf ("\n    ");
                                for (i = 0; i < strlen (tela); i++) {
                                    printf ("%c ", tela [i]);
                                }
                                printf ("\n\n\tVOCÊ VENCEU!\n\tPARABÉNS!\n");
                                system ("pause");
                                break;
                            }
                        }
                        break;
                }
                break;
        }
    } while (opc != '0');

    return 0;
}