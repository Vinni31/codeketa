#include<stdio.h>
int main()

{
    char n;
    scanf("%s",&n);
    if ((n>='a'&&n<='z')||(n>='A'&&n<='Z'))
    {
        printf("alphabet");
        
    }
        
    else
    {
        printf("No");
        
    }
}
