#include <stdio.h>
#include <locale.h>
#include <math.h>

int main(){
    setlocale(LC_ALL, "Portuguese");

    int opcao = 0;

    do {
        printf("\n---------- MENU PRINCIPAL ----------\n\n");
        printf("1- Resolver equacao do 1 grau.\n");
        printf("2- Resolver equacao do 2 grau.\n");
        printf("3- Sobre o programa.\n");
        printf("4- Sair do programa.\n\n");
        printf("Digite a opcao desejada: ");
        scanf("%d", &opcao);

        if(opcao == 1){
            int a, b;
            float x;

            printf("\n---------- EQUACAO DO 1 GRAU ----------\n\n");
            printf("Formula: ax + b = 0\n\n");
            printf("Digite o valor de A: ");
            scanf("%d", &a);
            printf("Digite o valor de B: ");
            scanf("%d", &b);

            // Casos especiais quando a == 0
            if(a == 0 && b == 0){
                printf("\nQualquer valor de x e solucao (infinitas solucoes).\n");
            }
            else if(a == 0 && b != 0){
                printf("\nNao existe solucao para esses valores.\n");
            }
            // Caso normal
            else if(b == 0){
                printf("\n%dx = 0\n", a);
                printf("x = 0\n");
            }
            else if(b > 0){
                printf("\n%dx + %d = 0\n", a, b);
                printf("%dx = %d\n", a, -b);
                printf("x = %d / %d\n", -b, a);
                x = (float)(-b) / a;
                printf("x = %.2f\n", x);
            }
            else{ // b < 0
                printf("\n%dx + (%d) = 0\n", a, b);
                printf("%dx = %d\n", a, -b);
                printf("x = %d / %d\n", -b, a);
                x = (float)(-b) / a;
                printf("x = %.2f\n", x);
            }
        }

        else if(opcao == 2){
            int a, b, c, delta;
            float x1, x2;

            printf("\n---------- EQUACAO DO 2 GRAU ----------\n\n");
            printf("Formula: ax^2 + bx + c = 0\n\n");
            printf("Digite o valor de A: ");
            scanf("%d", &a);
            printf("Digite o valor de B: ");
            scanf("%d", &b);
            printf("Digite o valor de C: ");
            scanf("%d", &c);

            if(a == 0){
                printf("\nErro: A nao pode ser zero!\n");
            }
            else{
                // Exibicao limpa da equacao (ignora termos zerados)
                printf("\n%dx^2", a);

                if(b > 0)       printf(" + %dx", b);
                else if(b < 0)  printf(" - %dx", -b);

                if(c > 0)       printf(" + %d", c);
                else if(c < 0)  printf(" - %d", -c);

                printf(" = 0\n\n");

                // Calculo do delta com passos
                printf("Delta = b^2 - 4ac\n");
                printf("Delta = (%d)^2 - 4.(%d).(%d)\n", b, a, c);
                printf("Delta = %d - (%d)\n", b*b, 4*a*c);
                delta = b*b - 4*a*c;
                printf("Delta = %d\n\n", delta);

                if(delta > 0){
                    x1 = (-b + sqrt(delta)) / (2.0 * a);
                    x2 = (-b - sqrt(delta)) / (2.0 * a);
                    printf("Duas raizes reais distintas:\n");
                    printf("X1 = %.2f\n", x1);
                    printf("X2 = %.2f\n", x2);
                }
                else if(delta == 0){
                    x1 = (float)(-b) / (2 * a);
                    printf("Uma raiz real (raiz dupla):\n");
                    printf("X = %.2f\n", x1);
                }
                else{
                    printf("Nao existem raizes reais (delta negativo).\n");
                }
            }
        }

        else if(opcao == 3){
            printf("\n---------- SOBRE O PROGRAMA ----------\n\n");
            printf("Programa para resolver equacoes do 1 e 2 grau.\n");
            printf("Desenvolvido em linguagem C.\n");
        }

        else if(opcao == 4){
            printf("\nSaindo... Ate logo!\n");
        }

        else{
            printf("\nOpcao invalida! Digite um numero de 1 a 4.\n");
        }

    } while(opcao != 4);

    return 0;
}
