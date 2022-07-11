#include<stdio.h>
#include<string.h>
int main()
{
    char a[10000];
    int x,i;
    scanf("%[^\n]",a);
    {
        strrev(a);
        printf("%s",a);
    }

}
