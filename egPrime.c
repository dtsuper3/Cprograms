main(){
    int x,i;
    printf("Enter a number:");
    scanf("%d",&x);
    printf("Prime factor of %d :\n",x);
    for(i=2;x>1;i++){
    while(x%i==0){
        printf("%d ",i);
        x=x/i;
    }
 }
}
