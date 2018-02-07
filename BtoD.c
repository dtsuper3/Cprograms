#include<math.h>
main(){
    int n,sum=0,f=0;
    printf("Enter a binary number:");
    n=getBinaryOnly();
    while(n){
        sum=sum+(n%10)*pow(2,f);
        f++;
        n=n/10;
    }
    printf("\nDecimal is %d",sum);
}
int getBinaryOnly(){
    int x,num=0;
    do{
        x=getch();
        if((x>=48&&x<=49)){
            printf("%c",x);
            num=num*10+(x-48);
        }
        if(x==13){
            break;
        }

    }while(1);
    return(num);

}
