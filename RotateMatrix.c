//Program to rotate an array by n positions in C language
#define LEFT 0
#define RIGHT 1
main(){
    int A[8]={1,2,3,4,5,6,7,8};
    display(A,8);
    rotate_array(A,8,RIGHT,3);
    display(A,8);
}
void display(int A[],int N){
    int i;
    printf("\n");
    for(i=0;i<N;i++)
        printf("%d\t",A[i]);
}
void rotate_array(int A[],int N,int dir,int shift_count){
    int i,temp;
    if(dir==RIGHT){
        while(shift_count){
                temp=A[N-1];
            for(i=N-1;i>=1;i--)
                A[i]=A[i-1];
            A[0]=temp;
        shift_count--;
        }
    }
    else{
        while(shift_count){
                temp=A[0];
            for(i=0;i<N-2;i++)
                A[i]=A[i+1];
            A[N-1]=temp;
        shift_count--;
        }
    }
}
