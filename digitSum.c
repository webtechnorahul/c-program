/** sum of digit of a number 

    like input:-1234 , output:-10
    input:6742134 , output:-27
    input :0 , output:-0
    */
#include <stdio.h>

int main() {
    int num,sum=0;
    printf("enter number for count length:-");
    scanf("%d",&num);
    int temp=num;
    while(temp>0){
        sum=sum+(temp%10);
        temp=temp/10;
    }
    printf("%d",sum);
    return 0;
}