#include <stdio.h>
#include <stdlib.h>

int main()
{
    int m[4][4];
    int i,j;

    for(i=0;i<4;i++){
        for(j=0;j<4;j++){
            printf("Digite o valor %d %d: " , i,j);
            scanf("%d" , &m[i][j]);
        }
    }
    for(i=0;i<4;i++){
        for(j=0;j<4;j++){
            printf("%d " , m[i][j]);
        }
        printf("\n");
    }
    for(i=0;i<4;i++){
        for(j=0;j<4;j++){
            if(j>=i){
                m[i][j]=0;
            }
        }
    }
    printf("\n");
    for(i=0;i<4;i++){
        for(j=0;j<4;j++){
            printf("%d " , m[i][j]);
        }
        printf("\n");
    }

return 0;
}
