/**
search input from the user
case 1: input [4 5 6 3 7 4 8] searchno.:-3 output:- 3
                            searchno.:-8 output:- 6
case 2: input [4 5 8 1 5 4 2] searchno.:-5 output:- 4
                            searchno.:-8 output:- 2
*/
#include <stdio.h>
#include<stdlib.h>
#define MAX 100
int main() {
    int n,arr[MAX],searchNo;
    printf("enter limit of data length:-");
    scanf("%d",&n);

    printf("\n\nenter value of length time:-");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("enter your search number:-");
    scanf("%d",&searchNo);
    int index=-1;
    for(int i=0;i<n;i++){
        if(arr[i]==searchNo){
            index=i;
        }
    }
    if(index==-1){
        printf("not found your search number");
    }
    else{
        printf("search number at index :- %d",index);
    }
    
    return 0;
}