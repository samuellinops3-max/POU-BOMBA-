#include <stdio.h>
#include <stdlib.h>

int fome = 80, diversao = 80, sono = 80, limpeza = 80, moeda = 200, nivel = 1;

int main() {
    int op;
    printf("=== POU PS3 ===\n");
    while(1) {
        printf("\n      _______\n");
        printf("    /         \\\n");
        printf("   |  O     O  |\n");
        printf("   |     __    |  < POU :)\n");
        printf("   |    (__)   |\n");
        printf("    \\_________/ \n");
        printf("\nFome: %d | Diversao: %d | Sono: %d | Limpeza: %d\n", fome, diversao, sono, limpeza);
        printf("Moedas: %d | Nivel: %d\n", moeda, nivel);
        printf("\n1 - Dar Comida\n");
        printf("2 - Jogar\n");
        printf("3 - Dormir\n");
        printf("4 - Banho\n");
        printf("5 - Falar\n");
        printf("0 - Sair\n");
        printf("Escolha: ");
        scanf("%d", &op);
        if(op==0) break;
        if(op==1){ fome+=40; moeda-=10; printf("POU: NHAM NHAM!\n"); }
        if(op==2){ diversao+=40; moeda+=30; nivel++; printf("POU: UHUUU! +30 moedas!\n"); }
        if(op==3){ sono=100; printf("POU: Zzzzzz...\n"); }
        if(op==4){ limpeza=100; printf("POU: Limpinho!\n"); }
        if(op==5){ printf("POU: Bla bla bla! Te amo!\n"); }
        fome-=5; diversao-=5; sono-=5; limpeza-=5;
        if(fome>100) fome=100;
        if(diversao>100) diversao=100;
        if(sono>100) sono=100;
        if(limpeza>100) limpeza=100;
    }
    return 0;
}