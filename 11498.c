#include<stdio.h>
int main()
{
    long long int t,a,b,c,d,i;
    while(scanf("%lld",&t)!=EOF)
    {
        if(t==0)
        {
            break;
        }

        scanf("%lld%lld",&a,&b);
        for(i=0; i<t; i++)
        {
            scanf("%lld%lld",&c,&d);
            if(c>a && d>b)
            {
                printf("NE\n");
            }
            else if(c>a && d<b)
            {
                printf("SE\n");
            }
            else if(c<a && d>b)
            {
                printf("NO\n");
            }
            else if(c<a && d<b)
            {
                printf("SO\n");
            }
            else
            {
                printf("divisa\n");
            }
        }
    }
}
