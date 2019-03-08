#include<stdio.h>
int main()
{
    int T,i,n;

    scanf("%d",&T);
    for(i=0;i<T;i++){
        scanf("%d",&n);
        n=315*n+36962;
        n=n/10;
        n=n%10;
        printf("%d\n",abs(n));
    }
    return 0;
}
