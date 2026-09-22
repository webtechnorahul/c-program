/** print fabonacci series  for n number

like input:-5 , output:- 0 1 1 2 3
    input:9 , output:-0 1 1 2 3 5 8 13 21
    input :2 , output:- 0 1
    */
#include <stdio.h>

int main() {
    int a=0,b=1,n;
    printf("enter number for fabonacci:-");
    scanf("%d",&n);
    int i=0;
    while(i<n){
        if(n==0){
            printf("🤞invalid number");
            break;
        }
        printf("%d ",a);
       int next=a+b;
        a=b;
        b=next;
        i++;
    }
    return 0;
}