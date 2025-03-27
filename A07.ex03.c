#include <stdio.h>
int main(){
    char letra;
    int batata, hamburguer, suco, combo, total;
    batata = 0;
    hamburguer = 0;
    suco = 0;
    combo = 0;
    printf("Cardápio da lanchonete:\n- (A)Batata R$10,00\n- (B)Hambúrguer R$15,00\n- (C)Suco R$9,00\n- (D)Combo R$30,00\nPara fazer seu pedido digite a letra respectiva ao pedido\n");
    printf("(Digite E para finalizar seu pedido):");
    letra = getchar();
    getchar ();
    
    while(letra!='E'){
        switch(letra){
        case 'A':
        batata ++;
        break;
        case'B':
        hamburguer ++;
        break;
        case'C':
        suco ++; 
        break;
        case'D':
        combo ++;
        break;
        default:
        printf("Não encontrado!");
        break;
        }
    
      printf("Cardápio da lanchonete:n- (A)Batata R$10,00\n- (B)Hambúrguer R$15,00\n- (C)Suco R$9,00\n- (D) Combo R$30,00\nPara fazer seu pedido digite a letra respectiva ao pedido \n:");
    
      printf("(Digite E para finalizar seu pedido): ");
      letra = getchar ();
      getchar();
}
    float valor = batata * 10 + hamburguer * 15 + suco * 9 + combo * 30;
    total = batata + hamburguer + suco + combo;
    
    printf("\nSuco: %d vendidos \nBatata: %d vendidos\nHambürguer: %d vendidos\nCombo: %d vendidos\n---------------\nTotal: %d itens\nValor total: R$%.2f", suco, batata, hamburguer, combo, total, valor);
    return 0;
}