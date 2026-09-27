/**
case 1: input [4 5 6 3 7 4 8] insert:-3 at position :-5 output:- [4 5 6 3 3 4 8]
                            insert:-1 at position :-1 output:- [1 5 6 3 7 4 8]
case 2: input [4 5 8 1 5 4 2] insert:-9 at position :-7 output:- [4 5 6 3 7 4 9]
                            insert:-5 at position :-0 output:- invalid position
                            insert:-10 at position :-10 output:- invalid position
*/
#include <stdio.h>
#include<stdlib.h>
#define MAX 5
int main() {
    int n,arr[MAX],position,elem;
    printf("enter limit of data length:-");
    scanf("%d",&n);

    printf("\n\nenter value of length time:-");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("enter position where you wnat to change:-");
    scanf("%d",&position);
    if(position>n || position<0){
        printf("not a valid position");
        exit(1);
    }
    printf("enter value of position:-");
    scanf("%d",&elem);

    for(int i=n;i>=position-1;i--){
        arr[i]=arr[i-1];
        // printf("%d",arr[i]);
    }
    n=n+1;
    arr[position-1]=elem;
    for(int i=0;i<n;i++){
        printf("%d",arr[i]);
    }
    
}