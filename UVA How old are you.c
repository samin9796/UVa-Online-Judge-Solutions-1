#include<stdio.h>
int main()
{
    int T,i,cd,cm,cy,bd,bm,by;
    char ch;
    scanf("%d",&T);
    for(i=0;i<T;i++){

        scanf("%d%c%d%c%d%d%c%d%c%d",&cd,&ch,&cm,&ch,&cy,&bd,&ch,&bm,&ch,&by);

        if(cy<by)printf("Case #%d: Invalid birth date\n",i+1);
        else if(cy==by && cm<bm)printf("Case #%d: Invalid birth date\n",i+1);
        else if(cy==by &&cm==bm && cd<bd)printf("Case #%d: Invalid birth date\n",i+1);
        else if(cy-by>131)printf("Case #%d: Check birth date\n",i+1);
        else if(cy-by==131 && cm>bm)printf("Case #%d: Check birth date\n",i+1);
        else if(cy-by==131 && cm==bm &&cd>=bd)printf("Case #%d: Check birth date\n",i+1);
        else if(cy==by && cm==bm &&cd==bd)printf("Case #%d: 0\n",i+1);
        else if(cy>by && cm>bm)printf("Case #%d: %d\n",i+1,cy-by);
        else if(cy>by && cm<bm)printf("Case #%d: %d\n",i+1,cy-by-1);
        else if(cy==by)printf("Case #%d: 0\n",i+1);
        else if(cy>by && cm==bm &&cd<bd)printf("Case #%d: %d\n",i+1,cy-by-1);
        else if(cy>by && cm==bm && cd>bd)printf("Case #%d: %d\n",i+1,cy-by);
        else if(cy>by && cm==bm && cd==bd)printf("Case #%d: %d\n",i+1,cy-by);
    }
    return 0;
}
