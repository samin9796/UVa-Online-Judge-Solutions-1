#include<stdio.h>
int main()
{
    int n,count,p,t1,t2;

    while(scanf("%d",&n)!=EOF){
            if(n==0)break;
        count=0;
        p=6;
        while(n>1 || p==6){
            p=2;
            if(n==2)n++;
            t1=n/3;
            t2=n%3;
            count+=t1;
            n=t1+t2;
        }
        printf("%d\n",count);
    }
    return 0;
}
