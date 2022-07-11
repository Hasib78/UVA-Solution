#include<stdio.h>
int main()
{
    long long int n,a,b,c,d,e,i,j,count,sum;
    while(scanf("%lld%lld",&n,&a)!=EOF && n>0 && n<1000000 && a>0 && a<1000000)
    {
        c=n;
        d=a;
        if(c>d)
        {
           e=c;
           c=d;
           d=e;
        }
        sum=0;
        for(i=c; i<=d; i++)
        {
            count=0;
            b=i;

            if(b==1)
            {
                continue;
            }

            while(b!=1)
            {
                if(b%2==0)
                {
                    b=b/2;
                }
                else
                {
                    b=3*b+1;
                }
                count=count+1;
            }
            if(count>sum)
            {
                sum=count;
            }

        }
        printf("%lld %lld %lld\n",n,a,sum+1);
    }

}
