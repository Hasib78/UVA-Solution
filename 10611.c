#include<stdio.h>
int main()
{
    long long int a[100000],n,x,y,c,d,i,j;
    scanf("%lld",&n);
    for(i=0; i<n; i++)
    {
        scanf("%lld",&a[i]);
    }
    scanf("%lld",&x);

    for(i=0; i<x; i++)
    {
        c=0,d=0;
        scanf("%lld",&y);
        for(j=0; j<n; j++)
        {

            if(a[j]>y)
            {
                c=a[j];
                break;
            }
            if(a[j]<y)
            {
                d=a[j];
            }
        }

        if(d==0)
        {
            printf("X ");
        }
        else
        {
            printf("%lld ",d);
        }
        if(c==0)
        {
            printf("X\n");
        }
        else
        {
            printf("%lld\n",c);
        }
    }

}
