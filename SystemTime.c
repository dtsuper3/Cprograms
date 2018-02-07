//Write a program to print System Date.
#include<windows.h>
void main(){
    SYSTEMTIME stime;
    GetSystemTime(&stime);
    printf("%d / %d / %d",stime.wDay,stime.wMonth,stime.wYear);
}
