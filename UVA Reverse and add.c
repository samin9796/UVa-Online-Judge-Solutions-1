#include<stdio.h>
int main()
{
    long long int T,i,n,r,q,sum,p,d;

    scanf("%lld",&T);
    i=0;

    while(i<T){
        scanf("%lld",&n);
        q=n;
        p=0;
        d=2;
       while(1){
            r=0;
            while(q!=0){
            r=r*10+q%10;
            q=q/10;

        }
        if(n==r && d!=2){
            printf("%lld %lld\n",p,n);
            break;
        }
        else{
                sum=n+r;
                p++;
                d=4;
        q=sum;
        n=sum;
        }
       }
       i++;
    }

    return 0;
}
