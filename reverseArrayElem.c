/**
    reverse the given array 
    case 1:- input: 1 2 3 4 5 output:-5 4 3 2 1
    case 2:-input: 5 3 7 4 8 2  output:- 2 8 4 7 3 5

*/
#include <stdio.h>

int main() {
    int n;
    printf("how many number do you want:-");
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        printf("enter %d number:- ",i+1);
        scanf("%d",&arr[i]); 
        
    }
    int i=0;
    int j=n-1;
    int temp;
    while(i<j){
        temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
        i++;
        j--;
    }
    i=0;
    while(i<n){
        printf(" %d ",arr[i]);
        i++;
    }
    return 0;
}