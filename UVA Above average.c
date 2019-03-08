#include<stdio.h>
int main()
{
    int j;
    double T,i,n,ara[1010],sum,count;
    double ave,t1,t2;


    scanf("%lf",&T);
    for(i=0;i<T;i++){
        scanf("%lf",&n);
        sum=0;
        for(j=0;j<n;j++){
            scanf("%lf",&ara[j]);
            sum=sum+ara[j];
        }
        ave=sum/n;
        count=0;
        for(j=0;j<n;j++){
            if(ara[j]>ave)count++;
        }
        t1=count/n;
        t2=t1*100;
        printf("%.3lf%\n",t2);
    }
    return 0;
}
