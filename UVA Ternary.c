#include<stdio.h>
int main()
{
    long long int r,sum;
    long long int t1,n;

    while(scanf("%lld",&n)!=EOF){
        if(n<0)break;
        r=1;
        sum=0;
        while(n!=0){
            t1=n%3;
            sum=sum+t1*r;
            n=n/3;
            r=r*10;

        }
        printf("%lld\n",sum);
    }
    return 0;
}
