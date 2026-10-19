
// print series 1 2 4 7 11 .... n
/*
enter a number term to go:-
10
1 2 4 8 16 32 64 128 256 512 

enter a number term to go:-
5
1 2 4 8 16 

enter a number term to go:-
0
invalid input
*/
#include <stdio.h>

int main() {

    int n,digit=1;
    printf("enter a number term to go:-\n");
    scanf("%d",&n);

    if(n<=0){
        printf("invalid input");
    }
    for(int i=0;i<n;i++){
        printf("%d ",digit);
        digit=digit*2;
        
    }
    return 0;
}
