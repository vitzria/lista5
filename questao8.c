#include <stdio.h>
#include <stdlib.h>

int main()
{
    int m[3][3];
    int i,j;

    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("Digite o valor %d %d: " , i,j);
            scanf("%d" , &m[i][j]);
        }
    }
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("%d " , m[j][i]);
        }
        printf("\n");
    }

return 0;
}
