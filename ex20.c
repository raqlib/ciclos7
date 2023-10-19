#include <stdio.h>

int main() {

int menu;

do {
    
    printf("1-Imprime Letra \n");
    printf("2-Imprime Numeros \n");
    printf("3-Imprime Outros \n");
    printf("0-Imprime Sair \n");

    printf("Escolha uma das opcoes: ");
    scanf ("%d", &menu);

    switch (menu) {
        case 1:
            printf("Letras\n"); 
            break;
        case 2: 
            printf("Numeros\n"); 
            break;
        case 3: 
            printf("Outros\n"); 
            break;
        case 0: 
            printf("Sair\n"); 
            break;
        default: 
            printf("Escolha uma opcao valida!\n");
            break;
        }

    } while (menu!=0);

    return 0;
}
