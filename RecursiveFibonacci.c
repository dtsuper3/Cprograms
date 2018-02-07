//Recursive program of Nth fibonacci series.
main(){
    int fib(int);
    int n,i;
    printf("Enter Nth term");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
        printf("%d\t",fib(i));
}
int fib(int n){
    if(n==1)
        return(0);
    else if(n==2)
        return(1);
    else
        return(fib(n-1)+fib(n-2));


}
