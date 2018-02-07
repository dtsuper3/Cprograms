main(){
int n,f;
printf("Enter a positive number:");
scanf("%d",&n);
f=fac(n);
printf("Factorial of %d is %d",n,f);
}
int fac(int p){
    int s;
    if(p==0||p==1)
        return(1);
    else{
        s=p*fac(p-1);
        return(s);
    }
}
