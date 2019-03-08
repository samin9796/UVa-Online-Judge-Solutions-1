#include<stdio.h>
int main()
{
    int T,i,match,ban,www,aban,tie,j;
    char result[15];

    scanf("%d",&T);
    for(i=0;i<T;i++){
        scanf("%d",&match);
        getchar();
        gets(result);
        ban=0;
        www=0;
        aban=0;
        tie=0;
        for(j=0;j<match;j++){
            if(result[j]=='B')ban++;
            else if(result[j]=='W')www++;
            else if(result[j]=='T')tie++;
            else aban++;
        }
        if(ban>0 && www==0 && tie==0)printf("Case %d: BANGLAWASH\n",i+1);
        else if(www>0 && ban==0 && tie==0)printf("Case %d: WHITEWASH\n",i+1);
        else if(aban==match)printf("Case %d: ABANDONED\n",i+1);
        else if(www>ban)printf("Case %d: WWW %d - %d\n",i+1,www,ban);
        else if(ban>www)printf("Case %d: BANGLADESH %d - %d\n",i+1,ban,www);
        else if(ban==www)printf("Case %d: DRAW %d %d\n",i+1,ban,tie);
        else printf("Case %d: DRAW %d %d\n",i+1,0,tie);

    }
    return 0;
}
