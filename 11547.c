#include<stdio.h>
#include<math.h>
int main()
{
    long long int t,a,b,c,d,e,i;
    scanf("%lld",&t);
    for(i=0;i<t;i++)
    {
        scanf("%lld",&a);
        b=(((a*567)/9+7492)*235/47)-498;
        c=b%100;
        d=c/10;
        e=abs(d);
        printf("%lld\n",e);
    }
}
