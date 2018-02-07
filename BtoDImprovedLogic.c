int BtoD(char s[]);
main(){
    printf("%d",BtoD("11111111111111111111"));

}
int BtoD(char s[]){
    int i,d=0;
    for(i=0;s[i];i++){
        if(s[i]=='0')
            d=d*2+0;
        else
            d=d*2+1;
    }
    return(d);
}
