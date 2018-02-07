//Write a program to calculate sum of all even numbers and sum of all odd numbers. Numbers are entered through keyboard and stored in an array.
main(){
    int a[10],i,j,sum=0;
    printf("Enter even and odd numbers:");
    for(i=0;i<=9;i++){
        scanf("%d",&a[i]);
        sum=sum+a[i];
    }
    printf("\nSum of even and odd numbers:%d",sum);
}
