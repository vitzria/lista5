#include <stdio.h>
#include <stdlib.h>

int main()
{
    int m[4][4];
    int i,j,contam=0;

    for (i=0;i<4;i++){
        for(j=0;j<4;j++){
            printf("Digite o valor de m[%d][%d]: " , i , j);
            scanf("%d" , &m[i][j]);
        }
    }
    for(i=0;i<4;i++){
        for(j=0;j<4;j++){
            if(m[i][j]>10){
            contam++;
            }
        }
    }
    printf("\n existem %d valores maior que 10" , contam);

return 0;
}
