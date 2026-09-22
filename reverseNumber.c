/** reverse of a number

    like input:-1234 , output:-4321
    input:6742134 , output:-4312476
    input :0 , output:-0
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
    printf("%d",reverse);
    return 0;
}