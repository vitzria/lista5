#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
int m[5][5];
int i,j;

   srand(time (NULL));

    for(i=0;i<5;i++){
        for(j=0;j<5;j++){
            m[i][j]= rand()%99;
            if (m[i][j]==m[j][j]){
                m[i][j]= rand()%99;
            }
            printf("%d " , m[i][j]);
        }
        printf("\n");
    }

return 0;
}
