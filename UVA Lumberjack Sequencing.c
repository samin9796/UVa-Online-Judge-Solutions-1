#include<stdio.h>
int main()
{
    int T,i,j,ara[13],count1,count2;

    scanf("%d",&T);
    printf("Lumberjacks:\n");

    for(i=0;i<T;i++){
            count1=0;
            count2=0;
        for(j=0;j<10;j++){
            scanf("%d",&ara[j]);
        }
        for(j=1;j<10;j++){
            if(ara[j]>ara[j-1])count1++;
            if(ara[j]<ara[j-1])count2++;
        }
        if(count1==9 || count2==9)printf("Ordered\n");
        else printf("Unordered\n");
    }
    return 0;
}
