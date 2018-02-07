//Write a function to calculate area of a circle.(Takes Something, Returns Something)
#define pi 3.14
main(){
    int r;
    printf("Enter radius of circle:");
    scanf("%d",&r);
    Area(r);
}
void Area(int x){
    float a;
    a=x*x*pi;
    printf("The area of circle is %.2f",a);
}
