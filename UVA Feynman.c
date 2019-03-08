#include<stdio.h>
int main()
{
    int n,sum;

    while(scanf("%d",&n)!=EOF){
        if(n==0)break;
        sum=0;

        for(;n!=0;n--){
            sum+=n*n;
        }
        printf("%d\n",sum);
    }
    return 0;
}
