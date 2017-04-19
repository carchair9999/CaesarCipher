#include<cs50.h>
#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>

int main(int argc, string argv[])
{
    int i,n;
    
    if (argc!=2 && !isdigit(argv[1]))
        {
            printf("Please input only program name and key!!\n");
            return 1;
        }

    int k = atoi(argv[1]);

    string s = GetString();
    
 
    for(i=0, n=strlen(s);n>i;i++)
        {
        if (isalpha (s[i]))
            {
            if (isupper(s[i]))
            {
            int ch=((s[i]-'A'+k)%26)+'A';
            printf("%c", ch);
            }
            if  (islower(s[i]))
            {
            int ch=((s[i]-'a'+k)%26)+'a';
            printf("%c", ch);
            }
            }
        else
            {
             printf("%c", s[i]);    
            }
        }    
        printf("\n");
        
}