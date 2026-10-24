
#include <stdio.h>

int main() {
    int i,j,k;

    for(i=1;i<=5;i++){
        for(k=1;k<=5-i;k++){
            printf(" ");
        }
        int m=i*2-1;
        for(j=1;j<=m;j++){
            if(j==1 || j==m || i==5){
              printf("*");  
            }
            else{
                printf(" ");
            }
        }
        printf("\n");
    }
    printf("end program");
    return 0;
}
