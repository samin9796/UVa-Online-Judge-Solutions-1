#include<stdio.h>
int main()
{
    long long int n,i;
    long long int p;
    int t;

    while(scanf("%lld",&n)!=EOF){
            t=2;
            if(n>13){
                printf("Overflow!\n");
                t=6;
            }

        for(p=1,i=1;i<=n && t==2;i++){
            p=p*i;
        }
        if(p<=10000 && t==2)printf("Underflow!\n");
        else if(t==2)printf("%lld\n",p);
    }
    return 0;
}
