//Strcmp to sort a string
main(){
    char s[10],c;
    int i,r,j,round;
    printf("Enter a string");
    gets(s);
    for(i=0;i<=10;i++){
        for(j=1;j<=10-round;j++){
            r=strcmp(s[i],s[j]);
            if(r>0){
                strcpy(c,s[i]);
                strcpy(s[i],s[i+1]);
                strcpy(s[i+1],c);
            }
        }
    }
    puts(s);
}
