#include<stdio.h>
int main()
{
    int n,p,count,t1,t2;

    while(scanf("%d",&n)!=EOF){
            p=6;
            count=0;
            while(n>=3 || p==6){
                if(p==6){
                   count=n;
                    n++;
                    p=2;
                }
                t1=n/3;
                t2=n%3;
                count+=t1;
                n=t1+t2;
            }
            printf("%d\n",count);
    }
    return 0;
}
