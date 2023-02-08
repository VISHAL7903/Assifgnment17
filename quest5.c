#include<stdio.h>
int main()
{
    char str [100];
    int i;
    int count =0;
    printf("Enter a string");
    fgets(str,100,stdin);
    for(i=0; str[i];i++)
    {
        if(str[i] >='A'&& str[i] <='Z')
        {
            str[i] = str[i] + 32;
        }
        count++;
    }
    printf("%s",str);
    return 0;
}