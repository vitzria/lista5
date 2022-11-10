#include <stdio.h>
#include <stdlib.h>

int main()
{
    int m[4][4];
    int i,j,maior=0,linhamaior,colunamaior;

    for(i=0;i<4;i++){
        for(j=0;j<4;j++){
            printf("Digite o valor %d %d: " , i,j);
            scanf("%d" , &m[i][j]);
            if(m[i][j]>maior){
                maior=m[i][j];
                linhamaior=i;
                colunamaior=j;
            }
        }
    }
    printf("O maior valor esta na linha %d e na coluna %d" , linhamaior,colunamaior);

return 0;
}
