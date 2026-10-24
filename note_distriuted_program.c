
/**
case 1:-  amount=545 
          output:-
              500 note =1 
              20 note =2 
              5 note =1 
case 2:-  amount=1000
          output:-
              500 note =2
case 3:-  amount=50
          output:-
              50 note =1
case 4:-  amount=0 ||-ve
          output:-
             invalid amount

*/
#include <stdio.h>

int main() {

    int p,note_500,note_100,note_50,note_20,note_10,coin_5,coin_1;
    printf("enter your amount:-");
    scanf("%d",&p);
    if(p<=0){
        printf("invaild amount");
        return 0;
    }
    while(p>0){
        
        if(p>=500){
            note_500=p/500;
            p=p%500;
            printf("500 note =%d \n",note_500);
        }
        else if(p>=100){
            note_100=p/100;
            p=p%100;
            printf("100 note =%d \n",note_100);
        }
        else if(p>=50){
            note_50=p/50;
            p=p%50;
            printf("50 note =%d \n",note_50);
        }
        if(p>=20){
            note_20=p/20;
            p=p%20;
            printf("20 note =%d \n",note_20);
        }
        if(p>=10){
            note_10=p/10;
            p=p%10;
            printf("10 note =%d \n",note_10);
        }
        if(p>=5){
            coin_5=p/5;
            p=p%5;
            printf("5 coin =%d \n",coin_5);
        }
        if(p>=1){
            coin_1=p/1;
            p=p%1;
            printf("1 coin =%d \n",coin_1);
        }
        
    }
    printf("end program");
    return 0;
}
