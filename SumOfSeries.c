//1+(1+2)+....+(1+2+3+4+...+N)
main(){
    int N,i,j,s=0;
    printf("Enter a number:");
    scanf("%d",&N);
    for(i=1;i<=N;i++){
        for(j=1;j<=i;j++)
            s=s+j;
    }
    printf("Sum of Series is %d",s);
}
