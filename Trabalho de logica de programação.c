#include <stdio.h>
#include <math.h>
#include <locale.h>
int main(){
setlocale (LC_ALL, "Portuguese");
    int opcao;

    do {
        printf("\n--------- MENU ---------\n\n");
        printf("1 - Resolver equação 1° grau\n");
        printf("2 - Resolver equação 2° grau\n");
        printf("3 - Sobre o programa\n");
        printf("4 - Sair\n");
        printf("Escolha: ");
        scanf("%d", &opcao);

        if(opcao == 1){//resolvendo equação do primeiro grau
            int a, b;
            float x;

            printf("\nEquação: ax + b = 0\n");

            printf("Digite A: ");
            scanf("%d", &a);
            printf("Digite B: ");
            scanf("%d", &b);

            if(a == 0){
                printf("Não da pra resolver (A = 0)\n");
            } else {

                printf("\nPasso 1:\n");
                printf("%dx + %d = 0\n", a, b);

                printf("\nPasso 2 (passando o B para o outro lado):\n");
                printf("%dx = %d\n", a, -b);

                printf("\nPasso 3 (dividindo pelo A):\n");
                printf("x = %d / %d\n", -b, a);

                x = -b / (float)a;

                printf("\nResultado:\n");
                printf("x = %.2f\n", x);
            }
        }

        else if(opcao == 2){//resolvendo equação do segundo grau
            int a, b, c;
            float delta, x1, x2;

            printf("\nEquação: ax^2 + bx + c = 0\n");

            printf("Digite A: ");
            scanf("%d", &a);
            printf("Digite B: ");
            scanf("%d", &b);
            printf("Digite C: ");
            scanf("%d", &c);

            if(a == 0){
                printf("Não é equação do 2° grau\n");
            } else {

                printf("\nEquação montada:\n");
                printf("%dx^2 + %dx + %d = 0\n", a, b, c);

                printf("\nPasso 1: calcular delta\n");
                printf("delta = b^2 - 4ac\n");
                printf("delta = (%d)^2 - 4*%d*%d\n", b, a, c);
                printf("delta = %d - %d\n", b*b, 4*a*c);

                delta = b*b - 4*a*c;

                printf("delta = %.2f\n", delta);

                if(delta < 0){
                    printf("\nNão tem raiz real\n");
                } else {

                    printf("\nPasso 2: formula de Bhaskara\n");
                    printf("x = (-b +- sqrt(delta)) / (2a)\n");

                    printf("\nSubstituindo valores:\n");
                    printf("x = (%d +- sqrt(%.2f)) / (2*%d)\n", -b, delta, a);

                    x1 = (-b + sqrt(delta)) / (2*a);
                    x2 = (-b - sqrt(delta)) / (2*a);

                    printf("\nResultados:\n");
                    printf("x1 = %.2f\n", x1);
                    printf("x2 = %.2f\n", x2);
                }
            }
        }

        else if(opcao == 3){
            printf("\nPrograma feito em linguagem C para resolver equações mostrando o passo a passo.\n\nDesenvolvido por: Raffael Luis e Cristian Rafael\n");
        }

    } while(opcao != 4);

    printf("Fim do programa\n");

    return 0;
}
