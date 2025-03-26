#include <stdio.h>

 int main(){
     
     int modo, lavar, enxaguar, secar;
     lavar = 0;
     enxaguar = 0;
     secar = 0;
     
     printf("Digite 1 para lavar, enxaguar e secar\nDigite 2 para enxaguar e secar\nDigite 3 para apenas secar\nDigite o número que deseja (Ou digite 4 para encerrar a máquina): ");
     scanf("%d", &modo);
     
     while(modo < 4){
         switch (modo){
             case 1:
              lavar++;
              printf(" \nLavou!\n");
             case 2:
              enxaguar++;
              printf(" \nEnxaguou!\n");
             case 3:
              secar++;
              printf(" \nSecou!\n");
 
         }
         printf("\nDigite 1 para lavar, enxaguar e secar\nDigite 2 para enxaguar e secar\nDigite 3 para apenas secar\nDigite o número que deseja (Ou digite 4 para encerrar a máquina): ");
             scanf("%d", &modo);
     }
     printf("\nA máquina lavou %d vezes, enxaguou %d vezes e secou %d vezes as suas roupas!", lavar, enxaguar, secar);
    
     
     return 0;
 }