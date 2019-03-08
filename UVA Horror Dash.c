#include<stdio.h>
int main()
{
    int T,i,n,j,ara[110],max,k;

    scanf("%d",&T);

    for(i=0;i<T;i++){
        scanf("%d",&n);
        for(j=0;j<n;j++){
            scanf("%d",&ara[j]);
        }
        max=ara[0];
        for(k=1;k<n;k++){
            if(max<ara[k])max=ara[k];
        }
        printf("Case %d: %d\n",i+1,max);
    }
    return 0;
}
