/** check enter number is armstrong or not

    example:-153
    1^3+5^3+3^3=153   ==> 153==153 ==>  armstrong number

    example:-1634
    1^4+6^4+3^4+4^4=1634 ==>1634==1634 ==> armstrong number

    example:-151
    1^3+5^3+1^3=127 ==>127==151 ==> not armstrong number
    
    example:-4523
    4^4+5^4+2^4+3^4=978 ==>978==4523 ==> not armstrong number

    like input:-153 , output:-number is armstrong
    input:1634 , output:-number is armstrong
    input :151 , output:-not armstrong number
    */
#include <stdio.h>
#include<math.h>
int main() {
    int num,total=0,length=0;
    printf("enter number for count length:-");
    scanf("%d",&num);
    int temp=num;
    while(temp>0){
        length++;
        temp=temp/10;
    }
    temp=num;
    while(temp>0){
        total=total+pow((temp%10),length);
        temp=temp/10;
    }
    if(total==num){
        printf("number is armstrong");
    }
    else{
        printf("not armstrong number");
    }
    return 0;
}