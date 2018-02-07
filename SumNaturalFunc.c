//Write a function to calculate sum of first N natural number.(TNRN,TSRN,TNRS,TSRS)
void SumNatural();
int Sum_Natural();
void Sum__Natural(int);
int Sum___Natural(int);
void main(){
    int a,n,i;
    printf("Sum of Natural number:\n");
    printf("\t\tMenu Option\n");
    printf("\n1.TNRN");
    printf("\n2.TSRN");
    printf("\n3.TNRS");
    printf("\n4.TSRS");
    printf("\nEnter your choice");
    scanf("%d",&i);
    switch(i){
        case 1:
            SumNatural();
            break;
        case 2:
            a=Sum_Natural();
            printf("Sum of Nth natural numbers is %d",a);
            break;
        case 3:
            printf("Enter nth term:");
            scanf("%d",&n);
            Sum__Natural(n);
            break;
        case 4:
            printf("Enter Nth number:");
            scanf("%d",&n);
            a=Sum___Natural(n);
            printf("Sum of Nth Natural number is %d",a);
            break;
        default:
            printf("Please enter valid choice");
            break;

    }
}
void SumNatural(){
    int i,n,sum=0;
    printf("Enter Nth term:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
        sum=sum+i;
    printf("Sum of Nth Natural number is %d",sum);
}
int Sum_Natural(){
    int i,n,sum=0;
    printf("Enter Nth number:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
        sum=sum+i;
    return(sum);
}
void Sum__Natural(int n){
    int i,sum=0;
    for(i=1;i<=n;i++)
        sum=sum+i;
    printf("Sum of Nth natural number is %d",sum);
}
int Sum___Natural(int n){
    int i,sum=0;
    for(i=1;i<=n;i++)
        sum=sum+i;
    return(sum);
}
