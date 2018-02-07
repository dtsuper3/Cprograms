//Write a program to multiply two matrices, each of order 3×3

main(){
    int a[3][3],b[3][3],c[3][3],i,j,k;
    printf("Enter element of matrix A:\n");
    getMatrix(a);
    printf("Enter element of matrix B:\n");
    getMatrix(b);
    printf("Matrix A is");
    showMatrix(a);
    printf("\nMatrix B is");
    showMatrix(b);
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
                c[i][j]=0;
            for(k=0;k<3;k++){
                c[i][j]=c[i][j]+a[i][k]*b[k][j];
            }
        }
    }
    printf("\nThe multiplication of Matrix A and B:\n");
    showMatrix(c);
}
void getMatrix(int p[3][3]){
    int i,j;
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
                scanf("%d",&p[i][j]);
        }
    }
}
void showMatrix(int p[3][3]){
    int i,j;
    for(i=0;i<3;i++){
            printf("\n");
        for(j=0;j<3;j++){
            printf("%d\t",p[i][j]);
        }
    }
}
