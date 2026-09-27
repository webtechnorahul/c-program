/**
    remove duplicate element from an array

case 1: input [1 2 2 2 2 4] output:- [1 2 4]
        input [1 1 2 2 3 3] output:- [1 2 3]
case 2: input [1 1 1 1] output:- [1]
        input [1 2 3 4] output:- [1 2 3 4]
        input [1 1 1 2 2 3 3 5 4 2 2 1 1 5] output:- [1 2 3 5 4]
*/
#include <stdio.h>
#include<stdlib.h>
#define MAX 100
int main() {
    int n,arr[MAX],position,elem;
    printf("enter limit of data length:-");
    scanf("%d",&n);

    printf("\n\nenter value of length time:-");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("\n\narray is:-\n\n");
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;){
            if(arr[i]==arr[j]){
                for(int k=j;k<n-1;k++){
                   arr[k]=arr[k+1]; 
                    printf("index,value  k:-%d %d ",arr[k],k);
                }
                n=n-1;
                printf("\n\narr elem:-%d %d ",j,n);
                
                j=i+1;
            }
            else{
                j++;
            }
            
        }
        
    }
    printf("%d",n);
    printf("\n\nremove duplicate element:-\n\n");
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
}