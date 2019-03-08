#include<stdio.h>
int main()
{
    double n,t;
    while(scanf("%lf",&n)==1){
        if(n<0)break;
        if (n==1){
            printf("0%%\n");
            continue;
        }
        t=(n/4)*100;
        printf("%.0lf%%\n",t);
    }
    return 0;
}
