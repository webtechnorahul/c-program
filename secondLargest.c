/**
find the second largest number in an array;
case:-   input :6,9,3,5,8,9,8 output:-8
        input:-7 5 7 3 2 6 9 output:-7

*/
#include <stdio.h>

int main() {
    int n,sec_largest=0 ,first=0;
    printf("how many number do you want:-");
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        printf("enter %d number:- ",i+1);
        scanf("%d",&arr[i]); 
       
    }
    for(int i=0;i<n;i++){
         if(first<arr[i]){
            sec_largest=first;
            first=arr[i];
            
        }
        else if(sec_largest<arr[i] && first!=arr[i]){
            sec_largest=arr[i];
            
        }
    }

    printf("second largest number:- %d",sec_largest);
    return 0;
}