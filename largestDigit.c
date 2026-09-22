/** find the largest digit of a number 

    like input:-634824 , output:-8
    input:6742134 , output:-7
    input :74832986349 , output:-9
    */
#include <stdio.h>

int main() {
    int num,largest=0;
    printf("enter number for count length:-");
    scanf("%d",&num);
    int temp=num;
    while(temp>0){
        
        int rem=temp%10;
        if(rem>largest){
            largest=rem;
        }
        temp=temp/10;
    }
    printf("%d",largest);
    return 0;
}