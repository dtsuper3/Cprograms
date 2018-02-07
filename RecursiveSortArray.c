//Write a recursive function to sort an array
main(){
    int getMaxIndex(int a[],int size);
    void sort(int a[],int size);
    int a[]={100,90,80,70,60,50,40,30,22,11};
    int size=10,i;
    sort(a,size);
    for(i=0;i<size;i++)
        printf("%d",a[i]);
}
void sort(int a[],int size){
    int maxIndex,t;
    if(size>1){
        maxIndex=getMaxIndex(a,size);
        t=a[size-1];
        a[size-1]=a[maxIndex];
        a[maxIndex]=t;
        sort(a,size-1);
    }
}
int getMaxIndex(int a[],int size){
    int max,maxIndex,i;
    max=a[0];
    maxIndex=0;
    for(i=1;i<size;i++)
        if(max<a[i]){
            max=a[i];
            maxIndex=i;
        }
}
