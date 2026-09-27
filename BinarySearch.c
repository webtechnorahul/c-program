/**
In binary search array have distinct and array must be sorted
search input from the user
case 1: input [4 5 6 3 7 4 8] searchno.:-3 output:- 3
                            searchno.:-8 output:- 6
case 2: input [4 5 8 1 5 4 2] searchno.:-5 output:- 4
                            searchno.:-8 output:- 2
*/
#include <stdio.h>
#include<stdlib.h>
#define MAX 5
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
    int low=0,index=-1;
    int high=n-1;
    int mid;

    // sortde function 
     int sorted(int arr[],int n){
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                if(arr[i]>arr[j]){
                    int temp=arr[i];
                    arr[i]=arr[j];
                    arr[j]=temp;
                }
            }
        }
    }
    // end function creatation
    // print array function
    int printArray(int arr[],int n){
        int i=0;
        while(i<n){
            printf("%d",arr[i]);
            i++;
        }
    }
    // function closed
    
    sorted(arr,n);
    printf("\n\nsorted array:-");
    printArray(arr,n);
     printf("\n\n");
    while(low<=high){
         mid=(low+high)/2;
        if(arr[mid]==searchNo){
            index=mid;
            printf("%d %d",arr[mid],mid);
            break;
            
        }
        else if(searchNo<arr[mid]){
            high=mid-1;
            
        }
        else{
            low=mid+1;
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