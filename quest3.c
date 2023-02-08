#include<stdio.h>
int main()
{
    char str [100],ch;
    int i;
    int count =0;
    printf("Enter a string");
    fgets(str,100,stdin);
    for(i=0; str[i];i++)
    {
        if(str[i]=='a'|| str[i]=='e'|| str[i]=='i'|| str[i]=='o'|| str[i]=='u'||
        str[i]=='A'|| str[i]=='E'|| str[i]=='I'|| str[i]=='O'|| str[i]=='U')
        {
            count++;
        }
    }
    printf("Vowel%cis %d",ch,count);
    return 0;
}
