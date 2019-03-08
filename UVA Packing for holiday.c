#include<stdio.h>
int main()
{
    int T,i,l,w,h;
    scanf("%d",&T);

    for(i=0;i<T;i++){
        scanf("%d%d%d",&l,&w,&h);

        if(l<=20 && w<=20 && h<=20)printf("Case %d: good\n",i+1);
        else printf("Case %d: bad\n",i+1);
    }
    return 0;
}
