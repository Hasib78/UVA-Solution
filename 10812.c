#include<stdio.h>
int main()
{
    long long int t,a,b,c,d,e,i;
    scanf("%lld",&t);
    for(i=0;i<t;i++)
    {
        scanf("%lld%lld",&a,&b);
            c=a+b;
            d=c/2;
            e=a-d;
            if(a<b || (a+b)%2!=0)
            {
                 printf("impossible\n");
            }
            else
            {
               printf("%lld %lld\n",d,e);
            }


    }

}
