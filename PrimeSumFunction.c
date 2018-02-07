//Write a program to express a given number as a sum of two prime numbers.
main(){
    int x,i;
    printf("Enter a number:");
    scanf("%d",&x);
    for(i=2;i<=x-i;i=nextPrime(i)){
        if(isPrime(x-i)){
                printf("%d+%d=%d\n",i,x-i,x);
        }
    }
}
int nextPrime(int n){
    do
        n++;
    while(!isPrime(n));
    return(n);
}
int isPrime(int n){
    int j;
    for(j=2;j<n;j++){
            if(n%j==0)
                return(0);
            }
                return(1);
        }

