//Write a function to calculate factorial of a number.(Takes Something, Returns Something)
main(){
    int a;
    printf("Enter a number:");
    scanf("%d",&a);
    fac(a);
}
void fac(int x){
    int i,p=1;
    for(i=1;i<=x;i++)
        p=p*i;
    printf("The factorial of entered number is %d",p);
}
