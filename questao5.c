#include <stdio.h>
#include <stdlib.h>

int main()
{
    int m[2][2];
    int i,j,x,linhax,colunax;

    for(i=0;i<2;i++){
        for(j=0;j<2;j++){
            printf("Digite o valor %d %d: " , i , j);
            scanf("%d" , &m[i][j]);
        }
    }
    printf("Digite um valor x: ");
    scanf("%d" , &x);

    for(i=0;i<2;i++){
        for(j=0;j<2;j++){
                if (m[i][j]==x){
                    m[i][j]=x;
                    linhax=i;
                    colunax=j;
                }
        }
    }
    printf("O valor x esta na linha %d e na coluna %d" , linhax, colunax);


return 0;
}
