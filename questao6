#include <stdio.h>
#include <stdlib.h>

int main()
{
    int m[10][10];
    int i,j;

    for(i=0;i<10;i++){
        for(j=0;j<10;j++){
            if(i<j){
                m[i][j]=(2*i)+(7*j);
            }
        }
    }
    for(i=0;i<10;i++){
        for(j=0;j<10;j++){
           if(i==j){
                m[i][j]=(3*(i*i))-1;
            }
        }
    }
    for(i=0;i<10;i++){
        for(j=0;j<10;j++){
            if(i>j){
                m[i][j]=(4*(i*i*i))-(5*(j*j))+1;
            }
        }
    }
    for(i=0;i<10;i++){
        for(j=0;j<10;j++){
            printf("%d " , m[i][j]);
        }
        printf("\n");
    }

return 0;
}
