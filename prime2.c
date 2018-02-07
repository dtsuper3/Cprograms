main(){
 int a,b,i,flag;
 printf("Enter starting and end numbers:");
 scanf("%d%d",&a,&b);
 for(a=2;a<=b;a++){
        flag=0;
  for(i=2;i<a;i++){
   if(a%i==0){
    flag=1;}
     }
     if(flag==0)
        printf("%d\t",a);
 }

}
