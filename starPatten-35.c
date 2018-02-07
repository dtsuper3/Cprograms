main(){
    int i,k,flag=1;
    for(i=1,k=0;i<=7;i++){
        if(i<4-k)
            printf(" ");
        else{
            if(flag)
                printf("*");
            else
                printf(" ");
            flag=1-flag;
        }
        if(i==4+k){
            k++;
            printf("\n");
            if(i==7)
                break;
            i=0;
            flag=1;
        }
    }
}
