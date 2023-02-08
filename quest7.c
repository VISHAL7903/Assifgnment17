#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
    char  a[100];
    int i=0, alphabet=0, digit=0, special_c=0;
    printf("Enter a string");
    gets(a);
    while(a[i]!='\0')
    {
        if(a[i]>='A'&& a[i]<='Z'|| a[i]>='a'&& a[i]<='z')
        {
            alphabet++;
        }
        else if(a[i]>='0'&& a[i]<='9')
        {
            digit++;
        }
        else 
        {
            special_c ++;
        }
        i++;
        
    }
    printf("Alphabet %d \n",alphabet);
    printf("Digit %d \n",digit);
    printf("Special %d \n",special_c);
    return 0;
}