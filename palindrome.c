/** find palindrome the number

    like input:-1234 
        process:1234==>4321   if(1234==4321) =>palindrome number
                            else not palindrome number
    output:-not palindrome number


    input:121  reverse 121 => 121==121, output:-palindrome number
    */
#include <stdio.h>
int main() {
    int num,reverse=0;
    
    printf("enter number for reverse:-");
    scanf("%d",&num);
    int temp=num;
    while(temp>0){
        reverse=reverse*10+(temp%10);
        temp=temp/10;
    }
    if(reverse==num){
        printf("palindrome number");
    }
    else
    printf("not a palindrome number");
    return 0;
}