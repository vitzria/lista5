#include <stdio.h>
#include <stdlib.h>

int main()
{
    int m[5][5];
    int i,j;

    for(i=0;i<5;i++){
        for(j=0;j<5;j++){
            if(i==j){
                m[i][j]=1;
            }
            else{
                m[i][j]=0;
            }
        }
    }
    for(i=0;i<5;i++){
        for(j=0;j<5;j++){
        printf("%d " , m[i][j]);
        }
        printf("\n");
    }

return 0;
}
