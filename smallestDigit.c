/** find the smallest digit of a number 

    like input:-634824 , output:-2
    input:6742134 , output:-1
    input :74832949 , output:-2
    */
#include <stdio.h>

int main() {
    int num,smallest=9;
    printf("enter number for count length:-");
    scanf("%d",&num);
    int temp=num;
    while(temp>0){
        
        int rem=temp%10;
        
        if(rem<smallest){
            smallest=rem;
        }
        temp=temp/10;
    }
    printf("%d",smallest);
    return 0;
}