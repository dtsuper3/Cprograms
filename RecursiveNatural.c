//Write a recursive function to print first N natural numbers
main(){
    int n,i;
    printf("Enter Nth term:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
        printf("%d\t",nat(i));
}
int nat(int i){
    int s;
    if(i==1)
        return(1);
    else
        return(1+nat(i-1));
    }

