#include<stdio.h>
int main()
{
    int n,k,count,p,d,r,add;

    while(scanf("%d%d",&n,&k)!=EOF){
        count=n;
        p=n;
        for(;p>=k;){

            d=p/k;
            r=p%k;
            add=d;

            count=count+add;
            p=d+r;
        }
        printf("%d\n",count);
    }
    return 0;
}
