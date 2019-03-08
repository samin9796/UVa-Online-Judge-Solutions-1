#include<stdio.h>
int main()
{
    int h1,h2,m1,m2,i,p,m;

    while(scanf("%d%d%d%d",&h1,&m1,&h2,&m2)!=EOF){
        if(h1==0 && m1==0 && h2==0 && m2==0){break;}
        if(h1==h2 && m1<=m2){
            m=m2-m1;
            printf("%d\n",m);
        }
        else{
            h1=h1+1;
            i=0;
            p=(60-m1)+m2;
            if(h1>23){
                    h1=0;}
            while(h1!=h2){
                h1++;
                if(h1>23){
                    h1=0;
                }
                i++;
            }
            printf("%d\n",((i*60)+p));
        }
    }
    return 0;
}
