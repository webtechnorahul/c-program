/** check prime number or not

    like input:-1234 , output:-not a prime number
    input:59 , output:-prime number
    input :17 , output:-prime number
    prime number is start with 2( 2,3,5,7,11,13,17 ...)
    */
#include <stdio.h>

int main() {
    int num,isPrime=0;
    printf("enter number for count length:-");
    scanf("%d",&num);
    int divide=num/2;
    int i=2;
    
    while(i<divide){
        if(num%i==0){
            isPrime=1;
            break;
        }
        i++;
    }
    if(isPrime==1){
         printf("\n\n not a prime number");
    }
    else{
         printf("\n\nprime number");
    }
    return 0;
}