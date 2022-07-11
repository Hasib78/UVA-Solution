#include<stdio.h>
int main()
{
    long long int t,a,b,c,i;
    scanf("%lld",&t);
    for(i=0; i<t; i++)
    {
        scanf("%lld %lld %lld",&a,&b,&c);
        if(b>a && b<c)
        {
            printf("Case %lld: %lld\n",i+1,b);
        }
        else if(b>c && b<a)
        {
            printf("Case %lld: %lld\n",i+1,b);
        }
        else if(c>a && c<b)
        {
            printf("Case %lld: %lld\n",i+1,c);
        }
        else if(c>b && c<a)
        {
            printf("Case %lld: %lld\n",i+1,c);
        }
        else if(a>b && a<c)
        {
            printf("Case %lld: %lld\n",i+1,a);
        }
        else if(a>c && a<b)
        {
            printf("Case %lld: %lld\n",i+1,a);
        }
    }
}
