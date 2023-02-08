#include<stdio.h>
#include<string.h>
int main()
{
    char a[100],b[100];
    int i=0;
    printf("Enter a string");
    gets(a);
    for(i=0; a[i]!='\0';i++)
    {
        b[i]=a[i];      
    }
    b[i]='\0';
    printf(" Origanal 1=%s\n",a);
    printf("Copy 2=%s\n",b);
    return 0;
}