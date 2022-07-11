#include<stdio.h>
int main()
{
    double h,u,d,f,a,b,c,sum,i,l=0;
    int count;

    while(scanf("%lf",&h)!=EOF)
    {
        if(h==0)
        {
            break;
        }
        scanf("%lf %lf %lf",&u,&d,&f);
        sum=0,count=0;

        a=(u*f)/100;

        for(i=0; ;i++)
        {

            if(u>=0)
            {
                sum=sum+u;

            }

            count++;


            if(sum>h)
            {
                printf("success on day %d\n",count);
                break;
            }
            else if(sum<0)
            {
                printf("failure on day %d\n",count);
                break;
            }
            sum=sum-d;
            if(sum<0)
            {
                printf("failure on day %d\n",count);
                break;
            }
            u=u-a;
        }


    }
}
