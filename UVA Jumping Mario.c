#include<stdio.h>
int main()
{
    int T,i,n,j,ara[55],hj,lj;

    scanf("%d",&T);
    for(i=0;i<T;i++){
        scanf("%d",&n);
        for(j=0;j<n;j++){
            scanf("%d",&ara[j]);
        }
        hj=0;
        lj=0;
        for(j=0;j<n-1;j++){
            if(ara[j+1]>ara[j])hj++;
            else if(ara[j+1]<ara[j])lj++;
        }
        printf("Case %d: %d %d\n",i+1,hj,lj);
    }
    return 0;
}
