//Rotate alphabets
main(){
    int i,t,n,j=97;
    printf("Enter rotate value by ");
    scanf("%d",&n);
    for(i=97;i<=122-n;i++){
        printf("\n%c\t%c",i,i+n);
    }
    for(i=123-n;i<=122;i++){
        printf("\n%c\t%c",i,j);
        j++;
    }
}
