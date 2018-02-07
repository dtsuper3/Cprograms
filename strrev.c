//Write a program to reverse a string using strrev() function.
#include<string.h>
main(){
    char s[20],p[20];
    puts("Enter a string:");
    gets(s);
    strrev(s);
    printf("Reverse of string:%s",s);
}
