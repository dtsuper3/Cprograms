main(){
 int n,i,flag=0;
 printf("Enter a number:");
 scanf("%d",&n);
 for(i=2;i<n;i++){
  if(n%i==0)
   flag=1;
 }
 if(flag==0)
  printf("%d is prime: ",n);

else
 printf("%d is not prime: ",n);
}
