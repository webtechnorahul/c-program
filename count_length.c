/** count the length of number 

    like input:-1234 , output:-4
    input:6742134 , output:-7
    input :0 , output:-0
    */
#include <stdio.h>

int main() {
    int num,length=0;
    printf("enter number for count length:-");
    scanf("%d",&num);
    
    if(num>=0){
        while(num>0){
        length++;
        num=num/10;
    }
    printf("%d",length);
    }
    else{
        printf("enter positive number");
    }
    return 0;
}