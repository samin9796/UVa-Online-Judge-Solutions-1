#include<stdio.h>
#include<math.h>
int main()
{
    long long T,i,n,sum,t1[10000],j,t,k;
    double h;
    scanf("%lld",&T);
    for(i=0;i<T;i++){
        scanf("%lld",&n);
        t=n;
        for(j=0;t!=0;j++){
            t1[j]=t%10;
            t=t/10;
        }
        sum=0;
        for(k=0;k<j;k++){
                h=pow((double)t1[k],(double)j);
            sum=sum+(long long int)h;
        }
        if(sum==n)printf("Armstrong\n");
        else printf("Not Armstrong\n");
    }
    return 0;
}
