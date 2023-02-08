#include<stdio.h>
int main()
{
    char str [100],ch;
    int i;
    int count =0;
    printf("Enter a string");
    fgets(str,100,stdin);
    printf("Enter a character to find its occurance");
    scanf("%c",&ch);
    for(i=0; str[i];i++)
    {
        if(str[i]==ch)
        {
            count++;
        }
    }
    printf(" total %c is %d",ch,count);
    return 0;
}
