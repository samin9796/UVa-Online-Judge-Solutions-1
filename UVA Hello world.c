#include<stdio.h>
int main()
{
    int n,sum,i,j=1;

    while(scanf("%d",&n)!=EOF){
        if(n<0)
            break;
        sum=1;
        i=0;
        while(sum<n){
            sum=sum*2;
            i++;
        }

        printf("Case %d: %d\n",j,i);
        j++;
    }
    return 0;
}
